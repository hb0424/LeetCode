﻿// LeetCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <vector>
#include <iostream>
#include "Solution3Sum.h"

int main()
{
    std::cout << "Hello World!\n";

    Solution3Sum c3Sum;
    std::vector<int> arr = {-1, 0, 1, 2, -1, -4};
    auto arrResult = c3Sum.ThreeSum(arr);
    arr = { 0, 0, 0 };
    arrResult = c3Sum.ThreeSum(arr);
}


