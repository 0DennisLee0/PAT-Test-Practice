/*
1.ϡ��
2.�߽�����û�и��������ӡ�������ǱȽ��ٵģ�������length
3.�����ü򵥵ķ���������ż����Ҫ�ô�εĺ���
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
	if (length % 2) row = length / 2 + 1;//����������ȡ��
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