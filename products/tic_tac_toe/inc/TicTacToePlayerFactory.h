/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file TicTacToePlayerFactory.h
 * @date 07-18-17
 **/

#pragma once

#include "TicTacToeTypes.hpp"
#include "TicTacToePlayer.hpp"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class TicTacToePlayerFactory 
{
public:
    /**
     * @brief create Creates a new player and returns as shared pointer
     * @param playerName The name to give the player
     * @param playerClass The class of the player
     * @param playerType The player type
     * @return Shared pointer instance to the created player
     */
    static TicTacToePlayerPtr create(const std::string &playerName, TicTacToePlayerClass playerClass,
                                     TicTacToePlayerType playerType);
private:
    /**	
      * @brief Private constructor for TicTacToePlayerFactory
      */	    
    TicTacToePlayerFactory();

    /**	
      * @brief Private copy constructor for TicTacToePlayerFactory
      */	  
    TicTacToePlayerFactory(const TicTacToePlayerFactory &);

    /**	
      * @brief Private destructor for TicTacToePlayerFactory
      */	  
	~TicTacToePlayerFactory();	
};
}}}//end namespace
