/**
 * @author Corey Berry (corey.berry@cbtek.net)
 * @file TicTacToeTypes.hpp
 * @date 07-18-17
 **/

#pragma once
#include <iostream>

namespace pf_projects {
namespace products {
namespace tic_tac_toe {
namespace TicTacToeUtils
{
    /**
     * @brief getIndex Get mapped 1D index from 2D Position
     * @param row
     * @param column
     * @return
     */
    inline static size_t getIndex(int row, int column)
    {
        return (3 * static_cast<size_t>(row) + static_cast<size_t>(column));
    }
}

/**
 * @brief The TicTacToeButtonType enum
 */
enum class TicTacToeButtonType
{
    Reset,
    Exit,
};

/**
 * @brief The TicTacToeMode enum
 */
enum class TicTacToeMode
{
    Startup,
    Game,
    GameOver
};

/**
 * @brief The TicTacToeTransitionModeDirection enum
 */
enum class TicTacToeTransitionModeDirection
{
    TransitionOut,
    TrasnitionIn
};

/**
 * @brief The TicTacToeTokenType enum
 */
enum class TicTacToeTokenType
{
    X,
    O,
    Empty,
};

/**
 * @brief The TicTacToePlayResultType enum
 */
enum class TicTacToePlayResultType
{
    WinningPlay,
    BlockingPlay,
    RandomPlay,
    NoMoreMovesPlay,
};

/**
 * @brief The TicTacToePlayerType enum
 */
enum class TicTacToePlayerType
{
    Human,    
    BasicComputer,
    None
};

/**
 * @brief The TicTacToePlayerClass enum
 */
enum class TicTacToePlayerClass
{
    Player1,
    Player2,
    None
};

}}}//end namespace
