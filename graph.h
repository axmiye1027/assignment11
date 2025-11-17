/*************************************************************************
 * AUTHORS	: Eric, Amy, Aspen
 * CLASS	: CS 1D
 * DUE DATE	: 11/19/25
 * ASSIGN	: 11
 *************************************************************************/

#ifndef GRAPH_H_
#define GRAPH_H_

#include <vector>
#include <string>
#include <iostream>
#include <climits>
#include <iomanip>
#include <unordered_map>
using namespace std;

class Graph
{

public:
	Graph();

	void dijkstra(int start);

private:
	// DN  KC  CH  SF  LA  SE  HS  DL  AT  MI  NY  BO
	vector<vector<int>> adjacencyMatrix= {
		{0,599,1003,1267,1015,1331,-1,-1,-1,-1,-1,-1},
		{599,0,533,-1,1663,-1,-1,496,864,-1,1260,-1},
		{1003,533,0,-1,-1,2097,-1,-1,-1,-1,787,983},
		{1267,-1,-1,0,381,807,-1,-1,-1,-1,-1,-1},
		{1015,1663,-1,381,0,-1,-1,-1,-1,-1,-1,-1},
		{1331,-1,2097,807,-1,0,-1,-1,-1,-1,-1,-1},
		{-1,-1,-1,-1,-1,-1,0,239,810,1187,-1,-1},
		{-1,496,-1,-1,1435,-1,239,0,781,-1,-1,-1},
		{-1,864,-1,-1,-1,-1,810,781,0,661,888,-1},
		{-1,-1,-1,-1,-1,-1,1187,-1,661,0,-1,-1},
		{-1,1260,787,-1,-1,-1,-1,-1,888,-1,0,214},
		{-1,-1,983,-1,-1,-1,-1,-1,-1,-1,214,0}
	};

	unordered_map<int, string> indexToCity = {
	    {0, "Denver"},
	    {1, "Kansas City"},
	    {2, "Chicago"},
	    {3, "San Francisco"},
	    {4, "Los Angeles"},
	    {5, "Seattle"},
	    {6, "Houston"},
	    {7, "Dallas"},
	    {8, "Atlanta"},
	    {9, "Miami"},
	    {10, "New York"},
	    {11, "Boston"}
	};

};




#endif /* GRAPH_H_ */
