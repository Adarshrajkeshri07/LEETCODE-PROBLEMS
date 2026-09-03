#include<iostream>
#include<algorithm>
#include<string>
using namespace std ; 
string reword(string s){
    int n = s.length() ;
    reverse(s.begin() , s.end()) ;
    string word , ans ; 
    for(int i = 0 ; i < n ; i++){
        while( i < n && s[i] != ' '){
            word += s[i] ;
            i++ ; 
        }
        reverse(word.begin() , word.end()) ; 
        if(word.length() > 0 ){
            ans += " " + word ; 
        }
        word.clear() ; 
    }
    return ans.substr(1) ; 
}
int main(){
    string s = "hello my name is adarsh raj keshri " ; 
   string ans =  reword(s) ; 
    cout << ans ; 
    return 0 ; 
}