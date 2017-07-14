/*
    UIWebcamMainWindow.h
    

*/
#pragma once

#include <QCameraInfo>
#include <QMainWindow>

class Ui_UIWebcamMainWindow;

namespace pf_projects {
namespace products {
namespace webcam {

class UIWebcamMainWindow : public QMainWindow
{
    Q_OBJECT
public:
   /**
    * @brief UIWebcamMainWindow
    * @param parent Pointer to parent widget. Defaults to null.
	*/		
    explicit UIWebcamMainWindow(QWidget *parent = 0);
        
   /**
    * @brief UIWebcamMainWindow
    *
	*/
    ~UIWebcamMainWindow();

private:
    /** 
    * MOC generated ui class for this widget
    */
     Ui_UIWebcamMainWindow *m_ui;

};
}}}//end namespace
