#include <iostream>
#include <vector>
using namespace std;

int maximum_subarray(vector<int>& nums);
int sum(vector<int>& arr, int start, int end);

int main()
{
	// -2,1,-3,4,-1,2,1,-5,4
	vector<int> arr;
	arr.push_back(-2);
	arr.push_back(1);
	arr.push_back(-3);
	arr.push_back(4);
	arr.push_back(-1);
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(-5);
	arr.push_back(4);
	int result = maximum_subarray(arr);

	cout << result << endl;
}

int maximum_subarray(vector<int>& nums)
{
	int max = 0, c = 0;
	vector<int> resultArr;

	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 1; j < nums.size(); j++)
		{
			int sum1 = sum(nums, i, nums.size() - 1);
			int sum2 = sum(nums, i + j, nums.size() - 1);
			max = sum1 > sum2 ? sum1 : sum2;
			resultArr.push_back(max);
			c++;
		}
	}

	max = resultArr[0];
	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (resultArr[i] > max)
		{
			max = resultArr[i];
		}
	}

	return max;
}

int sum(vector<int>& arr, int start, int end)
{
	int total = 0;
	for (int i = start; i <= end; i++)
	{
		total += arr[i];
	}
	return total;
}