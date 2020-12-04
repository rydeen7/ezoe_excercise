#include<iostream>
using namespace std;
void until_ten(int x)
{
    if (x > 10)
        return;
    else
    {
        cout<<x<<endl;
        return until_ten(x + 1);
    }
    
}

int main()
{
    until_ten(1);
}
