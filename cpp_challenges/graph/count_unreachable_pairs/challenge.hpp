#pragma once

#include <vector>
#include <queue>

class Solution {
public:
	long long countPairs(int n, std::vector<std::vector<int>>& edges);

private:
	int doBFS(std::vector<std::vector<int>>& adj_mat, std::vector<bool>& visited, int v);
};
