#include "SolutionCircularArrayLoop.h"

SolutionCircularArrayLoop::SolutionCircularArrayLoop()
{
	m_arrTopics.push_back("Array");
	m_arrTopics.push_back("Two Pointers");
	m_strDifficulty = "Medium";
	m_strName = "Circular Array Loop";
}

bool SolutionCircularArrayLoop::CircularArrayLoop(std::vector<int>& nums)
{
    int iSize = nums.size();

    for (int i = 0; i < iSize; ++i)
    {
        std::vector<int> arrIsCheck(iSize, 0);
        int iStep = 1;
        for (int j = i; arrIsCheck[j] != 1; ++iStep)
        {
            if (nums[i] * nums[j] <= 0)
                break;
            arrIsCheck[j] = 1;
            j = (((j + nums[j]) % iSize) + iSize) % iSize;
            if (i == j && iStep > 1)
                return true;
        }

    }
    return false;
}