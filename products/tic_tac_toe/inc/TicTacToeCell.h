/*
    TicTacToeCell.h
*/
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
    * @brief TicTacToeCell
    *
	*/
    TicTacToeCell();

    /**
     * @brief setRow
     * @param row
     */
    void setRow(size_t row);

    /**
     * @brief setColumn
     * @param column
     */
    void setColumn(size_t column);

    /**
     * @brief getRow
     * @return
     */
    size_t getRow() const;

    /**
     * @brief getColumn
     * @return
     */
    size_t getColumn() const;

    /**
     * @brief toString
     * @return
     */
    std::string toString() const;

    /**
     * @brief getCellClass Returns the current
     * state of this cell. Can be owned
     * by player1, player2 or it can be empty.
     *
     * @return Return the actual m_state memeber variable
     */
    TicTacToePlayerClass getCellClass() const;

    /**
     * @brief setCellClass Sets the state of this cell.
     * @param state
     */
    void setCellClass(TicTacToePlayerClass playerClass);

    /**
     * @brief TicTacToeCell (Destructor)
     *
     */
    ~TicTacToeCell();
private:
    size_t m_row;
    size_t m_column;
    TicTacToePlayerClass m_ownershipClass;
};
}}}//end namespace

