/*
1.没有注重细节，等式和原来的对不上
2.善于利用合理的改错方式，比如这道题用“123456789”进行检验
3.一定要进行多步验证，至少有4歩
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

int main() {
	char sentence[100];
	scanf("%s", &sentence);
	int len = strlen(sentence);
	int n1 = 1;
	//细节错误。没有+2
	int n2 = len - n1 * 2 + 2;
	//局部贪心
	while (n2 > n1) {
		n1++;
		//细节错误。没有+2
		n2 = len - n1 * 2 + 2;
	}
	if (n2 != n1) {
		n1--;
		//细节错误。没有+2
		n2 = len - n1 * 2 + 2;
	}
	//检验行数对不对，用相应的数字序列检验
	for (int i = 0; i < n1 - 1; i++) {
		printf("%c", sentence[i]);
		for (int j = 1; j < n2 - 1; j++)
			printf(" ");
		printf("%c\n", sentence[len - 1 - i]);
	}
	for (int j = n1 - 1; j < n1 + n2 - 1; j++)
		printf("%c", sentence[j]);
	return 0;
}