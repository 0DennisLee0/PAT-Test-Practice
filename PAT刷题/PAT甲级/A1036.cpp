/*
1.注意碰到有字符的输入时，要使用cin而不是scanf
2.vector<int> b.  b.end()是指的最后一位指针的下一位
  实际用时要写成(b.end()-1)->name
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

struct Student {
	char name[15];
	char gender;
	char ID[15];
	int grades;
};

vector<Student> Male;
vector<Student> Female;

bool cmp(Student a, Student b) {
	return a.grades < b.grades;
}

int main() {
	int k, male_lowest, female_highest;
	Student student;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		cin >> student.name >> student.gender >> student.ID >> student.grades;
		(student.gender == 'M') ? Male.push_back(student) : Female.push_back(student);
	}
	if (Female.size()) {
		sort(Female.begin(), Female.end(), cmp);
		female_highest = (Female.end() - 1)->grades;
		printf("%s %s\n", (Female.end() - 1)->name, (Female.end() - 1)->ID);
	}
	else
		printf("Absent\n");
	if (Male.size()) {
		sort(Male.begin(), Male.end(), cmp);
		male_lowest = Male.begin()->grades;
		printf("%s %s\n", Male.begin()->name, Male.begin()->ID);
	}
	else
		printf("Absent\n");
	if (!Female.size() || !Male.size()) printf("NA");
	else printf("%d", female_highest - male_lowest);
	return 0;
}