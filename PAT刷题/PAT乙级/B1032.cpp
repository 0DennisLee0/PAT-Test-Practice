/*
1.��Ȼ�ǲ���ɢ�е�˼�룬��������������Ŷ�Ӧ
2.��ͨ���������α�����ֽ�����������ı���
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

//score��Ҫ��¼�����ܷ�
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