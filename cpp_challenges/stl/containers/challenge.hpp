#pragma once

#include <queue>
#include <vector>

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x);
	ListNode(int x, ListNode *next);
};

class Solution
{
private:
	int countLiveNeighbors(const std::vector<std::vector<int>> &board, std::pair<int, int> cell) const;

public:
	ListNode *mergeKLists(std::vector<ListNode *> &lists);
	void gameOfLife(std::vector<std::vector<int>> &board);
	long long continuousSubarrays(std::vector<int>& nums);

private:
	const std::vector<std::pair<int, int>> cellNeighborsDir_8 = {
		{-1, 1}, {0, 1}, {1, 1}, {-1, 0}, {1, 0}, {-1, -1}, {0, -1}, {1, -1}};
	const std::vector<std::pair<int, int>> cellNeighborsDir_4 = {
		{0, 1}, {-1, 0}, {1, 0}, {0, -1}};
};
