/*
    UITicTacToeBoard.h
    

*/
#pragma once

#include "TicTacToeTypes.hpp"

#include <QAbstractButton>
#include <QButtonGroup>
#include <QImage>
#include <QWidget>

class Ui_UITicTacToeBoard;

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class UITicTacToeBoard : public QWidget
{
    Q_OBJECT
public:
   /**
     * @brief UITicTacToeBoard
     * @param parent Pointer to parent widget. Defaults to null.
	 */		
    explicit UITicTacToeBoard(QWidget *parent = nullptr);
    /**
     * @brief placeX
     * @param row
     * @param column
     */
    void placeX(int row, int column);

    /**
     * @brief placeO
     * @param row
     * @param column
     */
    void placeO(int row, int column);

    /**
     * @brief reset
     */
    void reset();
    
   /**
     * @brief Destructor for this class     
	 */
    ~UITicTacToeBoard();
private:
    /** 
      * Qt meta object compiler (moc) generated user interface.
      * Objects created in designer will appear in m_ui object
      */
     Ui_UITicTacToeBoard *m_ui;


     void createPlayerImages(QColor color = Qt::black);

     void place(int row, int column, TicTacToeTokenType tokenType);

     QImage m_imgX;
     QImage m_imgO;
     QButtonGroup m_bgXOButtons;
protected:
     void resizeEvent(QResizeEvent *event);
    
private slots:
     void onInitialize();
     void onPlacementRequested(QAbstractButton* button);

signals:
     void mousePlacementRequested(int row, int column);
};
}}}//end namespace
