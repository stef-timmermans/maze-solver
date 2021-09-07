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
	vector<vector<int>> unvisited_nodes;
};

maze init_maze(fstream& fs, int n);

void print_maze(maze m);

int check_neighbors(maze m, int row, int col);

#endif