#include "Karen.class.hpp"

// int add(int i, int j) { return i+j; }
// int sub(int i, int j) { return i-j; }

typedef int (*FnPtr)(int, int);

int		main(void)
{
	Karen	Karen01;

	// std::map<std::string, FnPtr> myMap;
    // myMap["add"] = add;
    // myMap["sub"] = sub;

    // // usage:
    // std::string s("add");
    // int res = myMap[s](2,3);
    // std::cout << res;

	Karen01.complain("debug");
	Karen01.complain("info");
	Karen01.complain("warning");
	Karen01.complain("error");
	return 0;
}