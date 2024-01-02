#include "Daire.h"
// Daire sınıfının yapıcı fonksiyonu, belirli bir merkez noktası ve yarıçap ile daire oluşturur.
Daire::Daire(const Nokta& merkez, double yaricap) : merkez(merkez), yariCap(yaricap) {}

// Kopya yapıcı fonksiyon, başka bir Daire nesnesini kullanarak bir kopya oluşturur.
Daire::Daire(const Daire& kopya) : merkez(kopya.merkez), yariCap(kopya.yariCap) {}

// İkinci bir kopya yapıcı fonksiyon, belirli bir oranla (x) büyütülmüş bir kopya oluşturur.
Daire::Daire(const Daire& kopya, double x) : merkez(kopya.merkez), yariCap(kopya.yariCap* x) {}

// Dairenin alanını hesaplayan fonksiyon. Alan, π * r^2 formülü ile hesaplanır.
double Daire::alan() const {
    return 3.14 * pow(yariCap, 2);
}

// Dairenin çevresini hesaplayan fonksiyon. Çevre, 2 * π * r formülü ile hesaplanır.
double Daire::cevre() const {
    return 2 * 3.14 * yariCap;
}

// İki dairenin kesişim durumunu belirleyen fonksiyon.
// 0: İç içe daireler, 1: Kesişen daireler, 2: Hiç kesişim yok
int Daire::kesisim(const Daire& kopya) const {
    double mesafe = sqrt(pow(kopya.merkez.getX() - merkez.getX(), 2) +
        pow(kopya.merkez.getY() - merkez.getY(), 2));

    if (mesafe + kopya.yariCap < yariCap) {
        return 0; // İç içe daireler
    }
    else if (mesafe < yariCap + kopya.yariCap && mesafe + kopya.yariCap > yariCap) {
        return 1; // Kesişen daireler
    }
    else {
        return 2; // Hiç kesişim yok
    }
}

// Dairenin özelliklerini bir dize olarak döndüren fonksiyon.
string Daire::toString() const {
    return "Merkez: " + merkez.toString() + ", Yarıçap: " + to_string(static_cast<int>(yariCap));
}

// Dairenin özelliklerini ekrana yazdıran fonksiyon.
void Daire::yazdir() const {
    cout << toString() << endl;
}

