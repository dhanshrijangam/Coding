//Program to find largest element in an Array
//Given an array arr[] of size N, the task is to find the largest element in the given array. 
// Input : arr[] = {1, 2, 3}
// Output : 6

#include <iostream>
using namespace std;

int main() {
    int n,i,total = 0;
    cout << "Enter the number of elements in an array:- ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array:- ";
    for(i=0;i<n;i++){
        cin>>arr[i];
        total = total + arr[i];
    }
    
    cout<<"Sum:- "<<total;
    return 0;
}