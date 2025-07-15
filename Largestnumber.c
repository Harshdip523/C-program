#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");  // User se do numbers input liya
    scanf("%d %d", &a, &b);         // Do numbers ko input ke through store kiya

    if (a > b) {
        printf("The largest number is %d\n", a);  // Agar a bada hai, to usse print karo
    } else {
        printf("The largest number is %d\n", b);  // Agar b bada hai, to usse print karo
    }

    return 0;  // Program ka end (successful termination)
}
