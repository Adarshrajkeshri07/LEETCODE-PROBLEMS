#include<iostream>
#include<string>
using namespace std  ; 
int main(){
    char ch[9] = {'a','a','a','b','b','c','d','d','e'} ;
    int n = 9 ; 
    int idx = 0 ; 
    for(int i = 0 ; i < n ; i++){
        char c = ch[i] ; 
        int freq = 0 ; 
        while(i < n && c == ch[i]){
            freq++ , i++ ; 
        }
        if(freq == 1){
           ch[idx++] = c ;
        }else {
            ch[idx++] = c ; 
            string str  ; 
            str = to_string(freq) ; 
            for(char val : str){
              ch[idx++] = val ; 
            }
        }
        i--;
    }
    for(int i = 0 ; i < idx ; i++){
        cout << ch[i] << " " ; 
    }
    return 0 ; 
}
