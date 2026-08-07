#include<iostream>
using namespace std ; 
int sum(int number1 , int number2){
    int sum = 0 ; 
    sum = number1 + number2  ;
    return sum ; 
}
int main(){
    int a , b ; 
    cout << "enter the value of a : " ; 
    cin >> a ; 
    cout << "enter the value of b : " ; 
    cin >> b  ; 
     int ans = sum(a,b);
     cout << ans ; 
     return 0 ;


}