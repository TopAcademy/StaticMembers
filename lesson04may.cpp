
#include <iostream>
#include "Circle.h"
using std::cout;
using std::endl;

int main()
{
    cout << Circle::get_counter() << endl;
    Circle c1;
    Circle c2(10, Point{ 15, 26 });
    Circle mas[10];
    c2.print_info();
   // cout << "The length: " << c2.get_len() << endl;
    cout << Circle::get_counter() << endl;
   // cout << "PI = " << c1.get_pi() << endl;
    // cout << "PI = " << c2.get_pi() << endl;
    

}

