#include<iostream>
#include<vector>
using namespace std;

int main()
{
    auto a = 1;
    auto & b = a;
    cout << b <<endl;
    b = b*2;
    cout << a << endl;
}