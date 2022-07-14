//h
//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE4_H
#define TIC_TAC_TOE4_H

class TicTacToe4:public TicTacToe
{
public:
    TicTacToe4() : TicTacToe(4){};
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override; 
    void display_board() override;
};

#endif