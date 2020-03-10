//tic_tac_toe.h
#include<string>
#include<vector>
using std::string;

class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const;
	void display_board()const;
private:
	void set_next_player();
	bool check_board_full();
	string player;
	std::vector<string> pegs{ 9, " " };
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

