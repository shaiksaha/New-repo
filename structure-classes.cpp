#include <iostream>
using namespace std;
// struct Book{
//     int pages;
//     double price;
// };
// int main(){
//     Book s;
//     s.pages = 10;
//     s.price = 500.00;
//     cout << s.pages << " " << s.price; 
// }

class Circle{
    public:
    double radius;
};

int main(){
   Circle* r = new Circle();
r->radius = 12.25;
cout << r->radius;
delete r; 
}
