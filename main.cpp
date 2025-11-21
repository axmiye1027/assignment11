/*************************************************************************
 * AUTHORS	: Eric, Amy, Aspen
 * CLASS	: CS 1D
 * DUE DATE	: 11/19/25
 * ASSIGN	: 11
 *************************************************************************/

#include "graph.h"

int main()
{
	Graph g1;

	cout << "DIJKSTRA:\n";
	g1.dijkstra(0);

	cout << endl << endl;

	g1.mst(0);

	return 0;
}
