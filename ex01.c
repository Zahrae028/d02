#include <stdio.h>

int lenghtof(int a)
{
    int n = 0;
    if (a==0)
    {
        n=1;
    }
    else {
    while (a!=0)
    {
        n++;
        a = a/10;
    }
    }
    return n;
}


int main(){
    int GSL; int IG; int ED; int NA; int CC;
    int s=0;

    
    do
    {
        printf("Entrez l'ISEN :");
    scanf("%d %d %d %d %d",&GSL,&IG,&ED,&NA,&CC);
    
    if (GSL!=978 || GSL!=979)
    {
        printf("WRONG GSL !!!\n");
    }
    s = lenghtof(GSL)+ lenghtof(IG) + lenghtof(ED)+ lenghtof(NA) + lenghtof(CC);
    if (s!=13)
    {
        printf("MAKE SURE YOU ENTERED 13 NUMBERS!!");
    }
    
        
    } while ((GSL!=978 && GSL!= 979) || s!=13);
    printf("%d",s);
    printf("Prefix GSL : %d \n",GSL);
    printf("Identifiant de groupe : %d \n",IG);
    printf("Code de l'editeur : %d \n",ED);
    printf("Numero d'article : %d \n",NA);
    printf("Chiffre de controle : %d \n",CC);
    

        
        
    
    return 0;
}