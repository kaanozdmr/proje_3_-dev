#include "Ucgen.h"

// ��gen s�n�f�n�n yap�c� fonksiyonu, �� nokta alarak ��gen olu�turur.
Ucgen::Ucgen(const Nokta& point1, const Nokta& point2, const Nokta& point3)
    : nokta1(point1), nokta2(point2), nokta3(point3) {}

// Birinci noktay� getiren fonksiyon.
const Nokta& Ucgen::getNokta1() const { return nokta1; }

// �kinci noktay� getiren fonksiyon.
const Nokta& Ucgen::getNokta2() const { return nokta2; }

// ���nc� noktay� getiren fonksiyon.
const Nokta& Ucgen::getNokta3() const { return nokta3; }

// Birinci noktay� ayarlayan fonksiyon.
void Ucgen::setNokta1(const Nokta& point) { nokta1 = point; }

// �kinci noktay� ayarlayan fonksiyon.
void Ucgen::setNokta2(const Nokta& point) { nokta2 = point; }

// ���nc� noktay� ayarlayan fonksiyon.
void Ucgen::setNokta3(const Nokta& point) { nokta3 = point; }

// ��genin alan�n� hesaplayan fonksiyon.
double Ucgen::alan() const {
    // ��genin kenarlar�n� i�eren do�ru par�alar� olu�turuluyor.
    DogruParcasi dp1(nokta1, nokta2);
    DogruParcasi dp2(nokta2, nokta3);
    DogruParcasi dp3(nokta3, nokta1);

    // Her bir kenar�n uzunlu�u al�n�yor.
    double u1 = dp1.uzunluk();
    double u2 = dp2.uzunluk();
    double u3 = dp3.uzunluk();

    // Semiperimetre (yar� �evre) hesaplan�yor.
    double s = (u1 + u2 + u3) / 2.0;

    // Heron'un form�l� ile alan hesaplan�yor.
    return sqrt(s * (s - u1) * (s - u2) * (s - u3));
}

// ��genin �evresini hesaplayan fonksiyon.
double Ucgen::cevre() const {
    // ��genin kenarlar�n� i�eren do�ru par�alar� olu�turuluyor.
    DogruParcasi dp1(nokta1, nokta2);
    DogruParcasi dp2(nokta2, nokta3);
    DogruParcasi dp3(nokta3, nokta1);

    // Her bir kenar�n uzunlu�u toplanarak �evre hesaplan�yor.
    return dp1.uzunluk() + dp2.uzunluk() + dp3.uzunluk();
}

// ��genin a��lar�n� hesaplayan fonksiyon.
double* Ucgen::acilar() const {
    // ��genin kenarlar�n� i�eren do�ru par�alar� olu�turuluyor.
    double u1 = DogruParcasi(nokta2, nokta1).uzunluk();
    double u2 = DogruParcasi(nokta2, nokta3).uzunluk();
    double u3 = DogruParcasi(nokta3, nokta1).uzunluk();

    // A��lar� saklamak i�in bir dizi olu�turuluyor.
    double* aciDizi = new double[3];

    // Her bir a��, kenar uzunluklar� kullan�larak acos fonksiyonu ile hesaplan�yor ve derece cinsine �evriliyor.
    aciDizi[0] = acos((u2 * u2 + u3 * u3 - u1 * u1) / (2 * u2 * u3)) * 180.0 / 3.14;
    aciDizi[1] = acos((u1 * u1 + u3 * u3 - u2 * u2) / (2 * u1 * u3)) * 180.0 / 3.14;
    aciDizi[2] = acos((u1 * u1 + u2 * u2 - u3 * u3) / (2 * u1 * u2)) * 180.0 / 3.14;

    return aciDizi;
}

// ��genin �zelliklerini string olarak temsil eden fonksiyon.
string Ucgen::toString() const {
    return "��gen; " + nokta1.toString() + ", " + nokta2.toString() + ", " + nokta3.toString();
}
