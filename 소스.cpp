#pragma warning(disable:4996)
#include <stdio.h>
int n;
int zero(int x) {
	return !x;
}
int plus(int x) {
	if (x > 0) {
		return x;
	}
	else {
		return 0;
	}
}
int main() {
	scanf("%d", &n);
	if (zero(n)) printf("zero");
	else printf("%s", plus(n) ? "plus" : "minus");
	return 0;
}