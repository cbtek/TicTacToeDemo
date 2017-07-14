/*
    TicTacToeTypes.hpp
    

*/
#pragma once

namespace pf_projects {
namespace products {
namespace tic_tac_toe {

enum class TicTacToeTokenType
{
    X,
    O
};

enum class TicTacToeAlgorithmMoveType
{
    WinningMove,
    BlockingMove,
    RandomMove,
    NoMove,
    EndOfGameMove
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
    Computer,
    None
};

enum class TicTacToePlayerClass
{
    Player1,
    Player2,
    NoPlayer
};

}}}//end namespace
