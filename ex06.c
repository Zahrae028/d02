#include <stdio.h>

    int GCD(int m , int n){
        while (n!=0)
        {
            int rest = m%n;
            m = n;
            n = rest;
        }
        return m;
    }


int main(){
    int a , b ;
    printf("entrez deux entiers :");
    scanf("%d %d",&a,&b);

    int c = GCD(a,b);
    printf("Le plus grand commun diviseur est : %d",c);
    return 0;
}