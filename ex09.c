#include <stdio.h>


int main(){
    
    char str[50];
    char phone[50];
    
    int count = 0;
    


    
    printf("entrez un numero :");
    scanf("%s", str);

    for (int i = 0;str[i]!= '\0' ;i++){
        char c ;
        
            switch (str[i])
        {

        case 'A':
        case 'B':
        case 'C':
            c='2';
            break;

        case 'D':
        case 'E':
        case 'F':
            c='3';
            break;
        
        case 'G':
        case 'H':
        case 'I':
            c='4';
            break;

        case 'J':
        case 'K':
        case 'L':
            c='5';
            break;

        case 'M':
        case 'N':
        case 'O':
            c='6';
            break;

        case 'P':
        case 'R':
        case 'S':
            c='7';
            break;

        case 'T':
        case 'U':
        case 'V':
            c='8';
            break;

        case 'W':
        case 'X':
        case 'Z':
            c='9';
            break;


        default:
            c=str[i];
            break;
        }
        phone[i] = c;
        count++;
    }
    


    phone[count] = '\0';
        printf("%s",phone);
    
    
    
    
    return 0;
}