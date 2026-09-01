#include<iostream>
#include<cctype>
using namespace std ; 
// bool isalpha(char ch){
//     if(ch >= 'a' && ch <= 'z')return true ;
//     if(ch >= 'A' && ch <= 'Z')return true ;
//     if(ch >= '0' && ch <= '9')return true ;
//     return false ;
// }
bool isvalid(string s){
    int size = s.length() ;
    int st = 0 , end = size - 1 ; 
    while(st < end){
        if(!isalpha(s[st])){
            st++;
            continue;
        }else
        if (!isalpha(s[end]))
        {
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false ;
        }
        st++ , end-- ; 
    }
    return true ; 
}
int main(){
    string s ; 
    cout << " enter a sentence/word :-  " ;
    getline(cin,s) ;
    bool ans = isvalid(s);
    if(ans){
        cout << " yes valid" ;
    }else {
        cout << " invalid" ;
    }
    return 0 ; 
}