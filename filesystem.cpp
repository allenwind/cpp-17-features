#include <iostream>
#include <filesystem>

using std::cout;
using std::endl;

namespace fs = std::filesystem;

int main(int argc, char ** argv)
{
    
    // iter directory
    for (auto & s : fs::directory_iterator("."))
        cout << s.path() << endl;
    return 0;
}
