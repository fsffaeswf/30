#pragma once
bool isprime(int n) {
	int i = 2, k = 0;
	while (n / 2 >= i) {
		if (n % i == 0) {
			k++;
		}
		i++;
	}
	bool m = k == 0;
	return m;
}
int digitN(int K, int N) {
	int n = 0, k1{};
	while (K>0) {
		k1 = K % 10;
		K = K / 10;
		n++;
		if (N == n) {
			return k1;
		}
	}
		return -1;
	
	
	}
	