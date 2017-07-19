/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file UITicTacToeBoardView.h
 * @date 07-18-17
 **/

#pragma once

#include "TicTacToeTypes.hpp"

#include <QImage>

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

/**
 * @brief The UITicTacToeToken struct is used for representing
 * a visual token that is displayed
 */
struct UITicTacToeToken
{
    int x,y,w,h,row,column;
    TicTacToeTokenType tokenType;
    TicTacToePlayerType playerType;
    TicTacToePlayerClass playerClass;
    UITicTacToeToken() :
        x(0),
        y(0),
        w(0),
        h(0),
        row(0),
        column(0),
        tokenType(TicTacToeTokenType::Empty),
        playerType(TicTacToePlayerType::None),
        playerClass(TicTacToePlayerClass::None){}
};

/**
 * @brief The UITicTacToeBoardView class represents the "View" for the
 * Tic Tac Toe board.  It manages placing/drawing X and O values on the board.
 * This view communicates with the controller and parent (main) using the
 * repaintRequested and humanPlayRequested signals.
 */
class UITicTacToeBoardView : public QObject
{
    Q_OBJECT
public:
   /**
     * @brief UITicTacToeBoardView
     * @param parent Pointer to parent widget. Defaults to null.
	 */		
    explicit UITicTacToeBoardView();
    /**
     * @brief placeX Places a 'X' token at the specified row/column position
     * @param row The row to place the token
     * @param column The column to place the token
     */
    void placeX(int row, int column);

    /**
     * @brief placeO Places a 'X' token at the specified row/column position
     * @param row The row to place the token
     * @param column The column to place the token
     */
    void placeO(int row, int column);

    /**
     * @brief reset Clears all tokens from the board
     */
    void reset();
    
    /**
     * @brief updateBoardMouseClick Sends mouse click from parent widget to
     * the board.  The board in turn emits a signal to the controller
     * that a specific cell was clicked.
     * @param mousePosX The X position of the mouse click
     * @param mousePosY The Y position of the mouse click
     */
    void updateBoardMouseClick(int mousePosX, int mousePosY);

    /**
     * @brief updateBoardMousePosition Updates the the mouse position
     * @param mousePosX The X position of the mouse cursor
     * @param mousePosY The Y position of the mouse cursor
     */
    void updateBoardMousePosition(int mousePosX, int mousePosY);

    /**
     * @brief updateBoardSize Updates the width and height values of the board.
     * This is called by the parent during a resize event. All the cells/tokens
     * are redrawn to account for the new width/height.
     * @param width The width of the board drawing area
     * @param height The height of the board drawing area
     */
    void updateBoardSize(int width, int height);

    /**
     * @brief drawBoard Draws the current state of the board.
     * @param painter[out] Reference to painter object from parent class.
     */
    void drawBoard(const QRect &drawRectangle, QPainter &g);

   /**
     * @brief Destructor for this class     
	 */
    ~UITicTacToeBoardView();
private:    
     /**
      * @brief loadTokenImages Loads the X and O token images from resources
      */
     void loadTokenImages();

     /**
      * @brief place Places token on the board
      * @param row The row to place the token
      * @param column The column to place the token
      * @param tokenType The type of token to place
      */
     void place(int row, int column, TicTacToeTokenType tokenType);

     /**
      * @brief m_mouseX
      */
     int m_mouseX;

     /**
      * @brief m_mouseY
      */
     int m_mouseY;

     /**
      * @brief m_imgX
      */
     QImage m_imgX;

     /**
      * @brief m_imgO
      */
     QImage m_imgO;

     /**
      * @brief m_imgBuffer
      */
     QImage m_imgBuffer;

     /**
      * @brief m_width
      */
     int m_width;

     /**
      * @brief m_height
      */
     int m_height;

     /**
      * @brief m_tokens
      */
     std::vector<UITicTacToeToken> m_tokens;
    
private slots:
     /**
      * @brief onInitialize Loads the token images and resets the board.
      */
     void onInitialize();     

signals:
     /**
      * @brief humanPlayRequested This signal is sent to the controller when
      * a click occurs on one of the cells.
      * @param row The row of the cell click
      * @param column The column of the cell click
      */
     void humanPlayRequested(int row, int column);          

     /**
      * @brief repaintRequested This signal is sent whenever the board needs
      * to be redrawn.
      */
     void repaintRequested();
};
}}}//end namespace
