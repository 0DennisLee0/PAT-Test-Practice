/*
1.û��ע��ϸ�ڣ���ʽ��ԭ���ĶԲ���
2.�������ú���ĸĴ�ʽ������������á�123456789�����м���
3.һ��Ҫ���жಽ��֤��������4�i
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
	//ϸ�ڴ���û��+2
	int n2 = len - n1 * 2 + 2;
	//�ֲ�̰��
	while (n2 > n1) {
		n1++;
		//ϸ�ڴ���û��+2
		n2 = len - n1 * 2 + 2;
	}
	if (n2 != n1) {
		n1--;
		//ϸ�ڴ���û��+2
		n2 = len - n1 * 2 + 2;
	}
	//���������Բ��ԣ�����Ӧ���������м���
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