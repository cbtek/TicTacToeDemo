#include <QApplication>

#include "UIWebcamMainWindow.h"
#include "UIWebcamViewer.h"

int main(int argc, char ** argv)
{
	QApplication a(argc,argv);
    pf_projects::products::webcam::UIWebcamMainWindow window;
    window.resize(1024,768);
    window.show();
	return a.exec();
}

