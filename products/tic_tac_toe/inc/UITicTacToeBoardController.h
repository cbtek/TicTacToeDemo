/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file UITicTacToeBoardController.h
 * @date 07-18-17
 **/

#pragma once

#include <QObject>

#include "utility/inc/Random.h"

#include "TicTacToePlayer.hpp"
#include "UITicTacToeBoardView.h"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class UITicTacToeBoardController : public QObject
{
    Q_OBJECT
public:

    /**
     * @brief UITicTacToeBoardController
     */
    UITicTacToeBoardController(UITicTacToeBoardView *currentBoard);

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
                    TicTacToePlayerType player2Type = TicTacToePlayerType::BasicComputer);

    /**
      * Destructor for this class      
      */
    ~UITicTacToeBoardController();
private:    
    void incrementPlayerIndex();

    std::vector<TicTacToePlayerPtr> m_players;
    size_t m_currentPlayerIndex;
    TicTacToePlayerClass m_lastPlayerToGoFirst;
    UITicTacToeBoardView *m_boardView;
    TicTacToeBoard m_boardModel;
    cbtek::common::utility::Random m_random;

private slots:
    void onHumanPlayRequested(int row, int column);
    void onComputerPlay();

signals:
    void playerWonRound(TicTacToePlayerClass playerClass,
                        TicTacToePlayerType playerType);

    void playOccured(int row, int column, TicTacToeTokenType type);

};
}}}//end namespace
