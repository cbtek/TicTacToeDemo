/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file TicTacToePlayer.hpp
 * @date 07-18-17
 **/

#pragma once

#include <string>
#include <memory>

#include "TicTacToeTypes.hpp"
#include "TicTacToeBoard.h"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {


class TicTacToePlayer 
{
public:
    /**
     * @brief getPlayerClass Return the class of this player
     * Can be either Player1, Player2 or None
     * @return
     */
    virtual TicTacToePlayerClass getPlayerClass() const = 0;

    /**
     * @brief getPlayerType Return the type of this player.
     * Can be either Human, Computer or None
     * @return
     */
    virtual TicTacToePlayerType getPlayerType() const = 0;

    /**
     * @brief getPlayerName Return player name
     * @return
     */
    virtual std::string getPlayerName() const = 0;

    /**
     * @brief play This command occurs to perform a single
     * play on the TicTacToe board.  The played row and column
     * is returned as well as the result of the play.
     * @param rowPlayed[out] The row to be played
     * @param columnPlayed[out] The column to be played
     * @param currentBoard The current board to play on
     * @return Return result type of play
     */
    virtual TicTacToePlayResultType play(int &rowPlayed,
                                         int &columnPlayed,
                                         const TicTacToeBoard& currentBoard) = 0;


    /**	
     * @brief Virtual descructor for TicTacToePlayer
     *
     */
    virtual ~TicTacToePlayer(){}
};

/**
 * @brief TicTacToePlayerPtr typedefed shared ptr for TicTacToePlayer
 */
typedef std::shared_ptr<TicTacToePlayer> TicTacToePlayerPtr;

}}}//end namespace
