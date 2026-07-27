#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[6] = {1,3,7,2,9,4} ; 
    int st = 0 , end = 5 ,height,widht,area ; 
    int maxvalue = 0 ; 
    while(st < end ){
        height = min(a[st],a[end]);
        widht = end - st  ;
        area = height * widht ; 
        maxvalue = max(area , maxvalue) ; 
        a[st] < a[end] ? st++ : end--;
    }
    cout << "the maximum amout of water fill in the container : "<<maxvalue ;
    return 0 ;
}