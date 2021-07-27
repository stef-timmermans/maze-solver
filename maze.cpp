#include "maze.h"

maze init_maze(fstream& fs, int n)
{
	maze m;
	vector<vector<int>> d;
	d.resize(n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string token;
			fs >> token;

			int n = stoi(token);
			d[i].push_back(n);
		}
	}

	m.data = d;
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