#include <stdio.h>

int main (){
    int year1 , year2, month1,month2,day1,day2;
    
        
    printf("Entrez la date 1 :");
    scanf("%d/%d/%d",&day1,&month1,&year1);
    printf("Entrez la date 2 :");
    scanf("%d/%d/%d",&day2,&month2,&year2);
    
    if((year1<year2 )|| (year1==year2 && month1<month2) || (year1==year2 && month1==month2 && day1<day2)){
            printf("%d/%d/%d est plus tôt que %d/%d/%d ",day1,month1,year1,day2,month2,year2);
        }else{
                    printf("%d/%d/%d est plus tôt que %d/%d/%d ",day2,month2,year2,day1,month1,year1);
        }
    
    


    

    return 0;
}