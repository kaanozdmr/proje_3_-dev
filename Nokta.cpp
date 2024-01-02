#include "Nokta.h"
// Default yap�c� fonksiyon, x ve y koordinatlar�n� s�f�r olarak ayarlar.
Nokta::Nokta() : x(0.0), y(0.0) {}

// Tek bir de�eri alarak yap�c� fonksiyon, x ve y koordinatlar�na ayn� de�eri atar.
Nokta::Nokta(double deger) : x(deger), y(deger) {}

// �ki de�eri alarak yap�c� fonksiyon, x ve y koordinatlar�na verilen de�erleri atar.
Nokta::Nokta(double xdeger, double ydeger) : x(xdeger), y(ydeger) {}

// Kopya yap�c� fonksiyon, ba�ka bir Nokta nesnesini kullanarak bir kopya olu�turur.
Nokta::Nokta(const Nokta& kopya) : x(kopya.x), y(kopya.y) {}

// Kopya ve ofset de�erlerini alarak yap�c� fonksiyon, kopya noktaya ofset ekler.
Nokta::Nokta(const Nokta& kopya, double ofset_x, double ofset_y) : x(kopya.x + ofset_x), y(kopya.y + ofset_y) {}

// X koordinat�n� getiren fonksiyon.
double Nokta::getX() const { return x; }

// Y koordinat�n� getiren fonksiyon.
double Nokta::getY() const { return y; }

// X koordinat�n� set eden fonksiyon.
void Nokta::setX(double deger) { x = deger; }

// Y koordinat�n� set eden fonksiyon.
void Nokta::setY(double deger) { y = deger; }

// X ve Y koordinatlar�n� set eden fonksiyon.
void Nokta::set(double xdeger, double ydeger) {
    x = xdeger;
    y = ydeger;
}

// Noktan�n koordinatlar�n� string olarak temsil eden fonksiyon.
string Nokta::toString() const {
    if (x == static_cast<int>(x) && y == static_cast<int>(y)) {
        return "(" + to_string(static_cast<int>(x)) + ", " + to_string(static_cast<int>(y)) + ")";
    }
    else {
        return "(" + to_string(x) + ", " + to_string(y) + ")";
    }
}

// Noktan�n koordinatlar�n� ekrana yazd�ran fonksiyon.
void Nokta::yazdir() const {
    cout << toString() << endl;
}