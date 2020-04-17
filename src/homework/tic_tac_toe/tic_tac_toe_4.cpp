#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
	if (pegs[0] == player && pegs[4] == player && pegs[8] == player && pegs[12] == player)
	{
		return true;
	}
	else if (pegs[1] == player && pegs[5] == player && pegs[9] == player && pegs[13] == player)
	{
		return true;
	}
	else if (pegs[2] == player && pegs[6] == player && pegs[10] == player && pegs[14] == player)
	{
		return true;
	}
	else if (pegs[3] == player && pegs[7] == player && pegs[11] == player && pegs[15] == player)
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
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{
	if (pegs[0] == player && pegs[1] == player && pegs[2] == player && pegs[3] == player)
	{
		return true;
	}
	else if (pegs[4] == player && pegs[5] == player && pegs[6] == player && pegs[7] == player)
	{
		return true;
	}
	else if (pegs[8] == player && pegs[9] == player && pegs[10] == player && pegs[11] == player)
	{
		return true;
	}
	else if (pegs[12] == player && pegs[13] == player && pegs[15] == player && pegs[16] == player)
	{
		return true;
	}
	else
	return false;
}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool TicTacToe4::check_diagnol_win()
{
	if (pegs[0] == player && pegs[5] == player && pegs[10] == player && pegs[15] == player)
	{
		return true;
	}
	else if (pegs[3] == player && pegs[6] == player && pegs[9] == player && pegs[12] == player)
	{
		return true;
	}
	else
	return false;
}


