/*
    TicTacToePlayer.hpp
    

*/
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
     * @brief getPlayerClass
     * @return
     */
    virtual TicTacToePlayerClass getPlayerClass() const = 0;

    /**
     * @brief getPlayerType
     * @return
     */
    virtual TicTacToePlayerType getPlayerType() const = 0;

    /**
     * @brief getPlayerName
     * @return
     */
    virtual std::string getPlayerName() const = 0;

    /**
     * @brief play
     * @param rowPlayed
     * @param columnPlayed
     * @param currentBoard
     * @return
     */
    virtual TicTacToePlayResultType play(int &rowPlayed, int &columnPlayed, const TicTacToeBoard& currentBoard) = 0;


    /**	
     * @brief Virtual descructor for TicTacToePlayer
     *
     */
    virtual ~TicTacToePlayer(){}
};

typedef std::shared_ptr<TicTacToePlayer> TicTacToePlayerPtr;

}}}//end namespace
