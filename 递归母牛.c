#include <stdio.h>

/*
쳲������������������У�����ÿ������������ǰ�������ֵĺ͡�
�����쳲��� �����п�ʼ�� 1��1��2��3��5��8��13
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