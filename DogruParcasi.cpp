#include "DogruParcasi.h"

// DogruParcasi s�n�f�n�n yap�c� fonksiyonu, iki Nokta nesnesi kullanarak do�ru par�as� olu�turur.
DogruParcasi::DogruParcasi(const Nokta& point1, const Nokta& point2) : p1(point1), p2(point2) {}

// Kopya yap�c� fonksiyon, ba�ka bir DogruParcasi nesnesini kullanarak bir kopya olu�turur.
DogruParcasi::DogruParcasi(const DogruParcasi& kopya) : p1(kopya.p1), p2(kopya.p2) {}

// Orta nokta, uzunluk ve e�im bilgilerini kullanarak do�ru par�as�n�n u� noktalar�n� hesaplayan fonksiyon.
DogruParcasi::DogruParcasi(const Nokta& merkez, double uzunluk, double egim) {
    // Do�ru par�as�n�n a��s�n� bulmak i�in atan2 fonksiyonunu kullan�yoruz.
    double aci = atan2(egim, 1.0);

    // Orta noktadan iki u� noktaya olan x ve y uzakl�klar�n� hesaplamak i�in cos ve sin fonksiyonlar�n�
    // kullan�yoruz. Uzakl�klar, do�ru par�as�n�n uzunlu�unun yar�s� ile cos ve sin de�erlerinin �arp�m�na
    // e�ittir.
    double xUzaklik = 0.5 * uzunluk * cos(aci);
    double yUzaklik = 0.5 * uzunluk * sin(aci);

    // Orta noktan�n x ve y de�erlerine, x ve y uzakl�klar�n� ekleyerek veya ��kararak, iki u� noktan�n x
    // ve y de�erlerini buluyoruz.
    double yeniX1 = merkez.getX() - xUzaklik;
    double yeniY1 = merkez.getY() - yUzaklik;
    double yeniX2 = merkez.getX() + xUzaklik;
    double yeniY2 = merkez.getY() + yUzaklik;

    // Buldu�umuz x ve y de�erlerini kullanarak, iki u� noktay� olu�turuyoruz.
    p1.set(yeniX1, yeniY1);
    p2.set(yeniX2, yeniY2);
}

// Birinci u� noktay� getiren fonksiyon.
const Nokta& DogruParcasi::getP1() const { return p1; }

// �kinci u� noktay� getiren fonksiyon.
const Nokta& DogruParcasi::getP2() const { return p2; }

// Birinci u� noktay� ayarlayan fonksiyon.
void DogruParcasi::setP1(const Nokta& point) { p1 = point; }

// �kinci u� noktay� ayarlayan fonksiyon.
void DogruParcasi::setP2(const Nokta& point) { p2 = point; }

// Do�ru par�as�n�n uzunlu�unu hesaplayan fonksiyon.
double DogruParcasi::uzunluk() const {
    return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
}

// Bir Nokta nesnesi ile do�ru par�as�n�n kesi�im noktas�n� hesaplayan fonksiyon.
Nokta DogruParcasi::kesisimNoktas�(const Nokta& point) const {
    double x1 = p1.getX();
    double y1 = p1.getY();
    double x2 = p2.getX();
    double y2 = p2.getY();
    double x3 = point.getX();
    double y3 = point.getY();

    double u = ((x3 - x1) * (x2 - x1) + (y3 - y1) * (y2 - y1)) / pow(uzunluk(), 2);

    double x = x1 + u * (x2 - x1);
    double y = y1 + u * (y2 - y1);

    return Nokta(x, y);
}

// Do�ru par�as�n�n orta noktas�n� hesaplayan fonksiyon.
Nokta DogruParcasi::ortaNokta() const {
    double x = 0.5 * (p1.getX() + p2.getX());
    double y = 0.5 * (p1.getY() + p2.getY());

    return Nokta(x, y);
}

// Do�ru par�as�n�n �zelliklerini bir dize olarak d�nd�ren fonksiyon.
string DogruParcasi::toString() const {
    return "[" + p1.toString() + ", " + p2.toString() + "]";
}

// Do�ru par�as�n�n �zelliklerini ekrana yazd�ran fonksiyon.
void DogruParcasi::yazdir() const {
    cout << toString() << endl;
}
