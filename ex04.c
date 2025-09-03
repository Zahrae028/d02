#include <stdio.h>

int main (){
    int day[2];
    int month[2];
    int year[2];
    int converted[2];
    for (int i = 0; i < 2; i++)
    {
        
    printf("Entrez la date n %d :",i+1);
    scanf("%d/%d/%d",day[i],month[i],year[i]);
    }
    int earliest;

    for (int i = 0; i < 2; i++)
    {
        converted[i]= (year[i]*365);
    }
    
    


    

    return 0;
}