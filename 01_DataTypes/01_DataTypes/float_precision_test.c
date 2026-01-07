#include <stdio.h>

int main() {
	double a = 0.1 + 0.2;
	if (a == 0.3)
		printf("같음\n");
	else
		printf("다름 (결과값: %.20f)\n", a);
	return 0;
}