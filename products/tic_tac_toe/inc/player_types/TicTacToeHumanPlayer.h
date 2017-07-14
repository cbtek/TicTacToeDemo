/*
    TicTacToeHumanPlayer.h
    

*/
#pragma once
#include "TicTacToePlayerImpl.h"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
namespace player_types {

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
    void play(TicTacToeBoard& currentBoard);
    /**
      * @brief TicTacToeHumanPlayer (Descructor)
      *
      */
	~TicTacToeHumanPlayer();	

private:
    
};
}}}}//end namespace

