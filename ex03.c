#include <stdio.h>

int main(){
    int hours[2][8] = {{8 , 9 , 11 , 12 ,14 , 15 , 19 , 21},{10 , 11 , 13, 15 , 16 , 17 , 21 , 23}};
    int minutes[2][8] = {{0 , 43 , 19 , 47 , 0 , 45 , 0 , 45},{16 , 52 , 31 , 0 ,8 , 55, 20, 58}};
    int conv[8] ={};
        
    int tm_h;
    int tm_m;
    int time;
    int smallest =99999;
    int c;
    
    for (int i = 0; i < 8; i++)
    {
        conv[i]=hours[0][i]*60 +minutes[0][i];
    }


 

    printf("Entrez une heure (24h) : ");
    scanf("%d:%d",&tm_h ,&tm_m);
    
    time = (tm_h *60 )+ tm_m;
    for (int i = 0; i < 8; i++)
    {
        int b;
        if (time<conv[i])
        {
            b = conv[i] - time;
        }else{
            b= time - conv[i];
        }
        if (smallest> b)
        {
            smallest = b;
            c=i;
        }
        
        
    }
        
        printf("L'heur de depart la plus proche est %d:%d ",hours[0][c],minutes[0][c]);
        printf("arrivant a : %d:%d ",hours[1][c],minutes[1][c]);
        
 

    return 0;
}