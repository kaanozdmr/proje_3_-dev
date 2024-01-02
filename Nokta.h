#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Nokta {
private:
    double x;  // Noktan�n x koordinat�
    double y;  // Noktan�n y koordinat�

public:
    // Varsay�lan kurucu fonksiyon, noktay� (0,0) koordinat�na yerle�tirir
    Nokta();

    // Belirli bir de�er kullanarak kurucu fonksiyon, noktay� (deger, deger) koordinat�na yerle�tirir
    Nokta(double deger);

    // Belirli x ve y de�erlerini kullanarak kurucu fonksiyon
    Nokta(double xdeger, double ydeger);

    // Kopya kurucu fonksiyon
    Nokta(const Nokta& kopya);

    // X ve Y ofset de�erleri kullanarak kopya kurucu fonksiyon
    Nokta(const Nokta& kopya, double ofset_x, double ofset_y);

    // Noktan�n x koordinat�n� d�nd�ren fonksiyon
    double getX() const;

    // Noktan�n y koordinat�n� d�nd�ren fonksiyon
    double getY() const;

    // Noktan�n x koordinat�n� set eden fonksiyon
    void setX(double deger);

    // Noktan�n y koordinat�n� set eden fonksiyon
    void setY(double deger);

    // Noktan�n x ve y koordinatlar�n� set eden fonksiyon
    void set(double xdeger, double ydeger);

    // Noktay� bir dizeye d�n��t�ren fonksiyon
    string toString() const;

    // Noktay� ekrana yazd�ran fonksiyon
    void yazdir() const;
};
