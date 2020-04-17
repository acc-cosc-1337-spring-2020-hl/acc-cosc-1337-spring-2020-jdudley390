#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
using std::cout;
using std::cin;

int main()
{
	int board_size = 1;
	string first_p = "";
	int user_choice = 0;
	TicTacToe_Manager manager;
	TicTacToe3 game1;
	TicTacToe4 game2;
	vector<reference_wrapper<TicTacToe>> games{ game1, game2 };
	do
	{
		cout << "Enter 1 if you want to play a 3x3 tictactoe game or enter 2 to play a 4x4 default is 3x3";
		cin >> board_size;
		if (board_size == 1)
		{
			manager.games.push_back(games.at(0));
			TicTacToe3 game1;
		}
		else if (board_size == 2)
		{
			manager.games.push_back(games.at(1));
			TicTacToe4 game2;
		}
		
		
		do
		{
			try
			{
				cout << "Choose X or O for first player: ";
				cin >> first_p;
				game.start_game(first_p);
			}
			catch (Error b)
			{
				cout << b.get_message();
			}
		} while (first_p != "X" && first_p != "O");
		do
		{
			cin >> game;
			cout << game;
			
		} while (!(game.game_over() == true));

		manager.save_game(game);
		first_p = "";
		cout << "If you want to play another game press [Enter], if not enter 1";
		cin >> user_choice;
	}

	cout << game;

	return 0;
}