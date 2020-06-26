#include <iostream>
#include <vector>
using namespace std;

int birthdayCakeCandles(int size, vector<int> ar);

int main() {
    vector<int> nums = {18, 90, 90, 13, 90, 75, 90, 8, 90, 43};
    int size = nums.size();
    int result = birthdayCakeCandles(size, nums);
    cout << result << std::endl;
}

int birthdayCakeCandles(int size, vector<int> ar) {
    // Find the max value in the list
    int max = ar.at(0);
    int count = 0;
    // See how many times it occurs
    for (int i = 0; i < size; ++i) {
        cout << ar.at(i) << " : " << max << endl;
        if (ar.at(i) > max) {
            max = ar.at(i);
        }
        if (ar.at(i) == max) {
            cout << ar.at(i) << endl;
            count++;
        }
    }
    // Return the amount of items it occurs
    return count;
}
