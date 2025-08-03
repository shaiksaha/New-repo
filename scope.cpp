#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int s ,m, l;
    cin >> a >> b >> c;
    {
        if(a > b && a > c){
        l = a;
    }
    else if(b > a && b > c){
        l = b;
    }
    else {
        l = c;
    }
    }
    {
       if(a < b && a < c){
        s = a;
    }
    else if(b < a && b < c){
        s = b;
    }
    else {
        s = c;
    } 
    }
    {
        if(b < a && a  < c){
            m = a;
        }
        else if( a <b && b < c){
            m = b;
        }
        else{
            m = c;
        }
    }
    cout << " " <<  s << " " << m << " " << l << endl;
}