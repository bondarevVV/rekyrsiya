#include <iostream>

using namespace std;

int max(int* arr, size_t size) {
	if (size == 1)
		return *arr;
	const size_t count = size / 2;
	return max(max(arr, count), max(arr + count, size - count));
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	const size_t n = 5;
	int arr[n];
	srand((unsigned)time(nullptr));

	for (int& item : arr) {
		item = rand() % 50;
		cout << item << ' ';
	}

	cout << '\n' << "Макс. элемент массива: " << max(arr, n) << '\n';
	return 0;
}