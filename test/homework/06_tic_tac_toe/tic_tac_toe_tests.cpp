#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::unique_ptr; using std::make_unique;
/*
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
*/

//Test cases for TicTacToe 3

TEST_CASE("Test first player set to X 3")
{		
	unique_ptr<TicTacToe>  game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O 3")
{
	unique_ptr<TicTacToe>  game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test if there is a tie 3")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);	
	game->mark_board(3);
	REQUIRE(game->game_over() == false);	
	game->mark_board(4);
	REQUIRE(game->game_over() == false);	
	game->mark_board(5);	
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);	
	game->mark_board(6);
	REQUIRE(game->game_over() == false);	
	game->mark_board(9);
	REQUIRE(game->game_over() == false);	
	game->mark_board(8);	
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win by first column 3")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	//set positions for first player X to 1,4,7. Pick other positions for O->
	game->mark_board(1);
	REQUIRE(game->game_over() == false); 
	game->mark_board(2); 
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false); 
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	

}

TEST_CASE("Test win by second column 3")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	//set positions for first player X to 2,5,8. Pick other positions for O.
	game->mark_board(2);
	REQUIRE(game->game_over() == false); 
	game->mark_board(1);
	REQUIRE(game->game_over() == false); 
	game->mark_board(5);
	REQUIRE(game->game_over() == false);	
	game->mark_board(3);
	REQUIRE(game->game_over() == false); 
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column 3")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	//set positions for first player X to 3, 6, 9. Pick other positions for O.
	game->mark_board(1); 
	REQUIRE(game->game_over() == false);
	game->mark_board(2); 
	REQUIRE(game->game_over() == false);
	game->mark_board(3); 
	REQUIRE(game->game_over() == false);
	game->mark_board(4); 
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first row 3")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	//set positions for first player X to 1, 2, 3. Pick other positions for O.
	game->mark_board(2); 
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false); 
	game->mark_board(3);
	REQUIRE(game->game_over() == false); 
	game->mark_board(5); 
	REQUIRE(game->game_over() == false);
	game->mark_board(1);	
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row 3")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	//set positions for first player X to 4, 5, 6. Pick other positions for O.
	game->mark_board(4);
	REQUIRE(game->game_over() == false); 
	game->mark_board(1);
	REQUIRE(game->game_over() == false); 
	game->mark_board(7);
	REQUIRE(game->game_over() == false); 
	game->mark_board(8);
	REQUIRE(game->game_over() == false); 
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third row 3")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	//set positions for first player X to 7, 8, 9. Pick other positions for O.
	game->mark_board(7); 
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false); 
	game->mark_board(8);
	REQUIRE(game->game_over() == false); 
	game->mark_board(4);
	REQUIRE(game->game_over() == false); 
	game->mark_board(9);	
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win diagonally from top left 3 ")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	//set positions for first player X to 1, 5, 9. Pick other positions for O.
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false); 
	game->mark_board(5);
	REQUIRE(game->game_over() == false); 
	game->mark_board(3); 
	REQUIRE(game->game_over() == false);
	game->mark_board(9);	
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	//set positions for first player X to 7, 5, 3. Pick other positions for O.
	game->mark_board(1); 
	game->mark_board(2); 
	game->mark_board(3); 
	game->mark_board(6); 
	game->mark_board(5);	
	game->mark_board(4); 
	game->mark_board(7);	
	REQUIRE(game->game_over() == true);
}

//Test cases for TicTacToe 4

TEST_CASE("Test first player set to X 4")
{		
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test if there is a tie 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);	
	game->mark_board(3);
	REQUIRE(game->game_over() == false);	
	game->mark_board(4);
	REQUIRE(game->game_over() == false);	
	game->mark_board(5);	
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);	
	game->mark_board(7);
	REQUIRE(game->game_over() == false);	
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);	
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win by first column 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 1,5,9,13, Pick other positions for O->
	game->mark_board(1);
	REQUIRE(game->game_over() == false); 
	game->mark_board(2); 
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false); 
	game->mark_board(9);
	REQUIRE(game->game_over() == false); 
	game->mark_board(10);
	REQUIRE(game->game_over() == false); 
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
}


TEST_CASE("Test win by second column 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 2,6,10,14. Pick other positions for O.
	game->mark_board(2);
	REQUIRE(game->game_over() == false); 
	game->mark_board(1);
	REQUIRE(game->game_over() == false); 
	game->mark_board(6);
	REQUIRE(game->game_over() == false);	
	game->mark_board(5);
	REQUIRE(game->game_over() == false); 
	game->mark_board(10);
	REQUIRE(game->game_over() == false); 
	game->mark_board(9);
	REQUIRE(game->game_over() == false); 
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 3, 7, 11, 15. Pick other positions for O.
	game->mark_board(3); 
	REQUIRE(game->game_over() == false);
	game->mark_board(1); 
	REQUIRE(game->game_over() == false);
	game->mark_board(7); 
	REQUIRE(game->game_over() == false);
	game->mark_board(2); 
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by forth column 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 4, 8, 12, 16. Pick other positions for O.
	game->mark_board(4); 
	REQUIRE(game->game_over() == false);
	game->mark_board(1); 
	REQUIRE(game->game_over() == false);
	game->mark_board(8); 
	REQUIRE(game->game_over() == false);
	game->mark_board(5); 
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first row 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 1, 2, 3, 4. Pick other positions for O.
	game->mark_board(1); 
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false); 
	game->mark_board(2);
	REQUIRE(game->game_over() == false); 
	game->mark_board(14); 
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);	
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 5, 6, 7, 8. Pick other positions for O.
	game->mark_board(5); 
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false); 
	game->mark_board(6);
	REQUIRE(game->game_over() == false); 
	game->mark_board(14); 
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);	
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by third row 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 9, 10, 11, 12. Pick other positions for O.
	game->mark_board(9); 
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false); 
	game->mark_board(10);
	REQUIRE(game->game_over() == false); 
	game->mark_board(14); 
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);	
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by the fourth row 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 13, 14, 15, 16. Pick other positions for O.
	game->mark_board(13); 
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false); 
	game->mark_board(14);
	REQUIRE(game->game_over() == false); 
	game->mark_board(2); 
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);	
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win diagonally from top left 4 ")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 1, 6, 11, 16. Pick other positions for O.
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false); 
	game->mark_board(6);
	REQUIRE(game->game_over() == false); 
	game->mark_board(3); 
	REQUIRE(game->game_over() == false);
	game->mark_board(11);	 
	REQUIRE(game->game_over() == false);
	game->mark_board(4); 
	REQUIRE(game->game_over() == false);
	game->mark_board(16);		
	REQUIRE(game->game_over() == true);
}


TEST_CASE("Test win diagonally from bottom left 4")
{
	std::unique_ptr<TicTacToe>  game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	//set positions for first player X to 4, 7, 10, 13. Pick other positions for O.
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false); 
	game->mark_board(7);
	REQUIRE(game->game_over() == false); 
	game->mark_board(3); 
	REQUIRE(game->game_over() == false);
	game->mark_board(10);	 
	REQUIRE(game->game_over() == false);
	game->mark_board(5); 
	REQUIRE(game->game_over() == false);
	game->mark_board(13);		
	REQUIRE(game->game_over() == true);
}
