#include "challenge.hpp"


using namespace std;

struct cmpNodes {
	bool operator()(const ListNode* a, const ListNode* b) {
		return a->val > b->val; // Min-heap (smallest value at top)
	}
};

ListNode::ListNode(int x) : val(x), next(nullptr) {}
ListNode::ListNode(int x, ListNode* next) : val(x), next(next) {}

ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
	priority_queue<ListNode*, vector<ListNode*>, cmpNodes> pq;

	// Insert all non-null nodes into the priority queue
	for (auto node : lists) {
		if (node) pq.push(node);
	}

	if (pq.empty()) return nullptr;

	ListNode dummy(0);
	ListNode* tail = &dummy;

	while (!pq.empty()) {
		ListNode* minNode = pq.top();
		pq.pop();

		tail->next = minNode;
		tail = minNode; // Move tail pointer

		if (minNode->next) {
			pq.push(minNode->next);
		}
	}

	return dummy.next;
}