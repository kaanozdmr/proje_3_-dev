#pragma once
#include "Nokta.h"

class Daire {
private:
    Nokta merkez;    // Dairenin merkezi
    double yariCap;  // Dairenin yarý çapý

public:
    // Merkez ve yarý çap parametreleri ile kurucu fonksiyon
    Daire(const Nokta& merkez, double yaricap);

    // Kopya kurucu fonksiyon
    Daire(const Daire& kopya);

    // X koordinatýnda bir kayma ile kopya kurucu fonksiyon
    Daire(const Daire& kopya, double x);

    // Dairenin alanýný hesapla ve döndür
    double alan() const;

    // Dairenin çevresini hesapla ve döndür
    double cevre() const;

    // Ýki dairenin kesiþip kesiþmediðini kontrol et ve sonucu döndür
    int kesisim(const Daire& kopya) const;

    // Daire bilgilerini bir dizeye dönüþtür
    string toString() const;

    // Daire bilgilerini ekrana yazdýr
    void yazdir() const;
};

