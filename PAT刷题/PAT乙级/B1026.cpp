#include <cstdio>
#include <cstring>
#include <time.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int c1, c2;
	scanf("%d %d", &c1, &c2);
	int sec = round((c1 - c2) / 100);
	int ss = sec % 60;
	int min = sec / 60;
	int mm = min % 60;
	int hh = min / 60;
	printf("%2d:%2d:%2d\n", hh, mm, ss);
	return 0;
}