/*
    TicTacToeTypes.hpp
    

*/
#pragma once
#include <iostream>

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
namespace TicTacToeUtils
{
    /**
     * @brief getIndex
     * @param row
     * @param column
     * @return
     */
    inline static size_t getIndex(int row, int column)
    {
        return (3 * static_cast<size_t>(row) + static_cast<size_t>(column));
    }
}

enum class TicTacToeButtonType
{
    Reset,
    Exit,
};

enum class TicTacToeMode
{
    Startup,
    Game,
    Shutdown,
};

enum class TicTacToeTransitionModeDirection
{
    TransitionOut,
    TrasnitionIn
};

enum class TicTacToeTokenType
{
    X,
    O,
    Empty,
};

enum class TicTacToePlayResultType
{
    WinningPlay,
    BlockingPlay,
    RandomPlay,
    NoMoreMovesPlay,
};

enum class TicTacToeBoardSize
{
    Small3x3 = 9,
    Medium6x6 = 36,
    Large9x9 = 81,
};

enum class TicTacToePlayerType
{
    Human,    
    TestComputer,
    AdvancedComputer,
    None
};

enum class TicTacToePlayerClass
{
    Player1,
    Player2,
    NoPlayer
};

}}}//end namespace
