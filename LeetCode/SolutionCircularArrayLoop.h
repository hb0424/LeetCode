#pragma once
#include "Solution.h"
#include <vector>

class SolutionCircularArrayLoop :
    public Solution
{
public:
    SolutionCircularArrayLoop();

    bool CircularArrayLoop(std::vector<int>& nums);
};

