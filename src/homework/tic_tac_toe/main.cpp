#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using std::cout;
using std::cin;

int main()
{
	string first_p = "";
	int user_choice = 0;
	TicTacToe_Manager manager;
	TicTacToe game;
	while (user_choice != 1)
	{
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