#include <iostream>
#include <limits>
int main()
{
    double a = std::numeric_limits<double>::infinity() ;
    double b = -std::numeric_limits<double>::infinity() ;

    std::cout << a << "\n" << b << "\n";
    double NaN = std::numeric_limits<double>::quiet_NaN() ;

    bool c = NaN == 0.0 ;
    bool d = NaN == NaN ;
    bool e = NaN < 0.0 ;
    std::cout << c << "\n" << d << "\n" << e << "\n"; 
    
    return 0;
}