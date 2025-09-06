#include <stdio.h>

int main() {
    int a, b, sum, product;
    
    printf("Hello World\n");
    printf("Write first digit: ");
    scanf("%d", &a);
    printf("Write second digit: ");
    scanf("%d", &b);
    
    sum = a + b;
    product = a * b;
    
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    
    return 0;
}