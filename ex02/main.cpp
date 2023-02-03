#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << "\t---MY TESTS---\n" << std::endl;

	Array<int> test(10);
	for (int i = 0; i < 10; i++) {
		test[i] = i;
	}

	try {
		for (int i = 0; i < 11; i++) {
			std::cout << test[i];
		}
	} catch (std::exception &e) {
		std::cout << std::endl << "10 is out of bounds so exception is thrown" << std::endl;
	}
	try {
		test[-1];
	} catch (std::exception &e) {
		std::cout << "-1 is out of bounds so exception is thrown" << std::endl;
	}

	std::cout << "\n\t---42 TESTS---\n" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}