#pragma once
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
	
