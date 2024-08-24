#include<iostream>
using namespace std;
string keys[10] ={
    "zero" , "one" , "two" ,"three", "four", "five","six" ,"seven" ,"eight" ,"nine"
};
void intTostring(int n){
    // base case
    if(n== 0) return ;
    // recursive case
    int ld = n % 10;
    intTostring(n/10);
    cout << keys[ld] <<" ";
}

int main(){
int n = 2048;
intTostring(n) ;

    return 0;
}