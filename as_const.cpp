#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(int argc, char ** argv)
{
	std::string s = "abc";
	const std::string & cs = std::as_const(s);
}
