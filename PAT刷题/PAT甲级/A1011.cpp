#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

double T[5], W[5], L[5];
double sum[5][5][5];
//用一个极小数对double类型判等
double eps = pow(10, -5);

void judge(double max, int i) {
	if (fabs(max - T[i]) < eps) 
		printf("T ");
	else if (fabs(max - W[i]) < eps)
		printf("W ");
	else printf("L ");
}

int main() {
	scanf("%lf %lf %lf", &T[0], &T[1], &T[2]);
	scanf("%lf %lf %lf", &W[0], &W[1], &W[2]);
	scanf("%lf %lf %lf", &L[0], &L[1], &L[2]);
	int max0, max1, max2;
	max0 = max(T[0], max(W[0], L[0]));
	judge(max0, 0);
	max1 = max(T[1], max(W[1], L[1]));
	judge(max1, 1);
	max2 = max(T[2], max(W[2], L[2]));
	judge(max2, 2);
	int profit = (max0*max1*max2*0.65 - 1) * 2;
	printf("%.2lf", profit);
	return 0;
}