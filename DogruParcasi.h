#pragma once
#include "Nokta.h"
#include <iostream>
using namespace std;

class DogruParcasi {
private:
    Nokta p1;  // Par�an�n birinci noktas�
    Nokta p2;  // Par�an�n ikinci noktas�

public:
    // �ki nokta kullanarak kurucu fonksiyon
    DogruParcasi(const Nokta& point1, const Nokta& point2);

    // Kopya kurucu fonksiyon
    DogruParcasi(const DogruParcasi& kopya);

    // Merkez, uzunluk ve e�im kullanarak kurucu fonksiyon
    DogruParcasi(const Nokta& merkez, double uzunluk, double egim);

    // Birinci noktan�n referans�n� const olarak d�nd�r
    const Nokta& getP1() const;

    // �kinci noktan�n referans�n� const olarak d�nd�r
    const Nokta& getP2() const;

    // Birinci noktay� set et
    void setP1(const Nokta& point);

    // �kinci noktay� set et
    void setP2(const Nokta& point);

    // Par�a uzunlu�unu hesapla
    double uzunluk() const;

    // Verilen bir nokta ile par�an�n kesi�im noktas�n� hesapla
    Nokta kesisimNoktas�(const Nokta& point) const;

    // Par�an�n orta noktas�n� hesapla
    Nokta ortaNokta() const;

    // Par�ay� bir dizeye d�n��t�r
    string toString() const;

    // Par�ay� ekrana yazd�r
    void yazdir() const;
};
