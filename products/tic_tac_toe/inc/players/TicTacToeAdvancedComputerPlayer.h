/*
    TicTacToeAdvancedComputerPlayer.h
    

*/
#pragma once

#include "TicTacToePlayerImpl.h"

#include "utility/inc/Random.h"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
namespace players {

class TicTacToeAdvancedComputerPlayer : public TicTacToePlayerImpl
{
public:
   /**
     * @brief TicTacToeAdvancedComputerPlayer
     *
     */
    TicTacToeAdvancedComputerPlayer();
    

    /**
     * @brief getPlayerType
     * @return
     */
    TicTacToePlayerType getPlayerType() const;

    /**
     * @brief play
     * @param rowPlayed
     * @param columnPlayed
     * @param currentBoard
     * @return
     */
    TicTacToePlayResultType play(int &rowPlayed,
                           int &columnPlayed,
                           const TicTacToeBoard& currentBoard);
    /**
      * @brief TicTacToeAdvancedComputerPlayer (Descructor)
      *
      */
    ~TicTacToeAdvancedComputerPlayer();

private:

    /**
     * @brief playToWin
     * @param row1
     * @param column1
     * @param row2
     * @param column2
     * @param row3
     * @param column3
     * @param currentBoard
     * @return
     */
    TicTacToePlayResultType playToWin(int row1,
                                int column1,
                                int row2,
                                int column2,
                                int row3,
                                int column3,
                                int &rowOut,
                                int &columnOut,
                                const TicTacToeBoard& currentBoard) const;

    /**
     * @brief playToBlock
     * @param row1
     * @param column1
     * @param row2
     * @param column2
     * @param row3
     * @param column3
     * @param currentBoard
     * @return
     */
    TicTacToePlayResultType playToBlock(int row1,
                                  int column1,
                                  int row2,
                                  int column2,
                                  int row3,
                                  int column3,
                                  int &rowOut,
                                  int &columnOut,
                                  const TicTacToeBoard& currentBoard) const;


    /**
     * @brief playToOutsmart
     * @param row1
     * @param column1
     * @param currentBoard
     * @return
     */
    TicTacToePlayResultType playToOutsmart(int row1,
                                           int column1,
                                           int &rowOut,
                                           int &columnOut,
                                           const TicTacToeBoard &currentBoard) const;

    /**
     * @brief playRandomly
     * @param validCellPositions
     * @param currentBoard
     * @return
     */
    TicTacToePlayResultType playRandomly(const std::vector<std::pair<int, int> > &validCellPositions,
                                         int &rowOut,
                                         int &columnOut,
                                         const TicTacToeBoard &currentBoard) const;


    /**
     * @brief getRandomAvailableCellPosition
     * @param rowOut
     * @param columnOut
     * @param currentBoard
     * @return
     */
    bool getRandomAvailableCellPosition(int &rowOut,
                                        int &columnOut,
                                        const TicTacToeBoard &currentBoard) const;

    /**
     * @brief updatePlay
     * @param algorithm
     * @param sourceRow
     * @param sourceColumn
     * @param firstRow
     * @param firstColumn
     * @param secondRow
     * @param secondColumn
     * @param validCellPositions
     * @param currentBoard
     * @return
     */
    bool updatePlay(TicTacToePlayResultType algorithm,
                    int sourceRow,
                    int sourceColumn,
                    int firstRow,
                    int firstColumn,
                    int secondRow,
                    int secondColumn,                    
                    const std::vector<std::pair<int,int> > &validCellPositions,
                    int &rowOut,
                    int &columnOut,
                    const TicTacToeBoard &currentBoard);
    /**
     * @brief m_random
     */
    cbtek::common::utility::Random m_random;
};
}}}}//end namespace

