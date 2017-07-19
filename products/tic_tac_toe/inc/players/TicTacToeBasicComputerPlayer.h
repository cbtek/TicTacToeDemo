/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file TicTacToeBasicComputerPlayer.h
 * @date 07-18-17
 **/

#pragma once

#include "TicTacToePlayerImpl.h"

#include "utility/inc/Random.h"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
namespace players {

class TicTacToeBasicComputerPlayer : public TicTacToePlayerImpl
{
public:
   /**
     * @brief TicTacToeBasicComputerPlayer
     *
     */
    TicTacToeBasicComputerPlayer();
    

    /**
     * @see TicTacToePlayer::getPlayerType
     */
    TicTacToePlayerType getPlayerType() const;

    /**
     * @see TicTacToePlayer::play
     */
    TicTacToePlayResultType play(int &rowPlayed,
                           int &columnPlayed,
                           const TicTacToeBoard& currentBoard);
    /**
      * @brief TicTacToeBasicComputerPlayer (Descructor)      
      */
    ~TicTacToeBasicComputerPlayer();

private:

    /**
     * @brief playToWin Check if player can win game with one move
     * @param row1 The empty row to check
     * @param column1 The empty column to check
     * @param row2 The 1st non-empty row
     * @param column2 The 1st non-empty column
     * @param row3 The 2nd non-empty row
     * @param column3 The 2nd non-empty column
     * @param rowOut[out] The row to be played
     * @param columnOut[out] The column to be played
     * @param currentBoard const reference to the current game board
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
     * @brief playToBlock If no win is possible with a single move, check if player can
     * block the other player from winning.
     * @param row1 The empty row to check
     * @param column1 The empty column to check
     * @param row2 The 1st non-empty row
     * @param column2 The 1st non-empty column
     * @param row3 The 2nd non-empty row
     * @param column3 The 2nd non-empty column
     * @param rowOut[out] The row to be played
     * @param columnOut[out] The column to be played
     * @param currentBoard const reference to the current game board
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
     * @brief playRandomly
     * @param validCellPositions position of all valid cells
     * @param rowOut[out] The row to be played
     * @param columnOut[out] The column to be played
     * @param currentBoard const reference to the current game board
     * @return
     */
    TicTacToePlayResultType playRandomly(const std::vector<std::pair<int, int> > &validCellPositions,
                                         int &rowOut,
                                         int &columnOut,
                                         const TicTacToeBoard &currentBoard) const;


    /**
     * @brief getRandomAvailableCellPosition
     * @param rowOut[out] The row to be played
     * @param columnOut[out] The column to be played
     * @param currentBoard const reference to the current game board
     * @return
     */
    bool getRandomAvailableCellPosition(int &rowOut,
                                        int &columnOut,
                                        const TicTacToeBoard &currentBoard) const;

    /**
     * @brief updatePlay Update the current play using sent in result type
     * @param resultType
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
    bool updatePlay(TicTacToePlayResultType resultType,
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

