#include "EquifyPhoto.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EquifyPhoto w;
	w.show();
	return a.exec();
}
