#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PortLotniczy.h"
#include "Spis_loty.h"

class PortLotniczy : public QMainWindow // glowna klasa obslugi okna
{
	Q_OBJECT
		Spis_Loty loty; // dodane tylko 
	vector <Lot*> nowe;// 
		private slots:

	void Sprawdz_polaczenia(); // podczas przyciskania jest wywolywana musi byc w slotach 

public:
	PortLotniczy(QWidget *parent = Q_NULLPTR);

private:
	Ui::PortLotniczyClass ui;// odwoluje sie do klasy ktora obsuguje wszystkie obiekty
};
