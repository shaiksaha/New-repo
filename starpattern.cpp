#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int i = a ; i > 0; i--){
      for(int j = 1; j <= a-i; j++){
        cout << " ";
      }
      for(int k = 1; k <= i ; k++){
          cout << "* ";
      }
      cout << endl;
    }
}