#include <stdio.h>

int main(void)
{
	int math = 90;
	int korean = 90;

	int science;
	science = 90;
	int total = math + korean + science;

	printf("수학: %d/n", math);
	printf("국어: %d/n", korean);
	printf("과학: %d/n", science);
	printf("총점: %d/n", total);

	return 0;
}