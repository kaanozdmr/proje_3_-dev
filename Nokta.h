#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Nokta {
private:
    double x;  // Noktanın x koordinatı
    double y;  // Noktanın y koordinatı

public:
    // Varsayılan kurucu fonksiyon, noktayı (0,0) koordinatına yerleştirir
    Nokta();

    // Belirli bir değer kullanarak kurucu fonksiyon, noktayı (deger, deger) koordinatına yerleştirir
    Nokta(double deger);

    // Belirli x ve y değerlerini kullanarak kurucu fonksiyon
    Nokta(double xdeger, double ydeger);

    // Kopya kurucu fonksiyon
    Nokta(const Nokta& kopya);

    // X ve Y ofset değerleri kullanarak kopya kurucu fonksiyon
    Nokta(const Nokta& kopya, double ofset_x, double ofset_y);

    // Noktanın x koordinatını döndüren fonksiyon
    double getX() const;

    // Noktanın y koordinatını döndüren fonksiyon
    double getY() const;

    // Noktanın x koordinatını set eden fonksiyon
    void setX(double deger);

    // Noktanın y koordinatını set eden fonksiyon
    void setY(double deger);

    // Noktanın x ve y koordinatlarını set eden fonksiyon
    void set(double xdeger, double ydeger);

    // Noktayı bir dizeye dönüştüren fonksiyon
    string toString() const;

    // Noktayı ekrana yazdıran fonksiyon
    void yazdir() const;
};
