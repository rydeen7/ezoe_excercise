#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x = 0;
    auto f = [&](){ ++x;};
    int y = x;
    std::cout << x << y << endl;

    y = 1;
    std::cout << x << y << endl;

    int &ref = x;
    ref = 2;
    std::cout << x << y << ref << endl;
    f();
    f();
    std::cout << x;
}
