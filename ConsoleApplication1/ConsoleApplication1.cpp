// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int nAnswer = 0;
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
						nAnswer++;
					if ((sum % nCheck) == 0)
						break;
				}
			}
		}
	}

	return nAnswer;
}

//Another solution

/*
1. 
{
	for(int i=2;i*i<n;i++)
	{
		if(n % i != 0)
			return FALSE;
	}
}

2.
{
	int prime[100]; //소수를 저장할 변수
	int pn = 0; //소수의 개수
	bool check[100] = { false, }; //지워졌으면 true
	int n = 100; //100까지의 소수

	for (int i = 2; i <= n; i++) {
		if (check[i] == false) {
			prime[pn++] = i;
			for (int j = i + i; j <= n; j += i) {
				check[j] = true;
			}
		}
	}
	for (int i = 0; i < pn; i++) {
		cout << prime[i] <<" ";
	}
}
*/
