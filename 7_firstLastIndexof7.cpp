#include<iostream>
using namespace std;
int last7(int *a, int n, int i){
// base case
if(i== n) return -1;

//recursive case 
if(a[i]== 7){ // agar phle pe index hai
    int aageindex= last7(a , n, i+1); // to ky pta aage b 7 hoye
    if(aageindex == -1) return i;   // agar aage nhi hua to i return kr dega
    return aageindex;
}
else{
    // agar phle p index nahi hai
    // int index = last7(a, n, i+1);
    // if(index != -1) return index;
    // return index;
    return last7(a,n,i+1);
}

}
int main(){
  int a[] ={3,5,7,8,7};
    int n= sizeof(a)/ sizeof(int);
    cout << last7(a,n,0);



    return 0;
}