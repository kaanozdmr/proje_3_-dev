#include "Nokta.h"
// Default yapýcý fonksiyon, x ve y koordinatlarýný sýfýr olarak ayarlar.
Nokta::Nokta() : x(0.0), y(0.0) {}

// Tek bir deðeri alarak yapýcý fonksiyon, x ve y koordinatlarýna ayný deðeri atar.
Nokta::Nokta(double deger) : x(deger), y(deger) {}

// Ýki deðeri alarak yapýcý fonksiyon, x ve y koordinatlarýna verilen deðerleri atar.
Nokta::Nokta(double xdeger, double ydeger) : x(xdeger), y(ydeger) {}

// Kopya yapýcý fonksiyon, baþka bir Nokta nesnesini kullanarak bir kopya oluþturur.
Nokta::Nokta(const Nokta& kopya) : x(kopya.x), y(kopya.y) {}

// Kopya ve ofset deðerlerini alarak yapýcý fonksiyon, kopya noktaya ofset ekler.
Nokta::Nokta(const Nokta& kopya, double ofset_x, double ofset_y) : x(kopya.x + ofset_x), y(kopya.y + ofset_y) {}

// X koordinatýný getiren fonksiyon.
double Nokta::getX() const { return x; }

// Y koordinatýný getiren fonksiyon.
double Nokta::getY() const { return y; }

// X koordinatýný set eden fonksiyon.
void Nokta::setX(double deger) { x = deger; }

// Y koordinatýný set eden fonksiyon.
void Nokta::setY(double deger) { y = deger; }

// X ve Y koordinatlarýný set eden fonksiyon.
void Nokta::set(double xdeger, double ydeger) {
    x = xdeger;
    y = ydeger;
}

// Noktanýn koordinatlarýný string olarak temsil eden fonksiyon.
string Nokta::toString() const {
    if (x == static_cast<int>(x) && y == static_cast<int>(y)) {
        return "(" + to_string(static_cast<int>(x)) + ", " + to_string(static_cast<int>(y)) + ")";
    }
    else {
        return "(" + to_string(x) + ", " + to_string(y) + ")";
    }
}

// Noktanýn koordinatlarýný ekrana yazdýran fonksiyon.
void Nokta::yazdir() const {
    cout << toString() << endl;
}