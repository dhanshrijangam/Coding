// Program to find largest element in an Array
// Given an array arr[] of size N, the task is to find the largest element in the given array. 
// Examples: 
// Input: arr[] = {10, 20, 4}
// Output: 20
// Explanation: Among 10, 20 and 4, 20 is the largest. 

#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout << "Enter the number of elements in an array:- ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array:- ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    
    for(i=0;i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    
    cout<<"Largest Number:- "<<max;
    return 0;
}