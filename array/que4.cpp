#include<iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter size of array1: ";
    cin >> m;
    cout << "Enter size of array2: ";
    cin >> n;
    
    int arr1[m], arr2[n];
    
    cout << "Enter elements of array1 in non-decreasing order: ";
    for (int i = 0; i < m; i++){
        cin >> arr1[i];
    }
    
    cout << "Enter elements of array2 in non-decreasing order: ";
    for (int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    
    int arr3[m + n];
    int i = 0, j = 0, k = 0;
    
    // Merge the two arrays into arr3
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    
    // Copy the remaining elements of arr1, if any
    while (i < m) {
        arr3[k++] = arr1[i++];
    }
    
    // Copy the remaining elements of arr2, if any
    while (j < n) {
        arr3[k++] = arr2[j++];
    }
    
    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << arr3[i] << " ";
    }
    
    return 0;
}
