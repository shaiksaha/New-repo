#include <iostream>
using namespace std;
// int main(){
//     int num;
//     cin >> num;
//     int n = num*num;
//     int sum = 0, count = 1;
//     while(n != 0){
        
//         int digit = n % 10;
//         sum = sum + digit*count;
        
//         if(sum == num){
//             cout << "yes";
//             return 0;
//         }
//         count = count*10;
//         n = n / 10;
//     }
//     cout << "no";
// };

int max(int* a, int* b, int* c){
     if(*a > *b &&  *a >*c){
        return *a; 
     }
    else if(*b > *a &&  *b >*c){
        return *b;
     }
     else{
        return *c;
     }
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;
  
    int temp1 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp1;

    int temp2 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = temp2;

    cout <<a << " " << b << " " << c << endl;
    int find = max(&a,&b,&c);
    cout << find <<endl;
    
    
}