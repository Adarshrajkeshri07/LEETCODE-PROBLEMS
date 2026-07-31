#include<iostream>
using namespace std ; 
bool palindrome(int n){
    int num = n ; 
    int reverse = 0 ; 
    int lastdigit ; 
    while(n!=0){
        lastdigit = n  % 10 ; 
        reverse = reverse * 10 + lastdigit ; 
        n/=10;
    }
    if(reverse == num){
        return true ; 
    }
    else 
    return false ; 

}
int main(){
    int n ; 
    cout << "enter the value of n : " ; 
    cin >> n ;  
     bool a = palindrome(n);
     if(a){
        cout << " the number is palindrome number " ; 
     }else 
     cout <<" not";
     return 0 ;
}