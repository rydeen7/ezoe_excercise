#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{1,2,3};
    cout << v.size() << endl;;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "size" << v.size() << endl;
 // this cannot work  cout << v << endl;
    cout << "v[1]" << v.at(1) << endl;
    cout << "v[3]" << v[3] << endl;
    size_t size = v.size();
    cout << "size" << size << endl;
    size_t index = 4;
    cout << "v[4]" << v.at(index) << endl;

    return 0;
}