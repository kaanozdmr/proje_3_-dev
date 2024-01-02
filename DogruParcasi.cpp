#include "DogruParcasi.h"

// DogruParcasi sýnýfýnýn yapýcý fonksiyonu, iki Nokta nesnesi kullanarak doðru parçasý oluþturur.
DogruParcasi::DogruParcasi(const Nokta& point1, const Nokta& point2) : p1(point1), p2(point2) {}

// Kopya yapýcý fonksiyon, baþka bir DogruParcasi nesnesini kullanarak bir kopya oluþturur.
DogruParcasi::DogruParcasi(const DogruParcasi& kopya) : p1(kopya.p1), p2(kopya.p2) {}

// Orta nokta, uzunluk ve eðim bilgilerini kullanarak doðru parçasýnýn uç noktalarýný hesaplayan fonksiyon.
DogruParcasi::DogruParcasi(const Nokta& merkez, double uzunluk, double egim) {
    // Doðru parçasýnýn açýsýný bulmak için atan2 fonksiyonunu kullanýyoruz.
    double aci = atan2(egim, 1.0);

    // Orta noktadan iki uç noktaya olan x ve y uzaklýklarýný hesaplamak için cos ve sin fonksiyonlarýný
    // kullanýyoruz. Uzaklýklar, doðru parçasýnýn uzunluðunun yarýsý ile cos ve sin deðerlerinin çarpýmýna
    // eþittir.
    double xUzaklik = 0.5 * uzunluk * cos(aci);
    double yUzaklik = 0.5 * uzunluk * sin(aci);

    // Orta noktanýn x ve y deðerlerine, x ve y uzaklýklarýný ekleyerek veya çýkararak, iki uç noktanýn x
    // ve y deðerlerini buluyoruz.
    double yeniX1 = merkez.getX() - xUzaklik;
    double yeniY1 = merkez.getY() - yUzaklik;
    double yeniX2 = merkez.getX() + xUzaklik;
    double yeniY2 = merkez.getY() + yUzaklik;

    // Bulduðumuz x ve y deðerlerini kullanarak, iki uç noktayý oluþturuyoruz.
    p1.set(yeniX1, yeniY1);
    p2.set(yeniX2, yeniY2);
}

// Birinci uç noktayý getiren fonksiyon.
const Nokta& DogruParcasi::getP1() const { return p1; }

// Ýkinci uç noktayý getiren fonksiyon.
const Nokta& DogruParcasi::getP2() const { return p2; }

// Birinci uç noktayý ayarlayan fonksiyon.
void DogruParcasi::setP1(const Nokta& point) { p1 = point; }

// Ýkinci uç noktayý ayarlayan fonksiyon.
void DogruParcasi::setP2(const Nokta& point) { p2 = point; }

// Doðru parçasýnýn uzunluðunu hesaplayan fonksiyon.
double DogruParcasi::uzunluk() const {
    return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
}

// Bir Nokta nesnesi ile doðru parçasýnýn kesiþim noktasýný hesaplayan fonksiyon.
Nokta DogruParcasi::kesisimNoktasý(const Nokta& point) const {
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

// Doðru parçasýnýn orta noktasýný hesaplayan fonksiyon.
Nokta DogruParcasi::ortaNokta() const {
    double x = 0.5 * (p1.getX() + p2.getX());
    double y = 0.5 * (p1.getY() + p2.getY());

    return Nokta(x, y);
}

// Doðru parçasýnýn özelliklerini bir dize olarak döndüren fonksiyon.
string DogruParcasi::toString() const {
    return "[" + p1.toString() + ", " + p2.toString() + "]";
}

// Doðru parçasýnýn özelliklerini ekrana yazdýran fonksiyon.
void DogruParcasi::yazdir() const {
    cout << toString() << endl;
}
