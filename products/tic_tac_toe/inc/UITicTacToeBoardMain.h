/*
    UITicTacToeBoardMain.h
    

*/
#pragma once

#include "UITicTacToeBoardView.h"
#include "UITicTacToeBoardController.h"

#include "qtutils/inc/UIStaticAnimation.h"

#include <QTime>
#include <QImage>
#include <QMainWindow>
#include <QMouseEvent>

#include "utility/inc/State.h"

class Ui_UITicTacToeBoardMain;

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class UITicTacToeBoardMain : public QMainWindow
{
    Q_OBJECT
public:
   /**
    * @brief UITicTacToeBoardMain
    * @param parent Pointer to parent widget. Defaults to null.
	*/		
    explicit UITicTacToeBoardMain(QWidget *parent = 0);

   /**
    * @brief UITicTacToeBoardMain
    *
	*/
    ~UITicTacToeBoardMain();

protected:
    void resizeEvent(QResizeEvent *event);
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void timerEvent(QTimerEvent *event);
private:

    void updateStartupMode(QPainter &painter);
    void updateGameMode(QPainter &painter);
    void updateShutdownMode(QPainter &painter);

     //Member variables for the GameMode
     UITicTacToeBoardView *m_boardView;
     UITicTacToeBoardController *m_boardController;

     //Member variables for the Startup Mode
     QImage m_imgStartupContent;
     QTime m_tmStartupTimeOut;



     //Generic variables for UI
    QImage m_imgOverlay;
    QImage m_imgUnderlay;
    QImage m_imgBuffer;
    bool m_isMousePress;
    int m_intMouseX;
    int m_intMouseY;
    int m_intContentX;
    int m_intContentY;
    int m_intContentW;
    int m_intContentH;
    int m_intXScore;
    int m_intOScore;
    int m_intDScore;

    pf_projects::products::qtutils::UIStaticAnimation *m_ptrStaticAnimationOverlay;
    QImage m_imgCurrentStaticFrame;
    cbtek::common::utility::State m_currentState;
    TicTacToeMode m_currentMode;

    /**
    * MOC generated ui class for this widget
    */
     Ui_UITicTacToeBoardMain *m_ui;

private slots:

    void onStaticFrameRendered(QImage frame);
    void onRepaintBoard();
    
signals:
    void scoresUpdated(int xScore, int oScore, int drawScore);

};
}}}//end namespace
