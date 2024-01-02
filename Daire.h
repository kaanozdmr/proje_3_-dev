#pragma once
#include "Nokta.h"

class Daire {
private:
    Nokta merkez;    // Dairenin merkezi
    double yariCap;  // Dairenin yar� �ap�

public:
    // Merkez ve yar� �ap parametreleri ile kurucu fonksiyon
    Daire(const Nokta& merkez, double yaricap);

    // Kopya kurucu fonksiyon
    Daire(const Daire& kopya);

    // X koordinat�nda bir kayma ile kopya kurucu fonksiyon
    Daire(const Daire& kopya, double x);

    // Dairenin alan�n� hesapla ve d�nd�r
    double alan() const;

    // Dairenin �evresini hesapla ve d�nd�r
    double cevre() const;

    // �ki dairenin kesi�ip kesi�medi�ini kontrol et ve sonucu d�nd�r
    int kesisim(const Daire& kopya) const;

    // Daire bilgilerini bir dizeye d�n��t�r
    string toString() const;

    // Daire bilgilerini ekrana yazd�r
    void yazdir() const;
};

