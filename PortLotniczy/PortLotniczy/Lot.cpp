#include "Lot.h"

Lot::Lot() // opis konstruktora domyslengo 
{
	Linia_Lotnicza = " ";
	godzina[0] = " ";
	godzina[1] = " ";
	miasto[0] = " ";;
	miasto[1] = " ";;
	data[0] = " ";
	data[1] = " "; 
	cena=0;
	czas=0;
}

Lot::Lot(string Linia_Lotnicza, string godzina_Od, string godzina_Pr, string miasto_Od, string miasto_Pr, string data_Od, string data_Pr, double cena, double czas) // opis konstruktora parametrycznego
{
	this->Linia_Lotnicza = Linia_Lotnicza;
	godzina[0] = godzina_Od;
	godzina[1] = godzina_Pr;
	miasto[0] = miasto_Od;;
	miasto[1] = miasto_Pr;
	data[0] = data_Od;
	data[1] = data_Pr;
	this->cena = cena;
	this->czas = czas;
}

string Lot::zwroc_informacje()
{
	return Linia_Lotnicza;// zwraca linie 
}

string Lot::zwroc_lot()// jakiego formatowania jest tekst 
{
	return "Lot z : " + miasto[0] + " do " + miasto[1] + "o godz :" + godzina[0] + "Czas Lotu : " + std::to_string(czas) + " Cena : " + std::to_string(cena) + "\n";
} // to_string -- konwertuje z flout double int naq string 