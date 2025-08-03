#include <iostream>
#include <string>
using namespace std;
int main(){
    string password;
    cin >> password;
    int length = password.length();

    int upper = 0, lower = 0,digit = 0 , ch = 0;
    for(int i = 0 ; i < length; i++){
        if(isupper(password[i])){
            upper++;
        }
        else if(islower(password[i])){
            lower++;
        }
        else if(isdigit(password[i])){
            digit++;
        }
        else{
            ch++;
        }

        int type = 0;
        if(upper > 0){
            type++;
        }
        else if(lower > 0){
            type++;
        }
    }
    if(length < 6 && ((upper == 0 && lower == 0) || (digit == 0 && ch == 0))){
          cout << "weak password";
    }
    else if(length < 8 && ((upper == 0 && lower == 0&& ch == 0) || (digit == 0 && ch == 0 && lower == 0))){
          cout << "medium password";
    }
    else if(length > 9 &&(upper != 0 && lower != 0 && ch != 0 && digit != 0) ){
        cout <<"strong password";
    }

}