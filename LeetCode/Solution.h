#pragma once
#include <vector>
#include <string>
class Solution
{
public:
	Solution();

	const std::vector<std::string>& GetTopics() const;
	const std::string& GetName() const;
	const std::string& GetDifficulty() const;

protected:
	std::vector<std::string> m_arrTopics;
	std::string m_strName;
	std::string m_strDifficulty;

	static std::vector<Solution*> s_arrAllSolution;
};
