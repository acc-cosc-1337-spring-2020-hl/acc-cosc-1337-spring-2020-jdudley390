//h
#include<iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<vector>
#include<memory>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANGER_H

using std::vector;

class TicTacToe_Manager {
public:
	TicTacToe_Manager() = default;
	TicTacToe_Manager(TicTacToeData & d);
	~TicTacToe_Manager();
	void save_game(std::unique_ptr<TicTacToe>& b);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe_Manager& c);
private:
	TicTacToeData data;
	vector<std::unique_ptr<TicTacToe>> games;
	void update_winner_count(string winner);
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
};








#endif  TIC_TAC_TOE_MANAGER
