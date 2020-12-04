#include<iostream>
#include<vector>

auto output_all = [](auto first, auto last, auto output_iter)
{
    for (auto iter = first ; iter != last ; ++iter, ++output_iter)
    {
        
        *output_iter = *iter ;
        //std::cout << *iter << '\n' ;
    }
} ;

int main()
{
    std::vector<int> v = {1,2,3,4,5} ;

    output_all(std::begin(v), std::end(v),
                std::ostream_iterator<int>(std::cout)) ;
    
    std::vector<int> source = {1,2,3,4,5} ;
    std::vector<int> destination(5) ;

    output_all(std::begin(source), std::end(source), std::begin(destination)) ;
    
}