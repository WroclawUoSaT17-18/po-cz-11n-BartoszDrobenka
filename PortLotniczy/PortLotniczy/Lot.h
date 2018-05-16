#pragma once
#include "informacje.h"
#include <string>


class Lot : public Informacje// dziedzicznie publicznie
{
	string Linia_Lotnicza;
public:
	Lot();  // konstr. bezargumentowy
	Lot(string Linia_Lotnicza,string godzina_Od, string godzina_Pr, string miasto_Od, string miasto_Pr, string data_Od, string data_Pr, double cena, double czas );// konstruktor argumentowy
    string zwroc_informacje();
	string zwroc_lot();
};