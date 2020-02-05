/*
1.依然是采用散列的思想，将编码与数组序号对应
2.再通过找最大的游标和数字进行整个数组的遍历
*/
#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
const int maxn = 100001;

//score需要记录的是总分
int scores[maxn];

int main() {
	memset(scores, 0, sizeof(scores));
	int num, number, score;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &number, &score);
		scores[number] += score;
	}
	int max_ = 0;
	int point = 0;
	for (int i = 0; i < 100001; i++) {
		if (scores[i] > max_) {
			max_ = scores[i];
			point = i;
		}
	}
	printf("%d %d", point, max_);
	return 0;
}