#include<iostream>
using namespace std;

class Solution {
public:
    void twoSum(int nums[], int length, int target) {
        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                if (nums[i] + nums[j] == target) {
                    cout << "output: " << nums[i] << ", " << nums[j] << endl;
                }
                else if (nums[i] == target) {
                    cout << "output: " << nums[i] << endl;
                }
            }
        }
    }
};

int main() {
    Solution solution;
    int arr[] = {1, 4, 2, 4, 7, 5};
    int target = 9;
    solution.twoSum(arr, sizeof(arr) / sizeof(arr[0]), target);
    return 0;
}
