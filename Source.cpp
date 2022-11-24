#include <iostream>
#include "Header.h"
#include <ctime>
using namespace std;
int main() {
	const int N = 5;
	int arr[N], k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 1000;
		cout << arr[i] << ' ';
	}
	cout << endl;
	/*29
	for (int i = 0; i < 10; i++) {
		cout << i << ":" << digitCount(arr[i]) << ' ';
	}*/
}
