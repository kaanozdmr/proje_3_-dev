#pragma once
#include "Nokta.h"
#include <iostream>
using namespace std;

class DogruParcasi {
private:
    Nokta p1;  // Parçanýn birinci noktasý
    Nokta p2;  // Parçanýn ikinci noktasý

public:
    // Ýki nokta kullanarak kurucu fonksiyon
    DogruParcasi(const Nokta& point1, const Nokta& point2);

    // Kopya kurucu fonksiyon
    DogruParcasi(const DogruParcasi& kopya);

    // Merkez, uzunluk ve eðim kullanarak kurucu fonksiyon
    DogruParcasi(const Nokta& merkez, double uzunluk, double egim);

    // Birinci noktanýn referansýný const olarak döndür
    const Nokta& getP1() const;

    // Ýkinci noktanýn referansýný const olarak döndür
    const Nokta& getP2() const;

    // Birinci noktayý set et
    void setP1(const Nokta& point);

    // Ýkinci noktayý set et
    void setP2(const Nokta& point);

    // Parça uzunluðunu hesapla
    double uzunluk() const;

    // Verilen bir nokta ile parçanýn kesiþim noktasýný hesapla
    Nokta kesisimNoktasý(const Nokta& point) const;

    // Parçanýn orta noktasýný hesapla
    Nokta ortaNokta() const;

    // Parçayý bir dizeye dönüþtür
    string toString() const;

    // Parçayý ekrana yazdýr
    void yazdir() const;
};
