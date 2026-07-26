#include<iostream>
using namespace std ; 
double pow(double x , long long n ){
    double ans = 1 ;
    if(n==0){
        return ans ; 
    } 
    if(x == 0 ){
        
        return 0 ;
    }
    if(x==1){
        return ans ; 
    }
 while(n > 0 ){
    if(n % 2 == 1){
        ans *= x ; 
    }
    x *= x ; 
    n /= 2 ; 
 }
 return ans ;
}
int main(){
    double a = 0;
    long long n = 3 ;
  double k =   pow(a,n);
  cout << k ; 
    return 0 ; 
}