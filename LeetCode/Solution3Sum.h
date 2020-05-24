#pragma once
#include "Solution.h"
class Solution3Sum :
    public Solution
{
public:
    Solution3Sum();

    std::vector<std::vector<int>> ThreeSum(std::vector<int>& nums);
};

