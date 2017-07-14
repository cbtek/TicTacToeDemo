/*
    UITicTacToeController.h
    

*/
#pragma once

#include <QObject>

#include "TicTacToePlayer.hpp"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class UITicTacToeController :public QObject
{
public:

    /**
     * @brief UITicTacToeController     
     */
    UITicTacToeController();

    /**
     * @brief initialize
     * @param player1Class
     * @param player1Type
     * @param player2Class
     * @param player2Type
     */
    void initialize(TicTacToePlayerClass player1Class = TicTacToePlayerClass::Player1,
                    TicTacToePlayerType player1Type = TicTacToePlayerType::Human,
                    TicTacToePlayerClass player2Class = TicTacToePlayerClass::Player2,
                    TicTacToePlayerType player2Type = TicTacToePlayerType::Computer);
    /**
      * Destructor for this class      
      */
    ~UITicTacToeController();
private:

    TicTacToeBoard m_board;
    TicTacToePlayerPtr m_player1,m_player2;
private slots:

signals:
    void play(int row, int column, TicTacToeTokenType type);
    void gameOver();

};
}}}//end namespace
