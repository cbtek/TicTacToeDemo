/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file TicTacToeCell.h
 * @date 07-18-17
 **/

#pragma once

#include <string>

#include "TicTacToeTypes.hpp"

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

class TicTacToeCell 
{
public:
   /**
    * @brief TicTacToeCell (Constructor)
	*/
    TicTacToeCell();

    /**
     * @brief setRow Sets the current row for this cell
     * @param row
     */
    void setRow(size_t row);

    /**
     * @brief setColumn Sets the current column for this cell
     * @param column
     */
    void setColumn(size_t column);

    /**
     * @brief getRow Returns current row
     * @return
     */
    size_t getRow() const;

    /**
     * @brief getColumn Returns current column
     * @return
     */
    size_t getColumn() const;

    /**
     * @brief toString Convert this cell to string
     * representation.
     * @return
     */
    std::string toString() const;

    /**
     * @brief getCellClass Returns the current
     * state of this cell. Can be owned
     * by player1, player2 or it can be empty.
     *
     * @return Return the actual m_ownershipClass memeber variable
     */
    TicTacToePlayerClass getCellClass() const;

    /**
     * @brief setCellClass Sets the player class of this cell.
     * @param playerClass
     */
    void setCellClass(TicTacToePlayerClass playerClass);

    /**
     * @brief TicTacToeCell (Destructor)
     *
     */
    ~TicTacToeCell();

private:

    /**
     * @brief m_row
     */
    size_t m_row;

    /**
     * @brief m_column
     */
    size_t m_column;

    /**
     * @brief m_ownershipClass
     */
    TicTacToePlayerClass m_ownershipClass;
};
}}}//end namespace

