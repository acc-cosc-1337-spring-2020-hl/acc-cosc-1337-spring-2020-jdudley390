#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<functional>

using std::cout; using std::cin; using std::string;

int main()
{
	int x = 0;
	int o = 0;
	int tie = 0;
	TicTacToeData data;
	TicTacToe_Manager manager = TicTacToe_Manager(data);
	std::unique_ptr<TicTacToe> game;
	int gameType = 0;
	string player;
	string cont = "Y";

	do
	{
		int game_type;
		std::unique_ptr<TicTacToe> gameA;
		cout << "\nTictactoe 3 or 4?";
		cin >> game_type;

		if (game_type == 3)
		{
			gameA = std::make_unique<TicTacToe3>();
		}
		else if (game_type == 4)
		{
			gameA = std::make_unique<TicTacToe4>();;
		}

		

		string player = "Y";

		while (!(player == "O" || player == "X"))
		{
			try
			{
				cout << "Enter player: ";
				cin >> player;

				gameA->start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_message();
			}
		}

		int choice = 1;

		do
		{
			try
			{
				cin >> *gameA;
				cout << *gameA;
			}
			catch (Error e)
			{
				cout << e.get_message();
			}

		} while (!gameA->game_over());

		cout << "\nWinner: " << gameA->get_winner() << "\n";

		manager.save_game(gameA);
				
		cout << "Enter Y to play again: ";
		cin >> cont;

	} while (cont == "Y");

	cout << manager;

	return 0;
}