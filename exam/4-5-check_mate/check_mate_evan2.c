#include <unistd.h>

typedef struct s_pos
{
	int row;
	int col;
}				t_pos;

// FIND THE LOCATION OF THE KING ON THE BOARD
t_pos	find_king(int board_size, char **board)
{
	int row = 0;
	int col;
	while (row < board_size)
	{
		col = 0;
		while (col < board_size)
		{
			if (board[row][col] == 'K')
				return ((t_pos){row, col}); // Returns struct t_pos with values of row, col // NEW SYNTAX!!!
			++col;
		}
		++row;
	}
	return ((t_pos){-2, -2}); // IF KING NEVER FOUND
}

// POS IS LOCATION OF THE KING
// DIRECTION IS TRAJECTORY TO CHECK RELATIVE TO THE KING
int		check_capture(t_pos pos, t_pos direction, int b_size, char **board)
{
	// new position
	pos.row += direction.row;
	pos.col += direction.col;
	// >= b_size because index starts from zero.
	if (pos.row < 0 || pos.row >= b_size || pos.col < 0 || pos.col >= b_size) // CHECKING NOT OUT OF BOUNDS
		return (0); // 0 represents false!

	if (board[pos.row][pos.col] == 'Q')
		return (1);
	else if (board[pos.row][pos.col] == 'R') // if we see 'R' in that location,
		return (direction.row == 0 || direction.col == 0); // then can be CHECKed ALONG SAME ROW OR COLUMN!!!
	else if (board[pos.row][pos.col] == 'B') // if we see 'B' in that location,
		return (direction.row != 0 && direction.col != 0); // IT MEANS IF IT IS AT A DIAGONAL, 'B' CAN CHECK.
	else if (board[pos.row][pos.col] == 'P')
		return (direction.row == 1 && direction.col != 0 // only forward and diagonal
				&& board[pos.row - 1][pos.col - direction.col] == 'K'); // immediate back 1 step, we see the King.

	return (check_capture(pos, direction, b_size, board)); // another recursion if none of the above
}

// FROM THE VANTAGE POINT OF THE KING, WE DETERMINE ALL ATTACK TRAJECTORY
int		check_mate(int board_size, char **board)
{
	t_pos king = find_king(board_size, board);

	return (
			check_capture(king, (t_pos){-1, -1}, board_size, board)
			|| check_capture(king, (t_pos){-1, 0}, board_size, board)
			|| check_capture(king, (t_pos){-1, 1}, board_size, board)
			|| check_capture(king, (t_pos){0, -1}, board_size, board)
			|| check_capture(king, (t_pos){0, 1}, board_size, board)
			|| check_capture(king, (t_pos){1, -1}, board_size, board)
			|| check_capture(king, (t_pos){1, 0}, board_size, board)
			|| check_capture(king, (t_pos){1, 1}, board_size, board)
			);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		write(1, "\n", 1);
	else if (check_mate(ac - 1, &av[1])) // just reindexes the beginning of the array!!!
		write(1, "Success\n", 8);
	else
		write(1, "Fail\n", 5);
	return (0);
}

// Rather than starting with each attack piece and find out whether they can attack the King
// We start from the King and determine all the path for which there is an attack vector
// and then recursively determine if there is a piece along that trajectory, that can attack
// we need to also factor in whether such attack pieces are blocked
// that is why we return(direction.row == 1 and direction.col != 0), for example