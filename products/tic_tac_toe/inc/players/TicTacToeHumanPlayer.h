/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file TicTacToeHumanPlayer.h
 * @date 07-18-17
 **/

#pragma once
#include "TicTacToePlayerImpl.h"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
namespace players {

class TicTacToeHumanPlayer : public TicTacToePlayerImpl
{
public:
   /**
     * @brief TicTacToeHumanPlayer
     *
     */
	TicTacToeHumanPlayer();
    
    /**
     * @brief getPlayerType
     * @return
     */

    TicTacToePlayerType getPlayerType() const;

    /**
     * @brief play
     * @param currentBoard
     */
    /**
     * @brief play
     * @param currentBoard
     */
    TicTacToePlayResultType play(int &rowPlayed,
                                 int &columnPlayed,
                                 const TicTacToeBoard& currentBoard);
    /**
      * @brief TicTacToeHumanPlayer (Descructor)
      *
      */
	~TicTacToeHumanPlayer();	

private:
    
};
}}}}//end namespace

