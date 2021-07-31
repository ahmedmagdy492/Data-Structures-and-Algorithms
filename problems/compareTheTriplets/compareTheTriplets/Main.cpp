#include <iostream>
using namespace std;

int* compareTriplets(int* a, int alen, int* b, int blen);

int main()
{
	int alice[3] = { 1, 2, 3 };
	int bob[3] = { 3, 2, 1 };
	int* score = compareTriplets(alice, 3, bob, 3);

	cout << "alice score = " << score[0] << ", bob score = " << score[1] << endl;

	delete[] score;
}

int* compareTriplets(int* a, int alen, int* b, int blen)
{
	int* score = new int[2] { 0 ,0 }; // 1

	for (int i = 0; i < blen; i++) // 4
	{
		if (a[i] > b[i]) // 3
		{
			score[0] += 1;
		}
		else if (a[i] < b[i])
		{
			score[1] += 1; // 3
		}
	}

	return score; // 1

	// 12
}