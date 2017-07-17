/*
    TicTacToePlayerImpl.h
    

*/
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
     * @brief getPlayerType
     * @return
     */

    virtual TicTacToePlayerType getPlayerType() const = 0;

    /**
     * @brief play
     * @param currentBoard
     */
    virtual TicTacToePlayResultType play(int &rowPlayed,
                                         int &columnPlayed,
                                         const TicTacToeBoard& currentBoard) = 0;

    /**
     * @brief getPlayerClass
     * @return
     */
    virtual TicTacToePlayerClass getPlayerClass() const;

    /**
     * @brief setPlayerClass
     * @param playerClass
     */
    void setPlayerClass(TicTacToePlayerClass playerClass);

    /**
     * @brief getPlayerName
     * @return
     */
    std::string getPlayerName() const;

    /**
     * @brief setPlayerName
     * @param name
     */
    void setPlayerName(const std::string& name);
    
    /**
      * @brief TicTacToePlayerImpl (Descructor)
      *
      */
	~TicTacToePlayerImpl();	

private:
    TicTacToePlayerClass m_class;
    std::string m_name;

};
}}}//end namespace

