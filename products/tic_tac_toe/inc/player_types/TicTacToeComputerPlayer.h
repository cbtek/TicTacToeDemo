/*
    TicTacToeComputerPlayer.h
    

*/
#pragma once

#include "TicTacToePlayerImpl.h"

#include "utility/inc/Random.h"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
namespace player_types {

class TicTacToeComputerPlayer : public TicTacToePlayerImpl
{
public:
   /**
     * @brief TicTacToeComputerPlayer
     *
     */
	TicTacToeComputerPlayer();
    

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

    /**
      * @brief TicTacToeComputerPlayer (Descructor)
      *
      */
	~TicTacToeComputerPlayer();	

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
    TicTacToeAlgorithmMoveType playToWin(int row1,
                                                int column1,
                                                int row2,
                                                int column2,
                                                int row3,
                                                int column3,
                                                TicTacToeBoard& currentBoard) const;

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
    TicTacToeAlgorithmMoveType playToBlock(int row1,
                                                   int column1,
                                                   int row2,
                                                   int column2,
                                                   int row3,
                                                   int column3,
                                                   TicTacToeBoard& currentBoard) const;


    /**
     * @brief playToOutsmart
     * @param row1
     * @param column1
     * @param currentBoard
     * @return
     */
    TicTacToeAlgorithmMoveType playToOutsmart(int row1,
                                              int column1,
                                               TicTacToeBoard& currentBoard) const;

    /**
     * @brief playRandomly
     * @param validCellPositions
     * @param currentBoard
     * @return
     */
    TicTacToeAlgorithmMoveType playRandomly(const std::vector<std::pair<int, int> > &validCellPositions, TicTacToeBoard& currentBoard) const;


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
    bool updatePlay(TicTacToeAlgorithmMoveType algorithm,
                    int sourceRow,
                    int sourceColumn,
                    int firstRow,
                    int firstColumn,
                    int secondRow,
                    int secondColumn,
                    const std::vector<std::pair<int,int> > &validCellPositions,
                    TicTacToeBoard &currentBoard);
    /**
     * @brief m_random
     */
    cbtek::common::utility::Random m_random;
};
}}}}//end namespace

