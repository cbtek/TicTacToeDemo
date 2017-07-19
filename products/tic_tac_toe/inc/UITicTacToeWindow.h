/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file UITicTacToeWindow.h
 * @date 07-18-17
 **/

#pragma once
#include <QMainWindow>
#include <QMediaPlayer>

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

     /**
      * @brief m_ptrBoardMain
      */
     UITicTacToeBoardMain *m_ptrBoardMain;

private slots:

     /**
      * @brief onScoresUpdated
      * @param xScore
      * @param oScore
      * @param dScore
      */
     void onScoresUpdated(int xScore, int oScore, int dScore);

     /**
      * @brief onMusicToggled
      */
     void onMusicToggled(bool);

     /**
      * @brief onStaticToggled
      */
     void onStaticToggled(bool);                          
};
}}}//end namespace
