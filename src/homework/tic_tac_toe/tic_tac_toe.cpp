//cpp
#include "tic_tac_toe.h"

//Manke if/else statement so players only use "X" and "O"
void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		first_player = player;
	}
	else
	{
		throw Error("Must use characters 'X' or 'O');
	}
}
//Make board only have spaces 1-9 to play in
void TicTacToe::mark_board(int position)
{
	if (position >= 1 || position <= 9)
	{
		set_next_player
	}
	else
	{
		throw Error("Must start in position 1-9");
	}
}
//Get who's turn it is
string TicTacToe::get_player() const
{
	
	return player();
}
//have turns exchange back and forth
void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O;
	}
	else if (player == "O")
	{
		player = "X";
	}
	else
	{
		throw Error("Must have a valid player!");
	}
}

string Error::get_message()
{

	return message();
}
