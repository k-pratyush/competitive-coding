#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, vector<bool>& visited, vector<vector<int> > adj) {
	visited[node] = true;

	for(auto i: adj[node]) {
		if(!visited[i]) {
			dfs(i, visited, adj);
		}
	}
}

int numConnected(vector<vector<int> > adj, int V) {
	vector<bool> visited(V, false);
	int cnt = 0;
	for(int i = 0; i < V; i++) {
		if(!visited[i]) {
			cnt++;
			dfs(i, visited, adj);
		}
	}
	return cnt;
}

int main() {
	int V = 5;
	vector<vector<int> > adj = {{0}, {1}, {2}, {3}, {4}};
	cout << numConnected(adj, V) << endl;
}