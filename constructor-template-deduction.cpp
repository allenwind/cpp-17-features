#include <iostream>
#include <vector>
#include <utility>

using std::cout;
using std::endl;

int main(int argc, char ** argv)
{
    std::vector<int> v1 = { 1, 2, 3, 4, 5 }; // before C++17
    std::vector v2 = { 1, 2, 3, 4, 5 }; // C++17
    for (auto x : v2)
        cout << x << endl;
    
    std::pair p(1.0, "pair"); // C++17
    cout << p.first << " " << p.second << endl;

    return 0;
}