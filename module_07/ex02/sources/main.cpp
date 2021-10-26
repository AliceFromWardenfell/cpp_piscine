#include "array.hpp"
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <iomanip>

#define ERROR "\033[31mError: \033[0m"

template <typename T>
void	print_arr(Array<T> const & arr)
{
	for (size_t i = 0; i < arr.size() - 1; i++)
		std::cout << std::setfill(' ') << std::setw(2) << arr[i] << ", ";
	std::cout << std::setfill(' ') << std::setw(2) << arr[arr.size() - 1] << std::endl;
	// arr[3] = 5; // assignment to const test
}

int		main(void)
{
	try
	{
		std::cout << "\033[30m------------------01------------------\033[0m" << std::endl;
		
		Array<>	arr(10);
		print_arr(arr);
		std::cout << "lenght: " << arr.size() << std::endl;
		// std::cout << "arr[10] = " << arr[10] << std::endl; // out_of_range exception test
		
		srand(time(0));
		for (size_t i = 0; i < arr.size(); i++)
			arr[i] = rand() % 90 + 10;
		
		print_arr(arr);
		arr[0] = 10;
		arr[9] = 99;
		print_arr(arr);
		
		std::cout << "\033[30m------------------02------------------\033[0m" << std::endl;
		
		Array<> arr2 = arr;
		arr2[0] = 21;
		print_arr(arr);
		print_arr(arr2);
		
		std::cout << "\033[30m------------------03------------------\033[0m" << std::endl;
		
		Array<>	arr3(10); // change lenght to lenght_error exception test
		arr3 = arr;
		arr3[0] = 42;
		print_arr(arr);
		print_arr(arr3);
		
		std::cout << "\033[30m------------------04------------------\033[0m" << std::endl;

		Array<int *>	arr4(4);
		std::cout << "lenght: " << arr4.size() << std::endl;
		
		srand(time(0));
		for (size_t i = 0; i < arr4.size(); i++)
			arr4[i] = &arr[i];
		
		print_arr(arr4);

		std::cout << "\033[30m------------------05------------------\033[0m" << std::endl;

		Array<char>	str(10);
		for (size_t i = 0; i < str.size(); i++)
			str[i] = rand() % 25 + 97;

		print_arr(str);
		std::cout << "str[10] = " << static_cast<int>(str[10]) << std::endl;

		std::cout << "\033[30m------------------06------------------\033[0m" << std::endl;

		Array<float>	arr5;

		std::cout << "lenght: " << arr5.size() << std::endl;
		// std::cout << "arr5[0] = " << arr5[0] << std::endl; // out_of_range exception test

		std::cout << "\033[30m------------------07------------------\033[0m" << std::endl;

		Array<std::string>	arr6(4);

		arr6[0] = "My";
		arr6[1] = "name";
		arr6[2] = "is";
		arr6[3] = "Neo";
		print_arr(arr6);

		std::cout << "\033[30m------------------\\0------------------\033[0m" << std::endl;
	}
	catch (std::out_of_range ex)	{ std::cout << ERROR << "out_of_range: " << ex.what() << std::endl; }
	catch (std::length_error ex)	{ std::cout << ERROR << "length_error: " << ex.what() << std::endl; }
	catch (std::exception ex)		{ std::cout << ERROR << ex.what() << std::endl; }
	return 0;
}
