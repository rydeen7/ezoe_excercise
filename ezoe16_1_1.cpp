#include<iostream>
#include<vector>
using namespace std;

int main()
{
    auto call_func = [](auto func)
    {
        func(123);
    };
    
    auto print = [](auto x){std::cout << x << endl;};
    call_func(print);

    auto print_twice = [](auto x){std::cout << 2*x <<endl;};
    call_func(print_twice);

    auto for_each = [](auto first, auto last, auto f)
    {
        for (auto iter = first ; iter != last ;  ++iter)
        {
            f(*iter);
        }
    };
    std::vector<int> v = {1,2,3,4,5};
    for_each(std::begin(v), std::end(v), print);
    for_each(std::begin(v), std::end(v), print_twice);

}