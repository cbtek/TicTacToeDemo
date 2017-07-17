/*
    TicTacToeBoard.h
    

*/
#pragma once

#include <string>
#include <vector>

#include "TicTacToeCell.h"
#include "TicTacToeTypes.hpp"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {



class TicTacToeBoard
{
public:
   /**
    * @brief TicTacToeBoard
    *
	*/
    TicTacToeBoard();
    
    /**
     * @brief initialize
     * @param gridSize
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
     * @brief getCell
     * @param row
     * @param column
     * @return
     * @throws GenericException for index out of range
     */
    const TicTacToeCell &getCell(int row, int column) const;

    /**
     * @brief setCell
     * @param row
     * @param column
     * @param cell
     */
    void setCell(int row, int column, const TicTacToeCell& cell);

    /**
     * @brief getCells
     * @return
     */
    const std::vector<TicTacToeCell> &getCells() const;

    /**
     * @brief getIndex
     * @param row
     * @param column
     * @return
     */
    size_t getIndex(int row, int column) const;
    /**
      * @brief TicTacToeBoard (Descructor)
      *
      */
    ~TicTacToeBoard();
private:
    size_t m_rowSize;
    size_t m_columnSize;
    std::vector<TicTacToeCell> m_grid;

};
}}}//end namespace

