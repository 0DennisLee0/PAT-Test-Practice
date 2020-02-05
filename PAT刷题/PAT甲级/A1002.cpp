#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
const int maxn = 1111;

//用于保存对应指数的大小
double A[maxn];
double B[maxn];
double C[maxn];

int main() {
	memset(A, 0, sizeof(A));
	memset(B, 0, sizeof(B));
	memset(C, 0, sizeof(C));
	int K1;
	scanf("%d", &K1);
	for (int i = 0; i < K1; i++) {
		int N;
		scanf("%d", &N);
		scanf("%lf", &A[N]);
	}
	int K2;
	scanf("%d", &K2);
	for (int i = 0; i < K1; i++) {
		int N;
		scanf("%d", &N);
		scanf("%lf", &B[N]);
	}
	int	K3 = 0;
	for (int i = 0; i < maxn; i++) {
		C[i] = A[i] + B[i];
		if (C[i]) K3++;
	}
	printf("%d", K3);
	int n = maxn;
	while (K3 > 0) {
		if (C[n] != 0) {
			K3--;
			printf(" %d %.lf", n, C[n]);
		}
		n--;
	}
	return 0;
}