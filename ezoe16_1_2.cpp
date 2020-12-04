#include<iostream>
#include<vector>
using namespace std;

int main()
{
    auto for_each = [](auto first, auto last, auto f)
    {
        for (auto iter = first ; iter != last ;  ++iter)
        {
            f(*iter);
        }
    };

    vector<int> v = {1,2,3,4,5,6,7};

    auto twice = [](auto &value){ value = 2 * value; };
    for_each(begin(v), end(v), twice); 

    cout << v[0] << v[1] << v[2] << v[6];
}