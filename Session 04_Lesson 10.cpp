#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    printf("Nhap so nguyen thu ba: ");
    scanf("%d", &c);

    if (a > b) {
        d = a; 
        a = b;
        b = d; 
    }
    if (b > c) {
        d = b; 
        b = c;
        c = d;
    }
    if (a > b) {
        d = a; 
        a = b;
        b = d;
    }

    printf("Các so theo thu tu tu nho den lon: %d, %d, %d \n", a, b, c);

    return 0;
}

