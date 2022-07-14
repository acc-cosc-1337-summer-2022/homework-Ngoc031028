#include "tic_tac_toe_3.h"
using std::cout;

// A column wins with marked values 1,4,7 or 2,5,8, or 3,6,9 with all Os or Xs 
bool TicTacToe3::check_column_win(){
    if ((pegs[0] =="X" && pegs[3] =="X" && pegs[6] =="X") ||
        (pegs[1] =="X" && pegs[4] =="X" && pegs[7] =="X") ||
        (pegs[2] =="X" && pegs[5] =="X" && pegs[8] =="X") ||
        (pegs[0] =="O" && pegs[3] =="O" && pegs[6] =="O") ||
        (pegs[1] =="O" && pegs[4] =="O" && pegs[7] =="O") ||
        (pegs[2] =="O" && pegs[5] =="O" && pegs[8] =="O"))
    {
        return true;
    }
    return false;
}

//A row wins with marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
bool TicTacToe3::check_row_win()
{
    if ((pegs[0] =="X" && pegs[1] =="X" && pegs[2] =="X") ||
        (pegs[3] =="X" && pegs[4] =="X" && pegs[5] =="X") ||
        (pegs[6] =="X" && pegs[7] =="X" && pegs[8] =="X") ||
        (pegs[0] =="O" && pegs[1] =="O" && pegs[2] =="O") ||
        (pegs[3] =="O" && pegs[4] =="O" && pegs[5] =="O") ||
        (pegs[6] =="O" && pegs[7] =="O" && pegs[8] =="O"))        
    {
        return true;
    }
   
    return false;
}

//A diagonal wins with marked values 1,5,9 or 7,5,3 with all Os or Xs
bool TicTacToe3::check_diagonal_win()
{
     if ((pegs[0] =="X" && pegs[4] =="X" && pegs[8] =="X") ||
         (pegs[2] =="X" && pegs[4] =="X" && pegs[6] =="X") ||
         (pegs[0] =="O" && pegs[4] =="O" && pegs[8] =="O") ||
         (pegs[2] =="O" && pegs[4] =="O" && pegs[6] =="O"))               
    {
        return true;
    }
   
    return false;
}

void TicTacToe3::display_board()
{
    for(long unsigned int i = 0; i <pegs.size(); i += 3)
    {
        cout<< pegs[i] << "|" << pegs[i+1] << "|" <<pegs[i+2] << "\n";
    }
}


