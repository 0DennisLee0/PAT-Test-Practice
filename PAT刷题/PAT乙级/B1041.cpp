#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

struct Student {
	int exam;
	string number;
}student[1001];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		string number;
		int exam, test;
		cin >> number >> test >> exam;
		student[test].exam = exam;
		student[test].number = number;
	}
	int m, test;
	scanf("%d", &m);
	for (int j = 0; j < m-1; j++) {
		scanf("%d", &test);
		cout << student[test].number << student[test].exam << endl;
	}
	scanf("%d", &test);
	cout << student[test].number << student[test].exam;
	return 0;
}