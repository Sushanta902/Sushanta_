#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)

    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int check = 0;
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {

        if (!isdigit(argv[1][i]))
        {
            check++;
        }
        if (check > 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }


    char a, b;
    string ptext;
    int key;




    key = atoi(argv[1]);

    ptext = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0, len = strlen(ptext); i < len; i++)
    {
        a = ptext[i];
        b = 'A';
        if (isalpha(ptext[i]))
        {
            if (islower(ptext[i]))
            {
                b = 'a';
            }
            printf("%c", (a - b + key) % 26 + b);

        }
        else

        {
            printf("%c", a);
        }





    }



    printf("\n");




}














