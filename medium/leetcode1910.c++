#include<iostream>
#include<string>
using namespace std ; 
int main(){
    string s = "abcdabaccbacbabc" ; 
    string part = "abc" ; 
    while(s.length() > 0 && s.find(part) < s.length()){
        int pos = s.find(part) ; 
        if(pos < s.length()){
            s.erase(pos , part.length()) ;
        }
    }
    cout << s ; 
    return 0 ; 
}