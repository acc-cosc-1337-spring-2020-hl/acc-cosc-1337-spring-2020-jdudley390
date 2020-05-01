//cpp
#include "tic_tac_toe_manager.h"

TicTacToe_Manager::TicTacToe_Manager(TicTacToeData& d)
{
	data = d;
	games = d.get_games();
	for (auto& game : games)
	{
		update_winner_count(game->get_winner());
	}
}

TicTacToe_Manager::~TicTacToe_Manager()
{
	data.save_games(games);
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


	out << "X wins:" << c.x_win << "\n";
	out << "O wins:" << c.o_win << "\n";
	out << "Ties:" << c.ties << "\n";

	return out;
}

void TicTacToe_Manager::save_game(std::unique_ptr<TicTacToe>& game)
{
	
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}


