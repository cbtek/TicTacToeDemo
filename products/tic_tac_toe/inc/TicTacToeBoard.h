/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file TicTacToeBoard.h
 * @date 07-18-17
 **/
#pragma once

#include <string>
#include <vector>

#include "TicTacToeCell.h"
#include "TicTacToeTypes.hpp"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

/**
 * @brief This class represents a model for a Tic Tac Toe board.
 * It contains various functions for managing state of a board
 * without worrying about how to display it.
 */
class TicTacToeBoard
{
public:
   /**
    * @brief TicTacToeBoard (The Constructor)
	*/
    TicTacToeBoard();
    
    /**
     * @brief initialize Initializes the grid array with 9 cells
     * and loops over them assigning the correct row/column value
     */
    void initialize();
    
    /**
     * @brief toString Generates XML of current state of the
     * game board.  This can be used by various other viewers/renders
     * to draw the game board.
     * @return
     */        
    std::string toString() const;

    /**
     * @brief getCell Returns the cell located at row and column
     * @param row The row of the cell to return
     * @param column The column of the cell to return
     * @return const reference TicTacToeCell object
     * @throws GenericException for index out of range
     */
    const TicTacToeCell &getCell(int row, int column) const;

    /**
     * @brief setCell Sets the cell object to the specified row/column
     * @param row The row of the cell to set
     * @param column The column of the cell to set
     * @param cell The cell to set
     */
    void setCell(int row, int column, const TicTacToeCell& cell);

    /**
     * @brief getCells Returns const reference vector of all cells.
     * This is useful for looping over the cells in a foreach style
     * loop.
     * @return
     */
    const std::vector<TicTacToeCell> &getCells() const;

    /**
     * @brief getEmptyCellPositions Returns all cell positions in
     * board that are empty.
     * @return
     */
    std::vector<std::pair<int,int > > getEmptyCellPositions() const;

    /**
     * @brief getIndex Returns mapped 1d index from 2d position
     * @param row
     * @param column
     * @return
     */
    size_t getIndex(int row, int column) const;

    /**
     * @brief isPlayerInWinState Determines if player is in a winning state
     * @param player The player to test for
     * @return
     */
    bool isPlayerInWinState(TicTacToePlayerClass player) const;

    /**
     * @brief isBoardFull Determines if the board is full
     * @return
     */
    bool isBoardFull() const;

    /**
      * @brief TicTacToeBoard (Destructor)
      *
      */
    ~TicTacToeBoard();
private:

    /**
     * @brief m_rowSize
     */
    size_t m_rowSize;

    /**
     * @brief m_columnSize
     */
    size_t m_columnSize;

    /**
     * @brief m_grid
     */
    std::vector<TicTacToeCell> m_grid;
};
}}}//end namespace

