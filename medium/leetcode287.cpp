#include<iostream>
#include<vector>
using namespace std ; 
class duplicate{
public :
int duplicated(vector<int> &a){
    int n = a.size() ; 
    int slow = a[0] , fast = a[0] ; 
   do{
    slow = a[slow] ; 
    fast = a[a[fast]] ; 
   }while(slow != fast) ; 
   slow = a[0] ; 
   while(slow != fast){
    slow = a[slow] ; 
    fast = a[fast] ; 
   }
   return fast  ; 
}
};
int main()
{

    vector<int> a = {6, 4, 2, 5, 1, 3, 7, 5};

    duplicate obj;

    cout << obj.duplicated(a);

    return 0;
}