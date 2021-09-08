#ifndef MAZE_H_
#define MAZE_H_

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

/*
Struct: maze
Members:
	
Description:
	
*/
struct maze
{
	int dimensions;
	int end_reached;
	vector<vector<int>> data;
	vector<vector<int>> unvisited_nodes;
};


/*
Function: init_maze()
Parameters:
	
Description:
	
*/
maze init_maze(fstream& fs, int n);


/*
Function: print_maze()
Parameters:
	
Description:
	
*/
void print_maze(maze m);


/*
Function: check_neighbors()
Parameters:
	
Description:
	
*/
void check_neighbors(maze m, int row, int col, int r_target, int c_target);

#endif