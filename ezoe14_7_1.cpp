#include<iostream>
#include<vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5} ;

    auto i = std::begin(v) ;
    auto j = std::end(v) ;

    std::cout << j-i << "\n" ;
    ++i ;
    std::cout << j-i << "\n" ;
    
    }