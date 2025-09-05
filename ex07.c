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
    printf("entrez une fraction :");
    scanf("%d/%d",&a,&b);

    int c = GCD(a,b);
    a = a/c;
    b = b/c;
    printf("Le plus grand commun diviseur est : %d/%d",a,b);
    return 0;
}