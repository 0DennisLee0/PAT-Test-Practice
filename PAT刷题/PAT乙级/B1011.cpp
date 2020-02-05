#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 110;

struct Number {
	long long A, B, C;
}number[maxn];

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 1; i < T + 1; i++) {
		scanf("%lld %lld %lld", &number[i].A, &number[i].B, &number[i].C);
	}
	for (int i = 1; i < T; i++) {
		if (number[i].A + number[i].B > number[i].C)
			printf("Case #%d: true\n", i);
		else
			printf("Case #%d: false\n", i);
	}
	if (number[T].A + number[T].B > number[T].C)
		printf("Case #%d: true", T);
	else
		printf("Case #%d: false", T);
}