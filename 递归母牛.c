#include <stdio.h>

/*
斐波那契序列是数字序列，其中每个连续数字是前两个数字的和。
经典的斐波那 契序列开始于 1，1，2，3，5，8，13
*/
long long int re(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	if (n == 3)
		return 3;
	if (n == 4)
		return 4;
	if (n > 4) {
		return re(n - 1) + re(n - 3);
	}
}

int main() {
	int n;
	long long sum = 0;
	while (scanf("%d", &n) != EOF && n != 0) {
		sum = re(n);
		printf("%lld\n", sum);
	}

	return 0;
}