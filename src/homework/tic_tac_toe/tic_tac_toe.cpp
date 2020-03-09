//cpp
#include "tic_tac_toe.h"

// TicTacToe Class
void TicTacToe::start_game(string first_player)
{
	if ((first_player == "X" || first_player == "O"))
	{
		player = first_player;
		
	}
	else if (player == "")
	{
		throw Error("Must begin game!");
	}
	else
	{
		throw Error("Must use X or O!");
	}
}

void TicTacToe::mark_board(int position)
{
	if (player == "") 
	{
		throw Error("Must start game first.");
	}

	if (position >= 1 && position <= 9)
	{
		set_next_player();
		
	}

	else

	{
		throw Error("Must be between 1 and 9!");
	}
}

void TicTacToe::set_next_player()
{
	if (player == "O")
	{
		player = "X";
	}
	else if (player == "X")
	{
		player = "O";
	}
}

string TicTacToe::get_player() const
{
	return player;
}

// Error Class
string Error::get_message()
{
	return message;
}
