/*
    UITicTacToeBoardView.h
    

*/
#pragma once

#include "TicTacToeTypes.hpp"

#include <QImage>

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
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
        playerClass(TicTacToePlayerClass::NoPlayer){}
};

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
     * @brief updateBoard
     * @param mousePosX
     * @param mousePosY
     */
    void updateBoardMouseClick(int mousePosX, int mousePosY);

    /**
     * @brief updateBoardMousePosition
     * @param mousePosX
     * @param mousePosY
     */
    void updateBoardMousePosition(int mousePosX, int mousePosY);

    /**
     * @brief updateBoardSize
     * @param width
     * @param height
     */
    void updateBoardSize(int width, int height);

    /**
     * @brief updateBoardPaint
     * @param painter
     */
    void drawBoard(const QRect &drawRectangle, QPainter &g);

   /**
     * @brief Destructor for this class     
	 */
    ~UITicTacToeBoardView();
private:
    /**
      * @brief renderImageToBuffer
      */
     void renderImageToBuffer();

     /**
      * @brief createPlayerImages
      */
     void createPlayerImages();

     /**
      * @brief place
      * @param row
      * @param column
      * @param tokenType
      */
     void place(int row, int column, TicTacToeTokenType tokenType);

     int m_mouseX;
     int m_mouseY;
     QImage m_imgX;
     QImage m_imgO;
     QImage m_imgBuffer;
     int m_width;
     int m_height;
     std::vector<UITicTacToeToken> m_tokens;
    
private slots:
     /**
      * @brief onInitialize
      */
     void onInitialize();     

signals:
     /**
      * @brief humanPlayRequested
      * @param row
      * @param column
      */
     void humanPlayRequested(int row, int column);          

     /**
      * @brief repaintRequested
      */
     void repaintRequested();
};
}}}//end namespace
