//tic_tac_toe.h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
using std::string; using std::vector;


class TicTacToe
{
public:
	TicTacToe() = default;
	TicTacToe::TicTacToe(int size) : pegs(size * size, " ") {};
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() { return winner; };
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);
	friend std::istream& operator>>(std::istream& in, TicTacToe& t);
protected: 
	virtual bool check_column_win() = 0;
	virtual bool check_row_win() = 0;
	virtual bool check_diagnol_win() = 0;
	string player;
	std::vector<string> pegs;
	
private:
	void set_winner();
	void set_next_player();
	bool check_board_full();
	
	string winner;
	
	void clear_board();

};

class Error
{
public: 
	Error(string msg) : message{ msg } {};
	string get_message();
private:
	string message;

};
#endif //!TIC_TAC_TOE_H

