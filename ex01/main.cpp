#include "iter.hpp"

int main()
{
	int array[] = {1, 1, 2, 3, 5, 8, 13};
	std::string string_array[] = {
			"Manners maketh man.",
			"Do you know what that means?",
			"Then let me teach you a lesson.",
			"- Harry Hart from \"Kingsman: The Secret Service\""
	};
	float float_array[] = {42.0, 4.2, 0.42, 0.042};

	std::cout << "-----   INT  -----" << std::endl;
	int size = sizeof(array) / sizeof(array[0]);
	iter(array, size, print);

	std::cout << "----- STRING -----" << std::endl;
	int length = sizeof(string_array) / sizeof(string_array[0]);
	iter(string_array, length, print);

	std::cout << "-----  FLOAT -----" << std::endl;
	int number = sizeof(float_array) / sizeof(float_array[0]);
	iter(float_array, number, print);
    return (0);
}
