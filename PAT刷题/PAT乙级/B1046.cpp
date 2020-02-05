#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int num;
	int a = 0, b = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int a1, a2, b1, b2;
		scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
		if (a1 == a2 + b2 && b1 != a2 + b2)
			b++;
		else if (a1 != a2 + b2 && b1 == a2 + b2)
			a++;
	}
	printf("%d %d\n", a, b);
	return 0;
}