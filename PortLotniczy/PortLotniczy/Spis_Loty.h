#pragma once
#include <vector>
#include <fstream>
#include <iostream>
#include "Lot.h"

using namespace std;

class Spis_Loty
{
	std::vector<Lot*> Loty;
public:
	void wczytaj_plik();
	std::vector<Lot*> zwroc() { return Loty; } // zwraca na zew liste lotow // jezeli funkcje sa krotkie mozna napsiac cialo funkci w pliku naglowkowym
};