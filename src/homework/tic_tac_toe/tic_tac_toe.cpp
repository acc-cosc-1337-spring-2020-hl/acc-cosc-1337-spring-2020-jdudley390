//cpp
#include "tic_tac_toe.h"
#include<iostream>

// TicTacToe Class
void TicTacToe::start_game(string first_player)
{
	if ((first_player == "X" || first_player == "O"))
	{
		clear_board();
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
		pegs[position - 1] = player;
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

bool TicTacToe::check_board_full()
{
	for (auto peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

string TicTacToe::get_player() const
{
	return player;
}

void TicTacToe::display_board() const
{
	for(int i = 0; i <= 9; i += 3)
	{
		std::cout << pegs[i] << "|" << pegs[i+1] << "|" <<pegs[i+2] << "\n";
	}
}

// Error Class
string Error::get_message()
{
	return message;
}

bool TicTacToe::game_over()
{
	return check_board_full();
}

