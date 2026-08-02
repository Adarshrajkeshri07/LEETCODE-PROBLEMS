#include<iostream>
using namespace std ; 
int main(){
     int a[5]={2,4,3,5,7};
     int size = 5 ;
     int suffix = 1 ; 
     int ans[5] ; 
     ans[0]=1 ; 
     for(int i = 1; i < size;i++){
        ans[i] = ans[i-1]*a[i-1];
     }
     for(int i = size - 1 ;i >= 0 ; i++ ){
        ans[i]*=suffix;
        suffix*=a[i];
     }
      for(int i = 0 ; i < size ; i++){
        cout << ans[i]<<" " ; 
      }
      return 0 ; 
}