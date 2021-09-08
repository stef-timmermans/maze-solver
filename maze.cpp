#include "maze.h"

maze init_maze(fstream& fs, int n)
{
	maze m;
	vector<vector<int>> d;
	vector<vector<int>> u;

	d.resize(n);
	u.resize(n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string token;
			fs >> token;

			int n = stoi(token);
			d[i].push_back(n);

			u[i].push_back(0);
		}
	}

	m.data = d;
	m.unvisited_nodes = u;
	m.dimensions = n;

	return m;
}

void print_maze(maze m)
{
	for (int i = 0; i < m.dimensions; i++)
	{
		for (int j = 0; j < m.dimensions; j++)
		{
			if (m.data[i][j] == 0)
				cout << "0 ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}


void check_neighbors(maze m, int row, int col, int r_target, int c_target)
{
	if (m.data[row][col] == 0)
	{
		m.unvisited_nodes[row][col] = 1;
	}

	if (m.unvisited_nodes[row][col] == 1)
		return;

	if ((row == r_target) && (col = c_target))
	{
		cout << "Target point reached at [" << row << "][" << col << "].\n";
		m.end_reached = 1;
	}

	// Check above
	if (row > 0)
	{
		// TODO
	}

	// Check to the right
	if (col < 20)
	{
		// TODO
	}

	// Check below
	if (row < 20)
	{
		// TODO
	}

	// Check to left
	if (col > 0)
	{
		// TODO
	}

	return;
}