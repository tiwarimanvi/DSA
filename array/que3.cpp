//  You are given a large integer represented as an integer array digits, 
// where each digits[i] is the ith digit of the integer. The digits are ordered from
// most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits

#include<iostream>
using namespace std;

int main(){
    int num;
    int remain;
    int integers;
    int count = 0;
    // cout<<digits;
    cout<<"enter the integer";
    cin>>integers;
    int replica = integers;
    while(integers!=0){
        num = integers%10;
        integers = integers/10;
        count += 1;
    }
    int digits[count];
    for (int i=count-1; i>=0; i--){
        digits[i] = replica%10;
        replica = replica/10;
    }
    cout<<"the digit you entered: ";
    for(int i=0; i<count ; i++){
        cout<<digits[i];
        if (i==count-1){
            digits[i] += 1;
        }
    }
    cout<<endl<<"the new digit: ";
    for(int i=0; i<count ; i++){
        cout<<digits[i];
    }
    return 0;
}