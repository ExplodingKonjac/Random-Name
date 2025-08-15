#include "classes/mainwindow.h"

int main(int argc, char *argv[])
{
	QApplication app(argc,argv);
	MainWindow window;
	QApplication::setStyle(QStyleFactory::create("Fusion"));
	window.show();
	return app.exec();
}
