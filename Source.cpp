#include <iostream>
#include "Header.h"
#include <ctime>
using namespace std;
int main() {
	const int N = 5;
	int arr[N], k = 0, ar[N];
	srand(time(nullptr));
	for (int i = 0; i < 5; i++) {
		arr[i] = rand() % 100000;
		ar[i] = rand() % 10;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
	cout << ar[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << digitN(arr[i],ar[i]) << ' ';
	}

}
