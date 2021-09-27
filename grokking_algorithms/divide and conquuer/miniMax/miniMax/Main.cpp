#include <iostream>
#include <vector>
using namespace std;

int getMax(vector<int> arr);
void removeValue(int index, vector<int> arr);

int main() {
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(7);
	arr.push_back(9);

	int result = getMax(arr);
	cout << result << endl;
}

void removeValue(int index, vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		if (i == index) {
			arr[i] = -122;
		}
	}
}

int getMax(vector<int> arr) {
	int max = 0, total = 0, indexToRemove = -1;

	for (int c = 0; c < arr.size(); c++)
	{
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] > max) {
				max = arr[i];
				indexToRemove = i;
			}
		}
		removeValue(indexToRemove, arr);
		total += max;
		max = 0;
	}
	return total;
}

