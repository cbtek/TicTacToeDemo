/*
    UITicTacToeMainWindow.h
    

*/
#pragma once

#include <QImage>
#include <QMainWindow>

class Ui_UITicTacToeMainWindow;
namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class UITicTacToeMainWindow : public QMainWindow
{
    Q_OBJECT
public:
   /**
    * @brief UITicTacToeMainWindow
    * @param parent Pointer to parent widget. Defaults to null.
	*/		
    explicit UITicTacToeMainWindow(QWidget *parent = 0);



   /**
    * @brief UITicTacToeMainWindow
    *
	*/
    ~UITicTacToeMainWindow();

protected:
    void resizeEvent(QResizeEvent *event);

private:
    /** 
    * MOC generated ui class for this widget
    */
     Ui_UITicTacToeMainWindow *m_ui;

    
};
}}}//end namespace
