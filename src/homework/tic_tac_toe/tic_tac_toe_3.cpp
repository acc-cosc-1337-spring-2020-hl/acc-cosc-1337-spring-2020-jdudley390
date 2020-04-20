#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win()
{
	if (pegs[0] == player && pegs[3] == player && pegs[6] == player)
	{
		return true;
	}
	else if (pegs[1] == player && pegs[4] == player && pegs[7] == player)
	{
		return true;
	}
	else if (pegs[2] == player && pegs[5] == player && pegs[8] == player)
	{
		return true;
	}
	else
	{
		return false;
	}
}


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win()
{
	if (pegs[0] == player && pegs[1] == player && pegs[2] == player)
	{
		return true;
	}
	else if (pegs[3] == player && pegs[4] == player && pegs[5] == player)
	{
		return true;
	}
	else if (pegs[6] == player && pegs[7] == player && pegs[8] == player)
	{
		return true;
	}
	else
	{
		return false;
	}
}



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/
bool TicTacToe3::check_diagnol_win()
{
	if (pegs[0] == player && pegs[4] == player && pegs[8] == player)
	{
		return true;
	}
	else if (pegs[2] == player && pegs[4] == player && pegs[6] == player)
	{
		return true;
	}
	else
	{
		return false;
	}
}

