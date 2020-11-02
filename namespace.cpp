#include <iostream>

using std::cout;
using std::endl;

namespace A::B::C
{
	int a;
}

int main(int argc, char ** argv)
{
    
    A::B::C::a = 1;
    cout << A::B::C::a << endl;
    return 0;
}
