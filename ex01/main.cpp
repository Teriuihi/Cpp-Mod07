#include "iter.hpp"

void printArr(int* arr, size_t len) {
	for (size_t i = 0; i < len; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
}

void add(int &i) {
	i++;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	size_t len = 5;
	printArr(arr, len);
	iter<int>(arr, len, add);
	printArr(arr, len);
}