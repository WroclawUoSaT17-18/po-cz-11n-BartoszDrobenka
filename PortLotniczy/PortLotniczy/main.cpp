#include "PortLotniczy.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PortLotniczy w;
	w.show();
	return a.exec();
}
