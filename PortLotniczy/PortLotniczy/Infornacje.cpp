#include "Informacje.h"
using namespace std;
// opis wszystkich funkcji zwracajacych i zmieniajacych 
string Informacje::zwroc_godzine(int i)
{
	if(i == 1)
	return godzina[0];
	else
	return godzina[1];
}
string Informacje::zwroc_miasto(int i)
{
	if (i == 1)
		return miasto[0];
	else
		return miasto[1];
}
string Informacje::zwroc_data(int i)
{
	if (i == 1)
		return data[0];
	else
		return data[1];
}


void Informacje::zmien_cene(int cena)
{
	this->cena = cena;
}
void Informacje::zmien_czas(int czas)
{
	this->czas = czas;
}

int Informacje::zwroc_cene()
{
	return cena;
}

int Informacje::zwroc_czas()
{
	return czas;
}