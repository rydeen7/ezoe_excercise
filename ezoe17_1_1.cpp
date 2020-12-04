#include<iostream>

void f(std::string x )
{
    std::cout << x ;
}

int main()
{
//    f("hello");
    [](auto x) {std::cout << x ;}("hello");
}
