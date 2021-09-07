#include "maze.h"

/*
Program: maze-solver
Author: Stef Timmermans
Last Updated: 7 September 2021
Description:
	Implementation of a simplified Dijkstra's Algorithm for a predetermined
	binary maze. In binary-maze.txt, the data from which the square maze is
	created, 0s represent walls and 1s represent corridors. The starting
	position ([y][x]) in the maze is [1][0] and the target position is
	[19][20].
*/

int main()
{
	fstream fs;
	fs.open("binary-maze.txt");

	string token;
	
	fs >> token;
	int first = stoi(token);
	fs >> token;
	int second = stoi(token);

	if (first != second)
	{
		cout << "Given dimensions of maze are not equal!" << endl;
		return 1;
	}

	maze m = init_maze(fs, first);
	
	print_maze(m);

	// Initialize starting position in maze (See binary-maze.txt)
	int row = 1;
	int col = 0;

	// Set endpoint coordinate for algorithm
	int row_target = 19;
	int col_target = 20;

	/*
	Implementation of simplified version of Dijkstra's Algorithm, 
	information about algorithm consulted from Wikipedia (See README.txt)

	Step 1: Create unvisited set of nodes in maze struct.
	Step 2: Set distances from starting nodes (0 for starting node,
		9999 for other nodes). This is less important in this
		implementation due to all of the nodes having equidistant neighbors.
	Step 3: Visit unvisited neighbords for node and track distances.
	Step 4: After visiting all neighbor nodes remove current node from
		unvisited set.
	Step 5: If the current node is the target node, the algorithm is
		complete.
	Step 6: Select next node with smallest distance and return to Step
		3.
	*/

	int success = check_neighbors(m, row, col);

	return 0;
}