#include <stdio.h>
#include <math.h>


int main(){
    int num;
    int s[100];
    int a =0;


    printf("entrez un nombre :");
    scanf("%d",&num);
    int n =sqrt(num);

        for (int i = 1 ; i <= n; i++)
        {

            int c = i*i;
            if (c%2==0)
            {
                s[a]=c;
                a++;
            }
            
            
        }
        for (int j = 0; j < a; j++)
        {
            printf("%d \n",s[j]);
        }
        
        
    
    
    

    return 0;
}