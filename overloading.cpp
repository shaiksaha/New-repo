#include <iostream>
using namespace std;
int calculate(int a, int b){
    return a+b; 
}
float calculate(float a, float b){
    return (float)a*b;
}
float calculate(int a, int b, int c){
    
    return (float)(a+b+c)/3;
}
int main(){
    // int a,b,c;
    // cin >> a >> b;
    cout <<  calculate(10,20)<< endl;
    cout << calculate((float)10,(float)54) << endl;
    cout << calculate(10,20,30) << endl;

}