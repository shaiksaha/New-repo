#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int factorial = 1;
    if(n == 0 || n == 1){
        cout << 1;
    }
    else{
        for(int i = n; i > 0 ; i--){
              factorial = factorial*i;
        }
    }
    cout << factorial << endl;    


}