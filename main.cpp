#include "GameUi.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GameUi View;
	View.show();
	return a.exec();
}