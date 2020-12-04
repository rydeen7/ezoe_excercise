#include<iostream>
#include<vector>

void f(std::vector<int> const & v)
{
    std::cout << v.at(1234);
}

int main(){
    std::vector<int> const v(10000);
    //v.at(1234) = 10;
    f(v);

    // int x = 0;
    // x = 1;
    // std::cout<< x << '\n';

    // const int y = 0;
    // //y = 0;
    
    // std::cout<< y << '\n';

    // int x = 0;
    // int & ref = x;
    // ++ref;
    // std::cout << ref << '\n';

    // int x =0;
    // int & ref = x;
    // const int & cref =x;

    // std::cout << x << ref << cref << '\n';

     


}