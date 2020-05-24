#include "pch.h"
#include "../LeetCode/Solution3Sum.h"

TEST(TestSolution3Sum, Base) {
	Solution3Sum c3Sum;
	auto arrResult = c3Sum.ThreeSum(std::vector<int>{-1, 0, 1, 2, -1, -4});
	EXPECT_EQ(arrResult.size(), 2);
	for (int i = 0; i < arrResult.size(); ++i)
	{
		EXPECT_EQ(0, arrResult[i][0] + arrResult[i][1] + arrResult[i][2]);
	}
	
}