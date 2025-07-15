#include<stdio.h>
int main(){
    int a, b, temp;  // Do integers a aur b banaye
    printf("Enter two numbers: ");  
    // User se do numbers input maange
    scanf("%d %d", &a, &b);
    tem = a ; 
    a = b; 
    b = temp ;
    printf("After swapping: a = %d, b = %d", a, b);  // Swapped values ko print kiya

}