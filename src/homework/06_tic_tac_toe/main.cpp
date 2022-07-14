#include<iostream>
#include<string>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include<memory>

using namespace std;
//using std::unique_ptr; using std::make_unique;

int main() 
{

	unique_ptr<TicTacToe>  game;
	int choice;
	char cont;

	do
	{
		cout<<"\n";
		cout<< "1. TicTacToe 3\n";
		cout<< "2. TictacToe 4\n\n";
		cout<<"Please enter 1 or 2: ";
		cin>> choice;
		
		while (choice != 1 && choice != 2)
		{
			cout<< "Invalid choice! Please enter 1 for TicTacToe 3 or and 2 for TicTacToe 4: ";
			cin>>choice;
		} 
		
		if (choice == 1)
		{
			game = make_unique<TicTacToe3>();
		}
		else 
		{
			game = make_unique<TicTacToe4>();
		} 

		string first_player{" "};	
	
		cout << "\nEnter first player (X/O): ";
		cin >> first_player;
		game->start_game(first_player);
		
		int position;

		while(!game->game_over())
		{
			cout << "Enter position: ";
			cin >> position;
			game->mark_board(position);
			game->display_board();
		}
		if (game->get_winner() == "X" || game->get_winner() == "O")
		{
			cout<< "The winner is " <<game->get_winner() <<"\n";
		}
		else{
			cout<<"No winner! \n";
		}

		cout <<"Play again? (y/n): ";
		cin >> cont;

	} while (cont == 'Y' || cont == 'y');
	
	return 0;
}