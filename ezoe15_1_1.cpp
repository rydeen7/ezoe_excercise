#include<iostream>

auto swap = [](auto &a, auto &b)
{
    auto temp = a ;
    a = b ;
    b = temp ;
    
};
int main()
{
    auto a = 1;
    auto b = 5;
    swap(a, b);
    //std::swap(a, b);
    std::cout << a << "\n";
    std::cout << b << "\n";

}