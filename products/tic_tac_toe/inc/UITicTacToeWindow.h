/*
    UITicTacToeWindow.h
    

*/
#pragma once
#include <QMainWindow>

#include "UITicTacToeBoardMain.h"

class Ui_UITicTacToeWindow;
namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class UITicTacToeWindow : public QMainWindow
{
    Q_OBJECT
public:
   /**
     * @brief UITicTacToeWindow
     * @param parent Pointer to parent widget. Defaults to null.
	 */		
    explicit UITicTacToeWindow(QWidget *parent = nullptr);
    
    
   /**
     * @brief Destructor for this class     
	 */
    ~UITicTacToeWindow();
private:
    /** 
      * Qt meta object compiler (moc) generated user interface.
      * Objects created in designer will appear in m_ui object
      */
     Ui_UITicTacToeWindow *m_ui;

     UITicTacToeBoardMain *m_ptrBoardMain;
    
};
}}}//end namespace
