#include "pch.h"
#include "../LeetCode/SolutionCircularArrayLoop.h"

TEST(SolutionCircularArrayLoop, Base) {
	SolutionCircularArrayLoop cSolutionCircularArrayLoop;
	bool bResult = cSolutionCircularArrayLoop.CircularArrayLoop(std::vector<int>{-1, 2});
	EXPECT_EQ(bResult, false);
}

TEST(SolutionCircularArrayLoop, Positive) {
	SolutionCircularArrayLoop cSolutionCircularArrayLoop;
	bool bResult = cSolutionCircularArrayLoop.CircularArrayLoop(std::vector<int>{2, -1, 1, 2, 2});
	EXPECT_EQ(bResult, true);
}

TEST(SolutionCircularArrayLoop, Negative) {
	SolutionCircularArrayLoop cSolutionCircularArrayLoop;
	bool bResult = cSolutionCircularArrayLoop.CircularArrayLoop(std::vector<int>{-2, -3, -9});
	EXPECT_EQ(bResult, false);
}