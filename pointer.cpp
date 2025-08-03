#include <iostream>
#include <memory>
using namespace std; 
void print(int num){
    cout << num << endl;
    num = 10;
    cout << num << endl;
}
int main(){
    int num;
    cin >> num;
  cout << num << endl;
  print(num);
  cout << num << endl;
}