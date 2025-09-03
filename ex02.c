#include <stdio.h>
int main(){
    int num;
    do
    {

    printf("Insert a number with two digits :");
    scanf("%d",&num);
    int n = num ;
    int digit;
    int reversed = 0;
    if (num >9 && num<100)
    {
        
    
    
    while (n!=0)
    {
        digit = n%10;
        reversed = reversed *10 + digit;
        n = n/10;

    }
    printf("the reversed number is : %d",reversed);
    }
    else{
        printf("!!!!PLEASE ONLY INSERT A NUMBER COMPOSED OF TWO DIGITS!!!!");
    }
    } while (num<10 ||num > 99);
    return 0;
}