#pragma once
//29
int digitCount(int k) {
	int n = 0;
	while (k > 0) {
		n++;
		k = k / 10;
	}
	return n;
}
//30 решить потом
int digitN(int K, int N) {
	int n = 0,k1;
	while (n == k1) {
		k1 = K % 10;
		K = K / 10;
		n++;
	}
	if (N > n) {
		return -1;
	}
}

