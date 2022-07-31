#include <iostream>
using namespace std;

int main()
{
    int x = 0 ;
    auto f = [&]{ ++x ; cout << x << endl;  } ;

    f() ; // x == 1
    f() ; // x == 2
    f() ; // x == 3
}