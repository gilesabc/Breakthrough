class Board{
public:
	char board[64] = {
		'a','a','a','a','a','a','a','a',//0~7
		'a','a','a','a','a','a','a','a',//8~15
		' ',' ',' ',' ',' ',' ',' ',' ',//16~23
		' ',' ',' ',' ',' ',' ',' ',' ',//24~31
		' ',' ',' ',' ',' ',' ',' ',' ',//32~39
		' ',' ',' ',' ',' ',' ',' ',' ',//40~47
		'b','b','b','b','b','b','b','b',//48~55
		'b','b','b','b','b','b','b','b' //56~63
	};
	void printBoard();
	void moveLeftUP(Board &Board, int pos);
	void moveRightUP(Board & Board, int pos);
	void moveStraight(Board &Board, int pos);
	//void moveDiagonal();
};
