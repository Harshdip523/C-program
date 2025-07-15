#include<stdio.h>
int main(){
    int a ;
    printf("Enter a number: ");  // User se ek number input maanga
    scanf("%d", &a);
    if(a%2 ==0){
        printf("Even");  // Agar number even hai, to "Even" print karo
    }else{
        printf("Odd");
       // Agar number odd hai, to Odd print karo
    }
    return 0;
}