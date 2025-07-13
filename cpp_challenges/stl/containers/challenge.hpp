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
public:
	ListNode *mergeKLists(std::vector<ListNode *> &lists);
	void gameOfLife(std::vector<std::vector<int>> &board);
};
