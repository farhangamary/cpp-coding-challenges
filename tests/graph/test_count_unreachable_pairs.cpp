#include <gtest/gtest.h>
#include "challenge.hpp"

TEST(CountUnreachablePairsTest, BasicTest) {
	std::vector<std::vector<int>> edges = { {0, 1}, {0, 2}, {1, 2} };
	int n = 3;
	Solution sl;
	long long result = sl.countPairs(n, edges);

	EXPECT_EQ(result, 0);
}

TEST(CountUnreachablePairsTest, SingleComponentTest) {
	std::vector<std::vector<int>> edges = { {0, 1}, {1, 2}, {2, 3} };
	int n = 4;
	Solution sl;
	long long result = sl.countPairs(n, edges);

	EXPECT_EQ(result, 0);
}

TEST(CountUnreachablePairsTest, NoEdgesTest) {
	std::vector<std::vector<int>> edges = {};
	int n = 5;
	Solution sl;
	long long result = sl.countPairs(n, edges);

	EXPECT_EQ(result, 10);
}