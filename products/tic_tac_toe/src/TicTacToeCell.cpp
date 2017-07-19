/*
    TicTacToeCell.cpp
*/
//----------------------------------------
//TicTacToeCell.cpp generated by cbtek on 07-12-2017 at 11:35:27 AM
//----------------------------------------
#include "TicTacToeCell.h"

#include <sstream>

namespace pf_projects {
namespace products {
namespace tic_tac_toe {


TicTacToeCell::TicTacToeCell()
{
    m_ownershipClass = TicTacToePlayerClass::None;
}

void TicTacToeCell::setRow(size_t row)
{
    m_row = row;
}

void TicTacToeCell::setColumn(size_t column)
{
    m_column = column;
}

size_t TicTacToeCell::getRow() const
{
    return m_row;
}

size_t TicTacToeCell::getColumn() const
{
    return m_column;
}

std::string TicTacToeCell::toString() const
{
    std::ostringstream out;
    out << m_row << ", " << m_column << ", " << static_cast<long>(m_ownershipClass);
    return out.str();
}

TicTacToePlayerClass TicTacToeCell::getCellClass() const
{
    return m_ownershipClass;
}

void TicTacToeCell::setCellClass(TicTacToePlayerClass playerClass)
{
    m_ownershipClass = playerClass;
}

TicTacToeCell::~TicTacToeCell()
{

}

}}}//end namespace
