#include<iostream>
#include<vector>
using namespace std;

auto all_of = [](auto first, auto last, auto pred)
{
    for (auto iter = first; iter != last; ++iter)
    {
        if (pred(*iter) == false)
            return false;
    }
    return true;
};

auto any_of = [](auto first, auto last, auto pred )
{
    for (auto iter = first; iter != last; ++iter)
    {
        if (pred(*iter))
        return true;
    }
    return false;
};

auto none_of = [](auto fisrt, auto last, auto pred)
{
    for (auto iter = fisrt; iter != last; ++iter)
    {
        if(pred(*iter))
            return false;
    };
    return true;
};

auto is_all_of_odd = [](auto first, auto last)
{
    return std::all_of( first, last,
            [](auto value){return value % 2 == 0 ;} ) ;
};


auto is_all_of_le_100 = [](auto first, auto last)
{
    return std::all_of(first, last,
            [](auto value) {return value <= 100 ;} ) ;
};

int main()
{
    std::vector<int> v = {2,4,6,7};

    bool d = is_all_of_odd(begin(v), end(v));
    bool b = std::all_of(begin(v), end(v),
            [](auto vallue) {return false ;} );
    bool c = true;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    std::vector<int> y = {1,2,3,4,5};
    bool has_3 = std::any_of(begin(y), end(y),
            [](auto x) { return x == 3 ;} );
    bool has_10 = std::any_of(begin(y), end(y),
            [](auto x) { return x == 10 ;} );
    cout << has_3 << endl;
    cout << has_10 << endl;


    auto is_100 = [] (auto x) { return x==100 ; };
    std::vector<int> z = {1,2,3,4,5};
    bool e = std::none_of(std::begin(z), end(z), is_100);

    cout << 'e' << e << endl;

};