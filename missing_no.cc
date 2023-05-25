// You are given all numbers between 1,2,…,n
//  except one. Your task is to find the missing number.
// Input
// The first input line contains an integer n
// The second line contains n−1
//  numbers. Each number is distinct and between 1
//  and n (inclusive).
// Output
// Print the missing number.
#include<iostream>
// #include <vector>
// #include <sstream>
using namespace std;
int main(){
    long long int no;
    cin>>no;
    long long int total;
    long long int sum=0;
    long long int arr[200000];
    for(long long int i=0;i<no-1;i++){
        cin>>arr[i];
    }
    total=no*(no+1)/2;
    for(long long int j=0;j<no-1;j++){
        sum=arr[j]+sum;
    }
    cout<<total-sum;
}
