#include <stdio.h>

int main()
{
	// 세개의 수를 입력받아 합 결과를 출력
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", a + b + c);

	return 0;
}