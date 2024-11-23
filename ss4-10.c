#include <stdio.h>

int main() {
    int a, b, c;
	printf("Canh a : ");
	scanf("%d", &a); 
	printf("Canh b : ");
	scanf("%d", &b); 
	printf("Canh c : ");
	scanf("%d", &c);

    if (a > b) {
        int total = a;
        a = b;
        b = total;
    }
    if (b > c) {
        int total = b;
        b = c;
        c = total;
    }
    if (a > b) {
        int total = a;
        a = b;
        b = total;
    }

    printf("Cac so theo thu tu tu nho den lon: %d %d %d\n", a, b, c);

    return 0;
}
