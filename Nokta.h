#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Nokta {
private:
    double x;  // Noktanýn x koordinatý
    double y;  // Noktanýn y koordinatý

public:
    // Varsayýlan kurucu fonksiyon, noktayý (0,0) koordinatýna yerleþtirir
    Nokta();

    // Belirli bir deðer kullanarak kurucu fonksiyon, noktayý (deger, deger) koordinatýna yerleþtirir
    Nokta(double deger);

    // Belirli x ve y deðerlerini kullanarak kurucu fonksiyon
    Nokta(double xdeger, double ydeger);

    // Kopya kurucu fonksiyon
    Nokta(const Nokta& kopya);

    // X ve Y ofset deðerleri kullanarak kopya kurucu fonksiyon
    Nokta(const Nokta& kopya, double ofset_x, double ofset_y);

    // Noktanýn x koordinatýný döndüren fonksiyon
    double getX() const;

    // Noktanýn y koordinatýný döndüren fonksiyon
    double getY() const;

    // Noktanýn x koordinatýný set eden fonksiyon
    void setX(double deger);

    // Noktanýn y koordinatýný set eden fonksiyon
    void setY(double deger);

    // Noktanýn x ve y koordinatlarýný set eden fonksiyon
    void set(double xdeger, double ydeger);

    // Noktayý bir dizeye dönüþtüren fonksiyon
    string toString() const;

    // Noktayý ekrana yazdýran fonksiyon
    void yazdir() const;
};
