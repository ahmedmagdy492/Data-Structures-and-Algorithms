#include <iostream>
#include <vector>
#include "Element.h"
using namespace std;

int* get_river_sizes(int land[][5], int n, int m);
unsigned short isAdjcent(int rn, int cn, int r, int c);

int main()
{
	int arr[5][5] = {
		{1, 0, 0, 1, 0},
		{1, 0, 1, 0, 0},
		{0, 0, 1, 0, 1},
		{1, 0, 1, 0, 1},
		{1, 0, 1, 1, 0}
	};

	int* result = get_river_sizes(arr, 5, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << result[i] << endl;
	}
}

int* get_river_sizes(int land[][5], int n, int m)
{
	vector<Element> sizesArr;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (land[i][j] == 1)
			{
				unsigned short isValueAdjcent = 0;
				for (int l = 0; l < sizesArr.size(); l++)
				{
					isValueAdjcent = isAdjcent(i, j, sizesArr[l].getR(), sizesArr[l].getC());
					if (isValueAdjcent == 1)
					{
						sizesArr[l].setSize(sizesArr[l].getSize() + 1);
						sizesArr[l].setR(i);
						sizesArr[l].setC(j);
						break;
					}
				}

				if (isValueAdjcent == 0)
				{
					Element el;
					el.setSize(1);
					el.setR(i);
					el.setC(j);
					sizesArr.push_back(el);
				}
			}
		}
	}

	int* arr = new int[sizesArr.size()];

	for (int i = 0; i < sizesArr.size(); i++)
	{
		arr[i] = sizesArr[i].getSize();
	}
	return arr;
}

unsigned short isAdjcent(int rn, int cn, int r, int c)
{
	if (rn == r && cn == (c - 1))
		return 1;
	if (rn == (r - 1) && cn == c)
		return 1;
	if (rn == r && cn == (c + 1))
		return 1;
	if (rn == (r + 1) && cn == c)
		return 1;
	return 0;
}