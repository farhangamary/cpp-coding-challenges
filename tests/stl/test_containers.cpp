#include <gtest/gtest.h>
#include "challenge.hpp"

Solution sl;

TEST(MergeKListsTest, BasicTest)
{
	ListNode *l1 = new ListNode(1, new ListNode(4, new ListNode(5)));
	ListNode *l2 = new ListNode(1, new ListNode(3, new ListNode(4)));
	ListNode *l3 = new ListNode(2, new ListNode(6));

	std::vector<ListNode *> lists = {l1, l2, l3};
	ListNode *result = sl.mergeKLists(lists);

	EXPECT_EQ(result->val, 1);
	EXPECT_EQ(result->next->val, 1);
	EXPECT_EQ(result->next->next->val, 2);
	EXPECT_EQ(result->next->next->next->val, 3);
	EXPECT_EQ(result->next->next->next->next->val, 4);
	EXPECT_EQ(result->next->next->next->next->next->val, 4);
	EXPECT_EQ(result->next->next->next->next->next->next->val, 5);
	EXPECT_EQ(result->next->next->next->next->next->next->next->val, 6);
}

TEST(GameOfLifeTest, BasicTest)
{
	{
		std::vector<std::vector<int>> board = {
			{0, 1, 0},
			{0, 0, 1},
			{1, 1, 1},
			{0, 0, 0}};
		std::vector<std::vector<int>> expected = {
			{0, 0, 0},
			{1, 0, 1},
			{0, 1, 1},
			{0, 1, 0}};
		sl.gameOfLife(board);
		EXPECT_EQ(board, expected);
	}

	{
		std::vector<std::vector<int>> board = {
			{1, 1},
			{1, 0}};
		std::vector<std::vector<int>> expected = {
			{1, 1},
			{1, 1}};
		sl.gameOfLife(board);
		EXPECT_EQ(board, expected);
	}

	{
		std::vector<std::vector<int>> board = {
			{0, 0, 0},
			{0, 1, 0},
			{0, 0, 0}};
		std::vector<std::vector<int>> expected = {
			{0, 0, 0},
			{0, 0, 0},
			{0, 0, 0}};
		sl.gameOfLife(board);
		EXPECT_EQ(board, expected);
	}

	{
		std::vector<std::vector<int>> board = {
			{1, 1, 1},
			{1, 1, 1},
			{1, 1, 1}};
		std::vector<std::vector<int>> expected = {
			{1, 0, 1},
			{0, 0, 0},
			{1, 0, 1}};
		sl.gameOfLife(board);
		EXPECT_EQ(board, expected);
	}
}