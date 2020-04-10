//cpp
#include "tic_tac_toe_manager.h"

void TicTacToe_Manager::save_game(TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToe_Manager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O") {
		o_win++;
	}
	else 
	{
		ties++;
	}

}

std::ostream& operator<<(std::ostream& out, const TicTacToe_Manager& c)
{
	for (auto& games : c.games)
	{
		out << games << "\n";
	}

	out << "X wins:" << c.x_win << "\n";
	out << "O wins:" << c.o_win << "\n";
	out << "Ties:" << c.ties << "\n";

	return out;
}
