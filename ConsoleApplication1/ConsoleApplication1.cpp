// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	vector<int> nums = { 1,2,7,6,4 };

	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			for (int k = j + 1; k < nums.size(); k++)
			{
				//sosu check
				int sum = nums[i] + nums[j] + nums[k];
				for (int nCheck = 2; nCheck <= sum; nCheck++)
				{
					if (sum == nCheck)
						answer++;
					if ((sum % nCheck) == 0)
						break;
				}
			}
		}
	}

	return answer;
}