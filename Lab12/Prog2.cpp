/* Source code was adapted from the class representation: http://www.algolist.net/Data_structures/Graph/Internal_representation */
#include <iostream>
#include <string>
using namespace std;

struct Graph {
	Graph(int v) {
		vertexCount = v;
		adjacencyMatrix = new bool*[v];
		for (int i = 0; i < vertexCount; i++) {
			adjacencyMatrix[i] = new bool[v];
			for (int j = 0; j < v; j++)
				adjacencyMatrix[i][j] = false;
		}
	};
	~Graph() {
		for (int i = 0; i < vertexCount; i++)
			delete[] adjacencyMatrix[i];
		delete[] adjacencyMatrix;
	};
	bool** adjacencyMatrix;
	int vertexCount;
};

void addEdge(Graph *g, int i, int j) {
	//The code given below is for the undirected graph. Modify it to for the directed graph

	if (i >= 0 && i < g->vertexCount && j > 0 && j < g->vertexCount) {
		g->adjacencyMatrix[i][j] = true;
		g->adjacencyMatrix[j][i] = true;
	}
}

void removeEdge(Graph *g, int i, int j) {
	
	if (i >= 0 && i < g->vertexCount && j > 0 && j < g->vertexCount) {
		g->adjacencyMatrix[i][j] = false;
		g->adjacencyMatrix[j][i] = true;
	}

}

void removeVertex(Graph *g, int i) {

	int v = g->vertexCount - 1;
	g->vertexCount = v;
	
	bool** newMatrix = new bool*[v];

	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++)
			newMatrix[i][j] = g->adjacencyMatrix[i][j];
	}
		
		g->adjacencyMatrix = newMatrix;
	
		for (int i = 0; i < v + 1; i++){
			delete[] g->adjacencyMatrix[i];
			delete[] g->adjacencyMatrix;
		}

}

void addVertex(Graph *g) {
	// your code here

	//Step 1. increment vertex count
	int v = g->vertexCount + 1;
	g->vertexCount = v;
	//Step 2. create a new matrix of size v by v. See example in the code for struct Graph
	bool** newMatrix = new bool*[v];
	//Step 3. copy old values into the new matrix
	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++)
			newMatrix[i][j] = g->adjacencyMatrix[i][j];
	}
	//Step 4. link a new matrix to the graph
	g->adjacencyMatrix = newMatrix;
	//Step 5. free memory occupied by the old matrix. See example in the code for struct Graph
	for (int i = 0; i < v - 1; i++){
		delete[] g->adjacencyMatrix[i];
		delete[] g->adjacencyMatrix;
	}
}

bool isEdge(Graph *g, int i, int j) {
	if (i >= 0 && i < g->vertexCount && j > 0 && j < g->vertexCount)
		return g->adjacencyMatrix[i][j];
	else
		return false;
}

void printGraph(Graph *g) {
	cout << "Graph:" << endl;
	for (int i = 0; i<g->vertexCount; i++) {
		cout << "Edges from vertex " << i << ":\t";
		for (int j = 0; j < g->vertexCount; j++) {
			if (isEdge(g, i, j))
				cout << j << ",\t";
		}
		cout << endl;
	}

}


int main()
{
	Graph *g = new Graph(5);
	addEdge(g, 1, 4);
	addEdge(g, 3, 2);
	printGraph(g);
	//removeEdge(g, 1, 4);
	//removeEdge(g, 2, 4);
	addVertex(g);
	printGraph(g);
	delete g;
	system("pause");
	return 0;
}

