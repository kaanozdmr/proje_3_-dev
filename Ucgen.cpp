#include "Ucgen.h"

// Üçgen sýnýfýnýn yapýcý fonksiyonu, üç nokta alarak üçgen oluþturur.
Ucgen::Ucgen(const Nokta& point1, const Nokta& point2, const Nokta& point3)
    : nokta1(point1), nokta2(point2), nokta3(point3) {}

// Birinci noktayý getiren fonksiyon.
const Nokta& Ucgen::getNokta1() const { return nokta1; }

// Ýkinci noktayý getiren fonksiyon.
const Nokta& Ucgen::getNokta2() const { return nokta2; }

// Üçüncü noktayý getiren fonksiyon.
const Nokta& Ucgen::getNokta3() const { return nokta3; }

// Birinci noktayý ayarlayan fonksiyon.
void Ucgen::setNokta1(const Nokta& point) { nokta1 = point; }

// Ýkinci noktayý ayarlayan fonksiyon.
void Ucgen::setNokta2(const Nokta& point) { nokta2 = point; }

// Üçüncü noktayý ayarlayan fonksiyon.
void Ucgen::setNokta3(const Nokta& point) { nokta3 = point; }

// Üçgenin alanýný hesaplayan fonksiyon.
double Ucgen::alan() const {
    // Üçgenin kenarlarýný içeren doðru parçalarý oluþturuluyor.
    DogruParcasi dp1(nokta1, nokta2);
    DogruParcasi dp2(nokta2, nokta3);
    DogruParcasi dp3(nokta3, nokta1);

    // Her bir kenarýn uzunluðu alýnýyor.
    double u1 = dp1.uzunluk();
    double u2 = dp2.uzunluk();
    double u3 = dp3.uzunluk();

    // Semiperimetre (yarý çevre) hesaplanýyor.
    double s = (u1 + u2 + u3) / 2.0;

    // Heron'un formülü ile alan hesaplanýyor.
    return sqrt(s * (s - u1) * (s - u2) * (s - u3));
}

// Üçgenin çevresini hesaplayan fonksiyon.
double Ucgen::cevre() const {
    // Üçgenin kenarlarýný içeren doðru parçalarý oluþturuluyor.
    DogruParcasi dp1(nokta1, nokta2);
    DogruParcasi dp2(nokta2, nokta3);
    DogruParcasi dp3(nokta3, nokta1);

    // Her bir kenarýn uzunluðu toplanarak çevre hesaplanýyor.
    return dp1.uzunluk() + dp2.uzunluk() + dp3.uzunluk();
}

// Üçgenin açýlarýný hesaplayan fonksiyon.
double* Ucgen::acilar() const {
    // Üçgenin kenarlarýný içeren doðru parçalarý oluþturuluyor.
    double u1 = DogruParcasi(nokta2, nokta1).uzunluk();
    double u2 = DogruParcasi(nokta2, nokta3).uzunluk();
    double u3 = DogruParcasi(nokta3, nokta1).uzunluk();

    // Açýlarý saklamak için bir dizi oluþturuluyor.
    double* aciDizi = new double[3];

    // Her bir açý, kenar uzunluklarý kullanýlarak acos fonksiyonu ile hesaplanýyor ve derece cinsine çevriliyor.
    aciDizi[0] = acos((u2 * u2 + u3 * u3 - u1 * u1) / (2 * u2 * u3)) * 180.0 / 3.14;
    aciDizi[1] = acos((u1 * u1 + u3 * u3 - u2 * u2) / (2 * u1 * u3)) * 180.0 / 3.14;
    aciDizi[2] = acos((u1 * u1 + u2 * u2 - u3 * u3) / (2 * u1 * u2)) * 180.0 / 3.14;

    return aciDizi;
}

// Üçgenin özelliklerini string olarak temsil eden fonksiyon.
string Ucgen::toString() const {
    return "Üçgen; " + nokta1.toString() + ", " + nokta2.toString() + ", " + nokta3.toString();
}
