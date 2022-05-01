#include"knight.h"
#include"piece.h"
#include"spot.h"
#include"board.h"
#include<cmath>
bool knight::can_move(board board, spot start, spot end) {
	int delta_x, delta_y;
	delta_x =abs( end.get_x() - start.get_x());
	delta_y = abs(end.get_y() - start.get_y());
	bool cond = (delta_x * delta_y) == 2;
	return cond;
};