#include "Solution3Sum.h"
#include <algorithm>

Solution3Sum::Solution3Sum()
{
	m_arrTopics.push_back("Array");
	m_arrTopics.push_back("Two Pointers");
	m_strDifficulty = "Medium";
	m_strName = "3Sum";
}

std::vector<std::vector<int>> Solution3Sum::ThreeSum(std::vector<int>& nums)
{
	std::vector<std::vector<int>> arrResult;
	if (nums.size() < 3)
		return arrResult;
	
	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size()-2; ++i)
	{
		if (nums[i] > 0)
			break;
		if (i > 0 && nums[i] == nums[i - 1])
			continue;
		int iLeft = i + 1;
		int iRight = nums.size() - 1;
		while (iLeft < iRight)
		{
			if (0 == nums[i] + nums[iLeft] + nums[iRight])
			{
				arrResult.push_back(std::vector<int>{nums[i], nums[iLeft], nums[iRight]});
				++iLeft, --iRight;

				while (iLeft < iRight && nums[iLeft] == nums[iLeft - 1])
					++iLeft;
				while (iLeft < iRight && nums[iRight] == nums[iRight + 1])
					--iRight;
			}
			else if (0 < nums[i] + nums[iLeft] + nums[iRight])
			{
				--iRight;
			}
			else
			{
				++iLeft;
			}
		}
	}

	return arrResult;
}
//std::vector<std::vector<int>> Solution3Sum::ThreeSum(std::vector<int>& nums)
//{
//	std::vector<std::vector<int>> arrResult;
//
//	for (int i = 0; i < nums.size(); ++i)
//	{
//		for (int j = i + 1; j < nums.size(); ++j)
//		{
//			for (int k = j + 1; k < nums.size(); ++k)
//			{
//				if (0 == nums[i] + nums[j] + nums[k])
//				{
//					arrResult.push_back(std::vector<int>{nums[i], nums[j], nums[k]});
//				}
//			}
//		}
//	}
//
//	std::vector<std::vector<int>> arrFinal;
//	for (int i = 0; i < arrResult.size(); ++i)
//	{
//		bool bSame = false;
//		for (int j = i + 1; j < arrResult.size(); ++j)
//		{
//			auto row = arrResult[j];
//			auto it0 = std::find(row.begin(), row.end(), arrResult[i][0]);
//			if (it0 == row.end())
//			{
//				continue;
//			}
//			row.erase(it0);
//			auto it1 = std::find(row.begin(), row.end(), arrResult[i][1]);
//			if (it1 == row.end())
//			{
//				continue;
//			}
//			row.erase(it1);
//			auto it2 = std::find(row.begin(), row.end(), arrResult[i][2]);
//			if (it2 == row.end())
//			{
//				continue;
//			}
//			bSame = true;
//		}
//		if(bSame == false)
//			arrFinal.push_back(arrResult[i]);
//	}
//	return arrFinal;
//}