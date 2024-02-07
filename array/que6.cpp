#include <iostream>

using namespace std;

bool containsDuplicate(int nums[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (nums[i] == nums[j]) {
                return true; // Found a duplicate
            }
        }
    }
    return false; // No duplicates found
}

int main() {
    // Example usage:
    int nums1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    cout << boolalpha << containsDuplicate(nums1, size1) << endl; // Output: false

    int nums2[] = {1, 2, 3, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    cout << boolalpha << containsDuplicate(nums2, size2) << endl; // Output: true

    return 0;
}
