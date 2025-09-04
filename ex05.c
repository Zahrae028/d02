#include <stdio.h>

int main(){

    int num;

    do
    {
        printf("Entrez une note numerique : ");
    scanf("%d",&num);

        if (num<0 || num>100)
        {
            printf("la note est superieure a 100 ou inferieure à 0.\n");
        }
        

    } while (num<0 || num>100);
    
    

    int val = num/10;

    

    switch (val)
    {
    case 9:
    case 10:
        printf("Note litterale : A");
        break;

    case 8:
        printf("Note litterale : B");
        break;

    case 7:
        printf("Note litterale : C" );
        break;
    
    case 6:
        printf("Note litterale : D");
        break;
    
    default:
        printf("Note litterale : F");
        break;
    }
    return 0;
}