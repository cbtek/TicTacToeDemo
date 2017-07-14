/*
    TicTacToePlayerFactory.h
    

*/
#pragma once

#include "TicTacToeTypes.hpp"
#include "TicTacToePlayer.hpp"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class TicTacToePlayerFactory 
{
public:
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
