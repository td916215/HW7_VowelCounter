#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_CHARS 50

int main()
{
    char msg[MAX_CHARS];

    printf("Enter a string of text: ");
    gets(msg);

    int characterCount;
    characterCount = strlen(msg);
    int countUp;

    int AaCounter = 0;
    int EeCounter = 0;
    int IiCounter = 0;
    int OoCounter = 0;
    int UuCounter = 0;

    for (countUp = 0; countUp <= characterCount; countUp++)
    {
        switch(msg[countUp])
        {
            case 'A':
            case 'a':
                AaCounter++;
                break;
            case 'E':
            case 'e':
                EeCounter++;
                break;
            case 'I':
            case 'i':
                IiCounter++;
                break;
            case 'O':
            case 'o':
                OoCounter++;
                break;
            case 'U':
            case 'u':
                UuCounter++;
                break;
        }
    }

    printf("Aa = %d\nEe = %d\nIi = %d\nOo = %d\nUu = %d\n", AaCounter, EeCounter, IiCounter, OoCounter, UuCounter);

    return 0;
}
