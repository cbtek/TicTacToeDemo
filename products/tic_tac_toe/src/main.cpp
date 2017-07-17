#include <QApplication>
#include "UITicTacToeWindow.h"

#include "qtutils/inc/UIStaticAnimation.h"

using namespace pf_projects::products::tic_tac_toe;
using namespace pf_projects::products::qtutils;

int main(int argc, char ** argv)
{
	QApplication a(argc,argv);
    UITicTacToeWindow window;
    //UIStaticAnimation window;
    //window.start();
    window.resize(1024,768);
    window.show();    
	return a.exec();
}

