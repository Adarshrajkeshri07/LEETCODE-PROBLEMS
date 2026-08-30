#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
string a  ; 
cout << "enter you word :- " ; 
getline(cin , a) ; 
 int st = 0 , end = a.length() - 1 ; 
 while(st < end) {
    swap(a[st] , a[end]); 
    st++ , end-- ; 
 }
 cout << a ; 
 return 0 ; 

}