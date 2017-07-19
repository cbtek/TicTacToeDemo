/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file UITicTacToeBoardMain.h
 * @date 07-18-17
 **/

#pragma once

#include "UITicTacToeBoardView.h"
#include "UITicTacToeBoardController.h"

#include "qt_widget_animation_library/inc/UIStaticAnimation.h"

#include <QImage>
#include <QMediaPlayer>
#include <QMouseEvent>
#include <QSoundEffect>
#include <QTime>
#include <QWidget>

#include "utility/inc/State.h"

class Ui_UITicTacToeBoardMain;

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class UITicTacToeBoardMain : public QWidget
{
    Q_OBJECT
public:
   /**
    * @brief UITicTacToeBoardMain
    * @param parent Pointer to parent widget. Defaults to null.
	*/		
    explicit UITicTacToeBoardMain(QWidget *parent = 0);

    /**
     * @brief setStaticEnabled Enables / Disables CRT/RF static effect.
     * @param toggle
     */
    void setStaticEnabled(bool toggle);

    /**
     * @brief setMusicEnabled
     * @param toggle
     * @return
     */
    void setMusicEnabled(bool toggle);

   /**
    * @brief UITicTacToeBoardMain
    *
	*/
    ~UITicTacToeBoardMain();

protected:
    /**
     * @brief resizeEvent Called when window resizes
     * @param event
     */
    void resizeEvent(QResizeEvent *event);

    /**
     * @brief paintEvent Called when window is painted
     * @param event
     */
    void paintEvent(QPaintEvent *event);

    /**
     * @brief mouseMoveEvent Called when mouse is moved
     * @param event
     */
    void mouseMoveEvent(QMouseEvent *event);

    /**
     * @brief mousePressEvent Called when mouse button is pressed
     * @param event
     */
    void mousePressEvent(QMouseEvent *event);

    /**
     * @brief timerEvent Called when timer updates
     * @param event
     */
    void timerEvent(QTimerEvent *event);
private:

    /**
    The following 3 functions represent different modes that the game can be in.
    Each mode consists of 3 transitions:
        1) Enter: Code in this section is executed once as soon as a mode is selected.
        2) Update: Code in this section is updated multiple times until the transition is
        changed.
        3) Exit: Code in this section is updated once right before the mode changes.
    */
    /**
     * @brief updateStartupMode
     * @param painter
     */
    void updateStartupMode(QPainter &painter);

    /**
     * @brief updateGameMode
     * @param painter
     */
    void updateGameMode(QPainter &painter);

    /**
     * @brief updateGameOverMode
     * @param painter
     */
    void updateGameOverMode(QPainter &painter);


     //Member variables for the GameMode
     UITicTacToeBoardView *m_ptrBoardView;
     UITicTacToeBoardController *m_ptrBoardController;

     //Member variables for the Startup Mode
     QImage m_imgStartupContent;
     QTime m_tmStartupTimeOut;

     //Member variables for Game Over Mode
     QImage m_imgGameOverContent;

     //Sounds for the UI
    QSoundEffect m_audTokenPlay;
    QSoundEffect m_audGameOver;
    QMediaPlayer m_audThemeMusic;

    //Images for the UI
    QImage m_imgOverlay;
    QImage m_imgUnderlay;
    QImage m_imgBackground;
    QImage m_imgBuffer;

    //Holds condition of mouse button press
    bool m_isMousePress;

    //Flags for the static and music
    bool m_isStaticEnabled;
    bool m_isMusicEnabled;

    //Current mouse position
    int m_intMouseX;
    int m_intMouseY;

    //Variables to keep track of content extents
    int m_intContentX;
    int m_intContentY;
    int m_intContentW;
    int m_intContentH;

    //Variables used for keep score
    int m_intXScore;
    int m_intOScore;
    int m_intDScore;

    //Pointer to the static animation class
    pf_projects::products::qt_widget_animation_library::UIStaticAnimation *m_ptrStaticAnimationOverlay;

    //Image for current static frame
    QImage m_imgCurrentStaticFrame;

    //Current state
    cbtek::common::utility::State m_currentState;

    //Current mode
    TicTacToeMode m_currentMode;

    /**
    * MOC generated ui class for this widget
    */
     Ui_UITicTacToeBoardMain *m_ui;

private slots:

     /**
      * @brief onPlayerWon This is called whenever a gameOver state is reached.
      * @param playerClass The class of the player who won (Player1, Player2, None)
      * @param playerType The type of player who won (Computer, Human, None)
      */
     void onPlayerWon(TicTacToePlayerClass playerClass,
                      TicTacToePlayerType playerType);

     /**
     * @brief onStaticFrameRendered Gets updated whenever the Static effect generates
     * a frame
     * @param frame
     */
    void onStaticFrameRendered(QImage frame);

    /**
     * @brief onRepaintBoard Occurs when the view requests a repaint of the UI
     */
    void onRepaintBoard();

    /**
     * @brief onPlayOccured Occurs everytime a play occurs
     * @param row The row that was played
     * @param column The column that was played
     * @param tokenType The type of token that was played (O or X)
     */
    void onPlayOccured(int row, int column, TicTacToeTokenType tokenType);
    
signals:
    /**
     * @brief scoresUpdated Sends scores to the main window
     * @param xScore
     * @param oScore
     * @param drawScore
     */
    void scoresUpdated(int xScore, int oScore, int drawScore);

};
}}}//end namespace
