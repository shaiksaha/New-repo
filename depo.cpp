#include <iostream>
#include <string>
using namespace std;
int main(){
    char ch;
    cout << "Enter the current light (R/G/Y): " << endl ;
    cin >>  ch ; 
    int time;
    cout << "Enter remainig time: " << endl;
    cin >> time;

    if(ch == 'G'){
        cout << "Current: Green light" << endl;
        for(int i = time ; i >= 0 ;i--){
             cout << i;
        }
        cout << "Yellow light activated for 5 second"<< endl;
        cout << "Red light activated after 30 second"<< endl;
    }
    else if(ch == 'R'){
      cout << "Current: Red light" << endl;
        for(int i = time ; i >= 0 ;i--){
             cout << " " << i;
        }
        cout << endl;
        cout << "green light activated for 45 second"<< endl;
        cout << "yellow light activated after 5 second"<< endl;
    }
    
    

}