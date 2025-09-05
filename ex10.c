#include <stdio.h>


int main(){
    char str[50];
    int score = 0;

    printf("entrez un numero :");
    scanf("%s", str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        switch (str[i])
        {
        case 'A': case 'E': case 'I': case 'L': case'N': case 'O' : case 'R' : case 'S' : case 'T' : case 'U':case 'a': case 'e': case 'i': case 'l': case 'n': case 'o': case 'r': case 's': case 't': case 'u':
                score = score + 1;
            break;

        case 'D' : case 'G' : case 'd': case 'g':
                score = score +2;
            break;

        case 'B' : case 'C' : case 'M' : case 'P' :case 'b': case 'c': case 'm': case 'p':
                score = score +3;
            break;

        case 'F' : case 'H' : case 'V' : case 'W' : case 'Y':case 'f': case 'h': case 'v': case 'w': case 'y':
                score = score +4;
            break;
        
        case 'k' : case 'K' :
                score = score +5;
            break;

        case 'J' : case 'X' : case 'j': case 'x':
                score = score +8;
            break;

        case 'Q' : case 'Z' : case 'q': case 'z':
                score = score +10;
            break;

        default:
            break;
        }
    }
    printf("Valeur Scrabble : %d",score);

    return 0;
}