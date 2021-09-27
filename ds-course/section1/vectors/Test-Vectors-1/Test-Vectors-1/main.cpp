#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = { 1, 2, 3, 4 };
    arr.push_back(5);

    for (auto item : arr) {
        cout << item << endl;
    }

    return 0;
}
