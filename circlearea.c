#include <stdio.h>  // Input aur Output ke liye header file 

int main() {
    float radius, area;           // Radius aur area ke liye variables banaye
    float pi = 3.14159;           // Pi ka value define kiya (approximate)

    printf("Enter the radius of the circle: ");  // User se radius input maanga
    scanf("%f", &radius);                        // Radius ka value user se liya

    area = pi * radius * radius;  // Area = pi * r * r 
    printf("Area of the circle = %.2f\n", area);  // Area ko 2 decimal tak print kiya

    return 0;  
}
