#include<iostream>
using namespace std;
void printdecreasing(int n){
    // base case
    if(n== 0) return;
    // recursive case
    cout << n << " ";
    printdecreasing(n-1);
}

// for increasing case
void printincreasing(int n){
    // base case
    if(n== 0) return;
    // recursive case
    
    printincreasing(n-1);
    cout << n << " ";
}
int main(){
int n= 5;
printincreasing(n);

    return 0;
}