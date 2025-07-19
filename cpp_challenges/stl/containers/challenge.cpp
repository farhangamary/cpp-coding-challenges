#include "challenge.hpp"

using namespace std;

struct cmpNodes
{
	bool operator()(const ListNode *a, const ListNode *b)
	{
		return a->val > b->val; // Min-heap (smallest value at top)
	}
};

ListNode::ListNode(int x) : val(x), next(nullptr) {}
ListNode::ListNode(int x, ListNode *next) : val(x), next(next) {}

int Solution::countLiveNeighbors(const vector<vector<int>> &board, pair<int, int> cell) const
{
	int m = board.size(), n = board[0].size();
	if (m == 0 || n == 0 || (m == 1 && n == 1))
	{
		return 0;
	}
	int counter = 0;
	int x = cell.first, y = cell.second;
	for (const auto nbr : cellNeighborsDir_8)
	{
		int nx = x + nbr.first, ny = y + nbr.second;
		if (nx >= 0 && nx < m && ny >= 0 && ny < n)
		{
			if (board[nx][ny] == 1)
			{
				counter++;
			}
		}
	}
	return counter;
}

ListNode *Solution::mergeKLists(vector<ListNode *> &lists)
{
	priority_queue<ListNode *, vector<ListNode *>, cmpNodes> pq;

	// Insert all non-null nodes into the priority queue
	for (auto node : lists)
	{
		if (node)
			pq.push(node);
	}

	if (pq.empty())
		return nullptr;

	ListNode dummy(0);
	ListNode *tail = &dummy;

	while (!pq.empty())
	{
		ListNode *minNode = pq.top();
		pq.pop();

		tail->next = minNode;
		tail = minNode; // Move tail pointer

		if (minNode->next)
		{
			pq.push(minNode->next);
		}
	}

	return dummy.next;
}

void Solution::gameOfLife(vector<vector<int>> &board)
{
	const vector<vector<int>> shallowBoard(board);
	int m = board.size(), n = board[0].size();
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int nbrs = countLiveNeighbors(shallowBoard, {i, j});
			int cellVal = shallowBoard[i][j];
			switch (nbrs)
			{
			// under population
			case 0:
			case 1:
				board[i][j] = 0;
				break;
			// reproduction
			case 2:
			case 3:
				if (shallowBoard[i][j] == 0 && nbrs == 3)
				{
					board[i][j] = 1;
				}
				break;
			// over population
			default:
				board[i][j] = 0;
				break;
			}
		}
	}
}