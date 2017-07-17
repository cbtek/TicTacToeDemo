/*
    TicTacToeTestComputerPlayer.h
    

*/
#pragma once
#include "TicTacToePlayerImpl.h"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
namespace players {

class TicTacToeTestComputerPlayer :public TicTacToePlayerImpl
{
public:
   /**
     * @brief TicTacToeTestComputerPlayer     
     */
    TicTacToeTestComputerPlayer();
    

    /**
     * @brief getPlayerType
     * @return
     */

    virtual TicTacToePlayerType getPlayerType() const;

    /**
     * @brief play
     * @param currentBoard
     */
    virtual TicTacToePlayResultType play(int &rowPlayed,
                                         int &columnPlayed,
                                         const TicTacToeBoard& currentBoard);
    /**
      * Destructor for this class      
      */
    ~TicTacToeTestComputerPlayer();
private:
    
};
}}}}//end namespace
