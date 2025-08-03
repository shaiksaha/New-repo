#include <iostream>
using namespace std;
int globalvar = 100;

void demonstrate(){
    int functionvar = 50;
    cout << "start of function " << functionvar << endl;
   if(true){
        int blockvar1  = 25;
        functionvar = 75;
        cout << "inside first block" << endl;
        cout << "fuunctionvar" << functionvar << endl;
        cout << "globalvar" << globalvar << endl;
   }
   
   cout << "after first block" <<functionvar << endl;
   for(int i = 0 ; i < 2 ; i++){
        int vlockvar2 = 10;
        functionvar += vlockvar2;
        cout << "inside for loop" << endl;
        cout << "functionvar" << functionvar << endl;
        cout << "globalvar" << globalvar << endl;
   }

    cout << "end of function" << functionvar << endl;
}
int main(){
      int mainvar = 75;
      cout << "demonstrate scope level" << endl;
      cout << "mainvar" << mainvar << endl;
      cout << "globalvar" << globalvar << endl;
      demonstrate();
      cout << "back in main" << mainvar << endl;
      cout << "globalvar" << globalvar << endl;

      {
        int nestedvar = 200;
        cout << "inside nested block" << endl;
        cout << "nestedvar" << nestedvar << endl;
        cout << "mainvar" << mainvar << endl;
        cout << "globalvar" << globalvar << endl;
      }
}