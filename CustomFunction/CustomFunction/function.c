#include <Stdio.h>

int sum(int x, int y);
void main() {
	int x = 3, y = 5, z = 7;
	int result;

	// result = x + y;
	result = sum(x, y);
	// result = result + 7;
	result = sum(result, 7);
	printf("%d + %d + %d = %d\n", x, y, z, result);
}
// ±¸ÇöºÎ
int sum(int x, int y) {
	return x + y;
}