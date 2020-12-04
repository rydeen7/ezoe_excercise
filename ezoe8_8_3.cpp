#include <iostream>

int solve(int n)
{
    if (n <= 1)
    {
        return n;
    }else{
        return n%10 + 2 * solve(n / 10) ;
    }
}
int convert(int n)
{
    if (n > 0)
    {
        return solve(n);
    }else{
        return -solve(-n);
    }
}



int input()
{
    std::cout << ">" ;
    int x;
    std::cin >> x ;
    return x ;
}

void output (int binary)
{
    std::cout << binary << "\n" ;
}

int main()
{
    while(true)
    {
        auto decimal = input() ;
        int binary = convert(decimal) ;
        output(binary) ;
    }
}