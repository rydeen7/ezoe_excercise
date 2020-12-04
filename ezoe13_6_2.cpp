#include<iostream>

auto f = []()
{std::cout<<1;};

int main()
{
    f(); //1

    //f in main()
    auto f = []()
    {std::cout<<2;};

    f();  //2

    {
        f(); //2

        //f in block
        auto f = []()
        {std::cout<<3;};

        f(); //3
    }
    f(); //2

}