#include<iostream>
using namespace std ; 
int main(){
    int a[6] = {4,5,6} ; 
    int n = 3 ; 
    int b[3] = {1,2,3} ; 
    int m = 3 ; 
    int i = n - 1 ; 
    int j = m - 1 ; 
    int index = m + n - 1 ; 
    while(i >= 0 && j >= 0){
        if(a[i] >= b[j]){
            a[index] = a[i] ; 
            index-- , i-- ; 
        }else {
            a[index] = b[j] ; 
             index-- , j-- ; 
        }
    }
    while(j >= 0 ){
        a[index] = b[j] ; 
        index-- ; 
        j--; 
    }
    for(int i = 0 ; i < 6 ; i++){
        cout << a[i] ;
    }
    return 0 ; 
}