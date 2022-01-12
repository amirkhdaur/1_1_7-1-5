#include "mylib.h"
#include <iostream>

int main() {
	std::setlocale(LC_ALL, "rus");

	const size_t size = 10;
	float arr[size];

	mylib::initArr(arr, size);
	mylib::printArr(arr, size);
	mylib::countPosNeg(arr, size);
}	