#include<iostream>
using namespace std;

    void bubblesort(int *a, int n, int i){
        // base case
    if(i == n-1)  return ;

        // recursive case
        for(int j= 0; j<n-1-i; j++){
            if(a[j]> a[j+1]) swap(a[j] , a[j+1]) ;
            bubblesort(a,n,i+1);
        }

    }

    //way-2
    void bubblesort1(int *a, int n, int i,int j){
        // base case
        if(i == n-1)  return ;

        // recursive case
    if(j< n-i-1){
        // j ka loop will keep running
        if(a[j] > a[j+1]){
             swap(a[j] , a[j+1]) ;
        }
        bubblesort1(a,n,i,j+1) ;
    }
        else {
            bubblesort1(a,n,i+1,0);
        }
    

    }
int main(){
    int a[] ={ 1,13 ,4,15};
    int n= sizeof(a) / sizeof(int);
    bubblesort1(a,n,0,0);
    for(int i= 0; i<n; i++){
        cout << a[i] << " " ;
    }
    return 0;
}