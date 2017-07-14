#include <QApplication>
#include "UITicTacToeMainWindow.h"

using namespace pf_projects::products::tic_tac_toe;

int main(int argc, char ** argv)
{
	QApplication a(argc,argv);
    UITicTacToeMainWindow window;
    window.show();
	return a.exec();
}

