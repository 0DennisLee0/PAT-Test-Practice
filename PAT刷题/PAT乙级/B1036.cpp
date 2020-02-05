/*
1.稀烂
2.边界条件没有搞清楚，打印的行数是比较少的，而不是length
3.尽量用简单的方法处理奇偶，不要用大段的函数
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
	int length, row;
	char ch;
	scanf("%d %c", &length, &ch);
	if (length % 2) row = length / 2 + 1;//这里是向上取整
	else row = length / 2;
	//first line
	for (int i = 0; i < length; i++)
		printf("%c", ch);
	printf("\n");
	//middle lines
	for (int i = 1; i < row - 1; i++) {
		for (int j = 0; j < length; j++) {
			if (j == 0)
				printf("%c", ch);
			else if (j == length - 1)
				printf("%c\n", ch);
			else printf(" ");
		}
	}
	//last line
	for (int i = 0; i < length; i++)
		printf("%c", ch);
	return 0;
}