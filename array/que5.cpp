// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.

#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int majorityElement = arr[0];
    int count = 1;
    
    // Find the majority element
    for(int i = 1; i < size; i++){
        if(arr[i] == majorityElement){
            count++;
        } else {
            count--;
            if(count == 0){
                majorityElement = arr[i];
                count = 1;
            }
        }
    }
    
    // Verify if the majority element occurs more than n/2 times
    count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == majorityElement){
            count++;
        }
    }
    
    if(count > size/2){
        cout << "The majority element is: " << majorityElement << endl;
    } else {
        cout << "No majority element found!" << endl;
    }
    
    return 0;
}
