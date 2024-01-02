#pragma once
#include "Nokta.h"
#include "DogruParcasi.h"

class Ucgen {
private:
    Nokta nokta1;  // Üçgenin birinci noktasý
    Nokta nokta2;  // Üçgenin ikinci noktasý
    Nokta nokta3;  // Üçgenin üçüncü noktasý

public:
    // Üç noktayý kullanarak kurucu fonksiyon
    Ucgen(const Nokta& point1, const Nokta& point2, const Nokta& point3);

    // Birinci noktanýn referansýný const olarak döndüren fonksiyon
    const Nokta& getNokta1() const;

    // Ýkinci noktanýn referansýný const olarak döndüren fonksiyon
    const Nokta& getNokta2() const;

    // Üçüncü noktanýn referansýný const olarak döndüren fonksiyon
    const Nokta& getNokta3() const;

    // Birinci noktayý set eden fonksiyon
    void setNokta1(const Nokta& point);

    // Ýkinci noktayý set eden fonksiyon
    void setNokta2(const Nokta& point);

    // Üçüncü noktayý set eden fonksiyon
    void setNokta3(const Nokta& point);

    // Üçgenin alanýný hesaplayan fonksiyon
    double alan() const;

    // Üçgenin çevresini hesaplayan fonksiyon
    double cevre() const;

    // Üçgenin açýlarýný hesaplayarak bir dizi olarak döndüren fonksiyon
    double* acilar() const;

    // Üçgeni bir dizeye dönüþtüren fonksiyon
    string toString() const;
};
