#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

struct Poly {
	int exp;
	double cof;
}poly[1010];

Poly ans[2001];

int main() {
	int m, n, count = 0;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %lf", &poly[i].exp, &poly[i].cof);
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int exp;
		double cof;
		scanf("%d %lf", &exp, &cof);
		for (int i = 0; i < m; i++) {
			ans[exp + poly[i].exp].cof += (poly[i].cof * cof);
		}
	}
	for (int i = 0; i < 2001; i++) {
		if (ans[i].cof != 0) count++;
	}
	printf("%d", count);
	for (int i = 2000; i >= 0; i--) {
		if (ans[i].cof != 0.0) 
			printf(" %d %.1f", ans[i].exp, ans[i].cof);
	}
	return 0;
}