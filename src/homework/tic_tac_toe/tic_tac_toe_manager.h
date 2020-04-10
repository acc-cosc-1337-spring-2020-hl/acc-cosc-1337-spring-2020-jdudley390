//h
#include<iostream>
#include "tic_tac_toe.h"
#include<vector>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANGER_H

using std::vector;

class TicTacToe_Manager{
public:
	void save_game(TicTacToe b);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe_Manager& c);
	void get_winner_total(int& o, int& w, int& t);
private: 
	vector<TicTacToe> games;
	void update_winner_count(string winner);
	int x_win;
	int o_win;
	int ties;


};





#endif  TIC_TAC_TOE_MANAGER
