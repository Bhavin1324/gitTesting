#include<stdio.h>
#include<stdlib.h>
void swwapp(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    //taking user input
    printf("Enter First number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    //Invoke swapp function
    swwapp(&a,&b);
    printf("Swapped value : a = %d and b = %d",a,b);
    return 0;
}