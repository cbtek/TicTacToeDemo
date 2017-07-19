/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file TicTacToePlayerImpl.h
 * @date 07-18-17
 **/

#pragma once
#include "TicTacToePlayer.hpp"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class TicTacToePlayerImpl :public TicTacToePlayer
{
public:
   /**
     * @brief TicTacToePlayerImpl
     *
     */
	TicTacToePlayerImpl();

    /**
     * @see TicTacToePlayer::getPlayerType
     */

    virtual TicTacToePlayerType getPlayerType() const = 0;

    /**
     * @see TicTacToePlayer::play
     */
    virtual TicTacToePlayResultType play(int &rowPlayed,
                                         int &columnPlayed,
                                         const TicTacToeBoard& currentBoard) = 0;

    /**
     * @see TicTacToePlayer::getPlayerClass
     */
    virtual TicTacToePlayerClass getPlayerClass() const;


    /**
     * @brief setPlayerClass Sets the player class
     * @param playerClass
     */
    void setPlayerClass(TicTacToePlayerClass playerClass);

    /**
     * @see TicTacToePlayer::getPlayerName
     */
    std::string getPlayerName() const;

    /**
     * @brief setPlayerName Sets the player name
     * @param name
     */
    void setPlayerName(const std::string& name);
    
    /**
      * @brief TicTacToePlayerImpl (Descructor)      
      */
	~TicTacToePlayerImpl();	

private:
    TicTacToePlayerClass m_class;
    std::string m_name;
};
}}}//end namespace

