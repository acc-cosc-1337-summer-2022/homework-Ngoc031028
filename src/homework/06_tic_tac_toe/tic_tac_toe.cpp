//cpp
#include<iostream>
#include<string>
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";        
        return true;    
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();    
}

void TicTacToe::clear_board()
{
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::mark_board(int position){
    pegs[position -1] = player;
    set_next_player();
}

void TicTacToe::set_next_player(){
    if (player == "X")
    {   
        player = "O";  
    }  
    else
    {
        player = "X";
    }    

}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " "){
            return false;
        }
    }
    return true;

}

 void TicTacToe::set_winner()
 {
    if (player == "X")
    {   
        winner = "O";  
    }  
    else
    {
        winner = "X";
    } 
 }
