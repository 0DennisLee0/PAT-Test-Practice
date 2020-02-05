#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

struct Person {
	char name[10];
	//pair可以直接比较，先从first开始比，一直到最后
	pair<int, pair<int, int>> birth;
};

vector<Person> person;

bool cmp(Person a, Person b) {
	return a.birth < b.birth;
}

int main() {
	int num;
	scanf("%d", &num);
	Person per;
	pair<int, pair<int, int>> today = make_pair(2014, make_pair(9, 6));
	pair<int, pair<int, int>> eldest = make_pair(1814, make_pair(9, 6));
	for (int i = 0; i < num; i++) {
		scanf("%s %d/%d/%d", per.name, &per.birth.first, &per.birth.second.first, &per.birth.second.second);
		if (per.birth <= today && per.birth >= eldest) {
			person.push_back(per);
		}
	}
	int len = person.size();
	sort(person.begin(), person.end(), cmp);
	printf("%d %s %s", len, person[0].name, person[len - 1].name);
	return 0;
}