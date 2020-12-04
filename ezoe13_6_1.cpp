#include<iostream>

namespace ns
{
    int a {};
    void f()
    {
        a = 0;
    }
}

int main()
{
    ns::a = 0;
    std::cout<< ns::a << std::endl;
}