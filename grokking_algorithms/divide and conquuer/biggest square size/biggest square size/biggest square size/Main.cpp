#include <iostream>
using namespace std;

int biggest_square_size(int w, int h);

int main()
{
	int result = biggest_square_size(1680, 640);
	cout << result << endl;
}

int biggest_square_size(int w, int h)
{
	int squareCount = w / h;
	int leftSpace = w - (h * squareCount);

	if (leftSpace == 0) // base case
	{
		return h;
	}

	return biggest_square_size(h, leftSpace);
}