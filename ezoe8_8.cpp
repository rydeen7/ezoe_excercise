#include<iostream>
int input()
{
    int x ;
    std::cin >> x ;
    return x ;

}

void loop_until_zero()
{
    if (input() == 0)
        return ;
    else
    {
        loop_until_zero() ;
    }
    
}
int main()
{
    loop_until_zero() ;
}
