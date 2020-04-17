#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4


#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe
{
public:
	
	TicTacToe4() : TicTacToe(4) {};
	friend std::ostream& operator<< (std::ostream& out, TicTacToe4& game);
	friend std::istream& operator>> (std::istream& in, TicTacToe4& game);
private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagnol_win();
};

#endif // !TIC_TAC_TOE_4