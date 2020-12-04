#include<iostream>
#include<string>

class User{
public:
    std::string name;
};

int main(){
    int *x = new int(5);
    std::cout << "the pointer " << x << " points to " << *x << std::endl;
    delete x;

    User *u = new User();
    u->name = "masa";
    std::cout << (*u).name << std::endl;

    delete u;

    return 0;


}