#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int p;

	if (a == b && b == c) {
		p = 10000 + a * 1000;
	}
	else if (a == b) {
		p = 1000 + a * 100;
	}
	else if (b == c) {
		p = 1000 + b * 100;
	}
	else if (c == a) {
		p = 1000 + c * 100;
	}
	else {
		int m = a;
		if (b > m) m = b;
		if (c > m) m = c;

		p = m * 100;
	}

	printf("%d\n", p);
	return 0;
}
