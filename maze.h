#ifndef MAZE_H_
#define MAZE_H_

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct maze
{
	int dimensions;
	vector<vector<int>> data;
};

maze init_maze(fstream&, int);

void print_maze(maze);

#endif