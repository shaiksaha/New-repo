#include <iostream>
#include <bitset>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;

    cout <<" bitwise and =" << (a & b) << endl;
    cout <<" bitwise or =" << (a | b) << endl;
    cout <<" bitwise not =" << ~a << endl;
    cout <<" bitwise rightshift =" << (a >> b) << endl;
    cout <<" bitwise leftshift =" << (a << b) << endl;
    cout <<" bitwise exor =" << (a ^ b) << endl;
    
}