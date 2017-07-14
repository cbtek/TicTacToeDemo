#include <QApplication>

#include "UIWebcamMainWindow.h"
#include "UIWebcamViewer.h"

int main(int argc, char ** argv)
{
	QApplication a(argc,argv);
    pf_projects::products::webcam::UIWebcamViewer window;
    window.show();
	return a.exec();
}

