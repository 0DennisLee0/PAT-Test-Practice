/*
1.合理运用两次排序函数来改变序列的位置
2.注意两次排序的依据不同
3.注意通过pair<int,pai<int,int>>来表示时间，可以依据pair本身的大小比较的优势
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

struct Member {
	char ID[20];
	pair<int, pair<int, int>> in;
	pair<int, pair<int, int>> out;
}member[10010];

bool cmp1(Member a, Member b) {
	return a.in < b.in;
}

bool cmp2(Member a, Member b) {
	return a.out > b.out;
}

int main() {
	int k;
	pair<int, pair<int, int>> time;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%s", &member[i].ID);
		scanf("%d:%d:%d", &time.first, &time.second.first, &time.second.second);
		member[i].in = time;
		scanf("%d:%d:%d", &time.first, &time.second.first, &time.second.second);
		member[i].out = time;
	}
	sort(member, member + k, cmp1);
	printf("%s ", member[0]);
	sort(member, member + k, cmp2);
	printf("%s", member[0]);
	return 0;
}