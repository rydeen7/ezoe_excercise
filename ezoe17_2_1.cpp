#include<iostream>
#include<string>
void f()
{
    auto message = "hello";
    [=](){std::cout << message;} ;
}

int main()
{
    f();

}