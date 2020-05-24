#include "Solution.h"

std::vector<Solution*> Solution::s_arrAllSolution;

Solution::Solution()
{
	s_arrAllSolution.push_back(this);
}

const std::vector<std::string>& Solution::GetTopics() const
{
	return m_arrTopics;
}

const std::string& Solution::GetName() const
{
	return m_strName;
}

const std::string& Solution::GetDifficulty() const
{
	return m_strDifficulty;
}