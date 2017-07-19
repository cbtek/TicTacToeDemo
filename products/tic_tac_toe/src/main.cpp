#include <QApplication>
#include "UITicTacToeWindow.h"

#include "qt_widget_animation_library/inc/UIStaticAnimation.h"

using namespace pf_projects::products::tic_tac_toe;
using namespace pf_projects::products::qt_widget_animation_library;

int main(int argc, char ** argv)
{
	QApplication a(argc,argv);
    UITicTacToeWindow window;    
    window.resize(1024,768);
    window.show();    
	return a.exec();
}

