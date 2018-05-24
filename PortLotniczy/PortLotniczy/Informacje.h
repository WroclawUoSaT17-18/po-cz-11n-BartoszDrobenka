

#pragma once
#ifndef INFORMACJE_H
#define INFORMACJE_H
#include <iostream>
#include <string>

using namespace std;

//Klasa przechowujaca informacje o lotach;

class Informacje
{
protected:
	string godzina[2];
	string miasto[2];
	string data[2];
	double cena;
	double czas;
public:
	// funkcje dostepowe

	string zwroc_godzine(int i);
	string zwroc_miasto(int i);
	string zwroc_data(int i);   // funkcje zwracajace 

	int zmien_cene(int cena) { this->cena = cena;  return 1; };
	void zmien_czas(int czas); // funkcje zmieniajace

	int zwroc_cene();
	int zwroc_czas();
};
#endif