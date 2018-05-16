#include "Spis_Loty.h"

// funkcja wczytywania plikow
void Spis_Loty::wczytaj_plik()
{
	fstream plik("spis.txt");

	Lot *przelot;

	int ilosc;
	string godzina[2];
	string miasto[2];
	string data[2];
	double cena;
	double czas;
	string Linia_Lotnicza;


	plik >> ilosc;

	for (int i = 0; i < ilosc; i++)
	{
		plik >> miasto[0];
		plik >> miasto[1];
		plik >> Linia_Lotnicza;
		plik >> godzina[0];
		plik >> godzina[1];

		plik >> data[0];
		plik >> data[1];

		plik >> cena;
		plik >> czas;
		przelot = new Lot(Linia_Lotnicza, godzina[0], godzina[1], miasto[0], miasto[1], data[0], data[1], cena, czas); // tworzy nowy obiekt i wywoluje konstruktor  parametryczny  wczytujac dane/zmeinne 

		Loty.push_back(przelot);// wrzuca  wskaznik na nowo stworzony obiekt na koniec tablicy 

	}



}