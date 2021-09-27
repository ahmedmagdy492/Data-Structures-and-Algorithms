#include <iostream>
using namespace std;

#define LEN 6

int binary_search(int* arr, int len, int key);

int main()
{
	int arr[LEN] = { 5, 7, 10, 40, 71, 100 };
	int key = 100;

	int result = binary_search(arr, LEN, key);

	cout << "result = " << result << endl;
}

int binary_search(int* arr, int len, int key)
{
	int low = 0;
	int high = len - 1;

	while (low <= high)
	{
		int m = (low + high) / 2;

		if (arr[m] == key)
		{
			return m;
		}
		else if (arr[m] > key)
		{
			high = m - 1;
		}
		else if (arr[m] < key)
		{
			low = m + 1;
		}
	}

	return -1;
}