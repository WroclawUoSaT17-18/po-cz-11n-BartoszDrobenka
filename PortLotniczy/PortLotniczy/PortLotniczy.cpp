#include "PortLotniczy.h"
#include <fstream>

PortLotniczy::PortLotniczy(QWidget *parent)
	: QMainWindow(parent)
{
	loty.wczytaj_plik();// wywolanie wczytanie pliku 
	nowe = loty.zwroc();// skopiowanie wektora z obiektu loty do wektora stworzonego w port lotniczy 
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(Sprawdz_polaczenia()));// kiedy klik  to uruchamia funkcie sprawdz polacznie 
}


void PortLotniczy::Sprawdz_polaczenia()
{
	string lista_lotow;

	for(int i=0; i<nowe.size(); i++)					
		if (ui.portOd->text().toStdString() == nowe[i]->zwroc_miasto(1) && ui.portPrzy->text().toStdString() == nowe[i]->zwroc_miasto(2))// porownuje tekst wpisany z kestem z pliku 
		{
		if (ui.GodiznOdlo->text().toStdString() == nowe[i]->zwroc_godzine(1) && ui.godzPrzy->text().toStdString() == nowe[i]->zwroc_godzine(2))
		{
			if (ui.Przewoznik->currentText().toStdString() == nowe[i]->zwroc_informacje())
			{
				if (ui.dataOdl->text().toStdString() == nowe[i]->zwroc_data(1) && ui.dataPrzy->text().toStdString() == nowe[i]->zwroc_data(2))
				{

						lista_lotow = lista_lotow + nowe[i]->zwroc_lot();
				}
				else
				{
					lista_lotow = "Brak Lotow";
				}
			}
			else
			{
				lista_lotow = "Brak Lotow";
			}
		}
		else
		{
			lista_lotow = "Brak Lotow";
		}
		}
		else if (ui.portOd->text().toStdString() == nowe[i]->zwroc_miasto(1) && ui.portPrzy->text().toStdString() =="")
	   {
					  lista_lotow = lista_lotow + nowe[i]->zwroc_lot();
	   }
		else if (ui.portOd->text().toStdString() == "" && ui.portPrzy->text().toStdString() == nowe[i]->zwroc_miasto(2))
		{
			lista_lotow = lista_lotow + nowe[i]->zwroc_lot();
		}
		else
		{
			lista_lotow = "Brak Lotow";
		}



ui.Loty->setText(QString::fromStdString(lista_lotow));

}