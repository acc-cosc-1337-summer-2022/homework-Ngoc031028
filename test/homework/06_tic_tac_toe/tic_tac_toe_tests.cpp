#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

/*
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
*/

TEST_CASE("Test first player set to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test if there is a tie")
{
	TicTacToe game;
	game.start_game("X");
	game.mark_board(1);	
	game.mark_board(2);	
	game.mark_board(3);	
	game.mark_board(4);	
	game.mark_board(5);	
	game.mark_board(7);	
	game.mark_board(6);	
	game.mark_board(9);	
	game.mark_board(8);	
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
	TicTacToe game;
	game.start_game("X");
	//set positions for first player X to 1,4,7. Pick other positions for O.
	game.mark_board(1); 
	game.mark_board(2); 
	game.mark_board(4);
	game.mark_board(6); 
	game.mark_board(7); 
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win by second column")
{
	TicTacToe game;
	game.start_game("X");
	//set positions for first player X to 2,5,8. Pick other positions for O.
	game.mark_board(2); 
	game.mark_board(1); 
	game.mark_board(5); 
	game.mark_board(3); 
	game.mark_board(8); 
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	TicTacToe game;
	game.start_game("X");
	//set positions for first player X to 3, 6, 9. Pick other positions for O.
	game.mark_board(1); 
	game.mark_board(2); 
	game.mark_board(3); 
	game.mark_board(4); 
	game.mark_board(6);
	game.mark_board(8);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	TicTacToe game;
	game.start_game("X");
	//set positions for first player X to 1, 2, 3. Pick other positions for O.
	game.mark_board(2); 
	game.mark_board(4); 
	game.mark_board(3); 
	game.mark_board(5); 
	game.mark_board(1);	
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	TicTacToe game;
	game.start_game("X");
	//set positions for first player X to 4, 5, 6. Pick other positions for O.
	game.mark_board(4); 
	game.mark_board(1); 
	game.mark_board(7); 
	game.mark_board(8); 
	game.mark_board(6);
	game.mark_board(2);
	game.mark_board(5);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	TicTacToe game;
	game.start_game("X");
	//set positions for first player X to 7, 8, 9. Pick other positions for O.
	game.mark_board(7); 
	game.mark_board(2); 
	game.mark_board(8); 
	game.mark_board(4); 
	game.mark_board(9);	
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win diagonally from top left ")
{
	TicTacToe game;
	game.start_game("X");
	//set positions for first player X to 1, 5, 9. Pick other positions for O.
	game.mark_board(1); 
	game.mark_board(2); 
	game.mark_board(5); 
	game.mark_board(3); 
	game.mark_board(9);	
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left")
{
	TicTacToe game;
	game.start_game("X");
	//set positions for first player X to 7, 5, 3. Pick other positions for O.
	game.mark_board(1); 
	game.mark_board(2); 
	game.mark_board(3); 
	game.mark_board(6); 
	game.mark_board(5);	
	game.mark_board(4); 
	game.mark_board(7);	
	REQUIRE(game.game_over() == true);
}