#pragma once
#include "Nokta.h"
#include "DogruParcasi.h"

class Ucgen {
private:
    Nokta nokta1;  // ��genin birinci noktas�
    Nokta nokta2;  // ��genin ikinci noktas�
    Nokta nokta3;  // ��genin ���nc� noktas�

public:
    // �� noktay� kullanarak kurucu fonksiyon
    Ucgen(const Nokta& point1, const Nokta& point2, const Nokta& point3);

    // Birinci noktan�n referans�n� const olarak d�nd�ren fonksiyon
    const Nokta& getNokta1() const;

    // �kinci noktan�n referans�n� const olarak d�nd�ren fonksiyon
    const Nokta& getNokta2() const;

    // ���nc� noktan�n referans�n� const olarak d�nd�ren fonksiyon
    const Nokta& getNokta3() const;

    // Birinci noktay� set eden fonksiyon
    void setNokta1(const Nokta& point);

    // �kinci noktay� set eden fonksiyon
    void setNokta2(const Nokta& point);

    // ���nc� noktay� set eden fonksiyon
    void setNokta3(const Nokta& point);

    // ��genin alan�n� hesaplayan fonksiyon
    double alan() const;

    // ��genin �evresini hesaplayan fonksiyon
    double cevre() const;

    // ��genin a��lar�n� hesaplayarak bir dizi olarak d�nd�ren fonksiyon
    double* acilar() const;

    // ��geni bir dizeye d�n��t�ren fonksiyon
    string toString() const;
};
