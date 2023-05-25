// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
// Input:
// The only input line contains a string of n
//  characters.
// Output:
// Print one integer: the length of the longest repetition.
// Constraints: 1≤n≤10^6
#include<iostream>
using namespace std;
int main()
{
    string seq;
    cin>>seq;
    long long count=1,maxcount=0;
    long long int leng=seq.length(); //ACACACACAC
    for (int i=0;i<leng;i++){
        if (seq[i]==seq[i+1])
            count++;
            if(count>maxcount){
                maxcount=count;
            }
        else
            count=1;
            if(count>maxcount){
                maxcount=count;
            }}
    cout<<maxcount;
}