#include<iostream>
using namespace std;
int printpower(int x, int n){
    // base case
    if(n== 0){ 
    return 1;
    }
    // recursive case
    
   return x *printpower(x, n-1);
}

int main(){
int x;
cin >> x;
cout << printpower(x,3);

    return 0;
}