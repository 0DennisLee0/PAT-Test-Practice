#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int hash_A[10] = { 0 };
int hash_B[10] = { 0 };

int main() {
	char A[20], B[20];
	int Da, Db, Pa = 0, Pb = 0;
	scanf("%s %d %s %d", &A, &Da, &B, &Db);
	int lenA = strlen(A);
	int lenB = strlen(B);
	for (int i = 0; i < lenA; i++) {
		int temp = (int)(A[i] - '0');
		hash_A[temp]++;
	}
	for (int i = 0; i < lenB; i++) {
		int temp = (int)(B[i] - '0');
		hash_B[temp]++;
	}
	while (hash_A[Da] > 0) {
		Pa = Pa * 10 + Da;
		hash_A[Da]--;
	}
	while (hash_B[Db] > 0) {
		Pb = Pb * 10 + Db;
		hash_B[Db]--;
	}
	printf("%d\n", Pa + Pb);
}