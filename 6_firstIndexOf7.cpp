#include<iostream>
using namespace std;
int first7(int *a, int n){
    // bool case
    if(n==0) return -1;
    // recursive case
    if(a[0] == 7) return 0;
    int chotaindex= first7(a+1 , n-1);
    if(chotaindex != -1) return chotaindex+1;
    return -1;
}
int main(){
    int a[] ={3,5,7,8,7};
    int n= sizeof(a)/ sizeof(int);
    cout << first7(a,n);


    return 0;
}