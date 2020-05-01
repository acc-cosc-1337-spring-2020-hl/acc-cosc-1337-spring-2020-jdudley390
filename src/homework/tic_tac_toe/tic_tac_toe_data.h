//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <fstream>

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
class TicTacToeData
{
public:
	void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
	std::vector<std::unique_ptr<TicTacToe>> get_games();
private:
	string filename{ "game_results.txt" };
};

#endif // !TIC_TAC_TOE_DATA_H