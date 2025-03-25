#include "challenge.hpp"

using namespace std;

long long Solution::countPairs(int n, vector<vector<int>>& edges) {
	vector<vector<int>> adj_mat(n);
	for (auto& edge : edges) {
		adj_mat[edge[0]].push_back(edge[1]);
		adj_mat[edge[1]].push_back(edge[0]);
	}

	vector<bool> visited(n, false);
	vector<int> comps_cnt;

	for (int i = 0; i < n; i++)
		if (!visited[i])
			comps_cnt.push_back(doBFS(adj_mat, visited, i));

	long long total_pairs = (1LL * n * (n - 1)) / 2;
	long long connected_pairs = 0;

	for (int size : comps_cnt)
		connected_pairs += (1LL * size * (size - 1)) / 2;

	return total_pairs - connected_pairs;
}

int Solution::doBFS(vector<vector<int>>& adj_mat, vector<bool>& visited, int v) {
	int count = 0;
	queue<int> helper;
	helper.push(v);
	visited[v] = true;

	while (!helper.empty()) {
		int top = helper.front();
		helper.pop();
		count++;

		for (auto neighbor : adj_mat[top]) {
			if (!visited[neighbor]) {
				visited[neighbor] = true;
				helper.push(neighbor);
			}
		}
	}
	return count;
}
