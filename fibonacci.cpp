#include <iostream>
using namespace std;
int main(){
    int a = 0,b = 1,n;
    cin >> n;
    
    int sum = 0;
   if(n == 0){
       cout << 0;
   }
   else if(n == 1){
        cout << 1;
   }
   else{
       for(int i = 1; i < n; i++){
         sum  = a + b;
         a = b;
         b = sum;
       }
       cout << sum << endl;
   }


}