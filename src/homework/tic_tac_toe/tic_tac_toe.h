//tic_tac_toe.h
#include<string>

class Error
{
public: 
	Error(std::string msg) : message{ msg } {};
	string get_message() { return message; }
private:
	std::string message;

};

class TicTacToe
{
public: 
	void start_game(string first_player);
	void mark_board(int position);
	std::string get_player() const {return }
private:
	void set_next_player();
	std::string player;
};