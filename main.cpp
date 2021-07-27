#include "maze.h"

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

	return 0;
}