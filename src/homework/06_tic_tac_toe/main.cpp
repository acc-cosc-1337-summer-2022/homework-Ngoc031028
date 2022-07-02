#include<iostream>
#include<string>
#include "tic_tac_toe.h"
using namespace std;
int main() 
{
	TicTacToe game;
	string first_player{" "};
	char user_choice;

	do
	{
		cout << "Enter first player: ";
		cin >> first_player;
		game.start_game(first_player);
		
		int position;

		while(!game.game_over())
		{
			cout << "Enter position: ";
			cin >> position;
			game.mark_board(position);
			game.display_board();
		}

		cout << "Play again? (y/n): ";
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');
	
	return 0;
}