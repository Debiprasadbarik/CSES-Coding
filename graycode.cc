// // A Gray code is a list of all 2n bit strings of length n,
// //where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).
// // Your task is to create a Gray code for a given length n.
// // Input: The only input line has an integer n
// // Output: Print 2n  lines that describe the Gray code. You can print any valid solution.
// // Constraints
// // 1≤n≤16
// // Input:
// // 2
// // Output:
// // 00
// // 01
// // 11
// // 10
// 
// long long int dec_bin(int a){
//     int rem;
//     long long int bin=0;
//    long long int i=1;
//     if(a==0){
//     return 0;}
//     else if(a==1){
//     return 1;}
//     else{
//     while(a>0){
//         rem=a%2;
//         a=a/2;
//         bin=bin+rem*i;
//         i=i*10;}
//     return bin;}
// }
// 
#include<iostream>
#include<vector>
using namespace std;
vector<string> fun (int n){

    if(n==1){
        vector<string>v1;
        v1.push_back("0");
        v1.push_back("1");
        return v1;
    }
    vector<string>v2;
    vector<string>v3;
    v2=fun(n-1);
    for(int i=0;i<v2.size();i++){
        v3.push_back("0"+v2[i]);
    }
    for(int j=v2.size()-1;j>=0;j--){
         v3.push_back("1"+v2[j]);
    }
    return v3;
}
int main(){
    int n;
    cin>>n;
    vector<string>v4=fun(n);
    for(auto i :v4)
    cout<<i<<endl;
}