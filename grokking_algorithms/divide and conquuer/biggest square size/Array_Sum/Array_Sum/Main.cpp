#include <iostream>
using namespace std;

int sum(int* arr, int start, int len);

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	cout << sum(arr, 0, 5) << endl; // output: 15
}

int sum(int* arr, int start, int len)
{
	if (len == 0)
		return 0;
	if (len == 1)
		return arr[0];
	if (start == len)
		return arr[len - 1];
	return arr[start] + sum(arr, ++start, len);
}