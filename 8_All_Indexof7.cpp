#include<iostream>
using namespace std;

void printall7(int *a, int n, int i){
    // base case
    if(i == n) return ;

    // recursive case
    if(a[i] == 7){  // agar ith par index hai to ith pr print kar do but return mat kro
        cout << i << " ";
    }
    printall7(a, n , i+1); // ab remaining array p 7 recursionn dundega
}
int main(){
    int a[] ={3,5,7,8,7};
    int n= sizeof(a)/ sizeof(int);
     printall7(a,n,0);


    return 0;
}