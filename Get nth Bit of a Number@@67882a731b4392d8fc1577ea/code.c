#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num, bit;
    scanf("%d %d", &num, &bit);
    printf("%d", (num>>bit)&1);
    return 0;
}