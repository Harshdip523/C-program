#include<stdio.h>
int main() {
    int a ,fact = 1;
    printf("Enter a number: ");  // User se ek number input maanga
    scanf("%d", &a);
    for(int i = 1; i <= a; i++) {
        fact *= i;  // Factorial ka calculation
    }
        printf("%d ", fact); 
        return 0;
        
    }