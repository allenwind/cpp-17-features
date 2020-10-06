#include <iostream>
#include <tuple>

using std::cout;
using std::endl;

int main(int argc, char ** argv)
{
    std::tuple tup = { 1, 1.1, "tuple" };
    auto[i, j, k] = tup; // structured binding
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    std::pair p = { 1, 2 };
    auto&[x, y] = p;
    y = 3;
    cout << p.second << endl; // 结构化绑定还可以改变对象的值
    
    return 0;
}