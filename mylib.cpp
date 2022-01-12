#include <iostream>
using namespace std;
namespace mylib {
	void initArr(float* arr, const size_t size) {
		for (int i = 0; i < size; i++) {
			arr[i] = (rand() % 10000) / 100.0f;
		}
	}
	void printArr(const float* arr, const size_t size) {
		for (int i = 0; i < size; i++) {
			std::cout << arr[i] << " ";
		}
		cout << endl;
	}
	void countPosNeg(const float* arr, const size_t size) {
		size_t pos, neg, zero;
		pos = neg = zero = 0;
		for (int i = 0; i < size; i++) {
			if (arr[i] == 0) {
				zero++;
			}
			else if (arr[i] < 0) {
				neg++;
			}
			else {
				pos++;
			}
		}
		cout << "Положительных: " << pos << endl;
		cout << "Отрицательных: " << neg << endl;
		cout << "Нули: " << zero << endl;
	}
}