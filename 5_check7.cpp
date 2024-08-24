#include<iostream>
using namespace std;
bool is7present(int *a, int n){
    // base case
    if(n== 0) return false;

    // recursive case
    if(a[0] == 7) return true;
    return is7present(a+1, n-1);
}
int main(){
int a[]= {1,4,6,7,8,9};
int n= sizeof(a)/ sizeof(int);
if(is7present(a,n)){
    cout << "prsent hai\n" ;
}
else{
    cout << "nahi hai\n" ;
}
    return 0;
}