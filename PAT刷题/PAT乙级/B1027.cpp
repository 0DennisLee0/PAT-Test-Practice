#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
const int max = 100;

vector<int> list;

int main() {
	int n, sum = 1, odd = 1, i = 0;
	char c;
	scanf("%d %c", &n, &c);
	list.push_back(1);
	while (sum < n) {
		//可以上下翻转
		list.push_back(odd);
		odd += 2;
		sum += odd * 2;
	}
	//有多少颗没用,以及最长的边是多少
	int ans, last = *(list.end() - 1);
	if (sum > n) ans = n + last * 2 - sum;
	else ans = 0;
	//迭代器写法
	for (vector<int>::iterator it = list.end() - 1; it != list.begin() - 1; it--) {
		//逐次遍历
		int interval = (last - *it) / 2;
		for (int j = 0; j < *it + interval; j++) {
			if (j < interval)
				printf(" ");
			else printf("%c", c);
		}
		printf("\n");
	}
	int interval = (last - 1);
	for (int i = 0; i <= interval; i++) {
		if (i == interval)
			printf("%c", c);
		else printf(" ");
	}
	printf("\n");
	for (vector<int>::iterator it = list.begin() + 1; it != list.end() - 1; it++) {
		//逐次遍历
		int interval = (last - *it) / 2;
		for (int j = 0; j < *it + interval; j++) {
			if (j < interval)
				printf(" ");
			else printf("%c", c);
		}
		printf("\n");
	}
	printf("%d", ans);
	return 0;
}