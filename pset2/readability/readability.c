#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{


    float c = 1, n, d = 0, e = 0 ;
    int i;
//getting the string



    string para = get_string("text:");


    for (i = 0, n = strlen(para); i < n; i++)
    {
        if (para[i] == ' ')
        {
            c++;
        }
        if (para[i] == '?')
        {
            d++;
        }
        if (para[i] == '.')
        {
            d++;
              
        }
        if (para[i] == '!')
        {
            d++;
        }
        if (isalpha(para[i]) == 1024)
        {
            e++;
        }
    }
    // per 100 converting

    float  L = e / c * 100;
    float  S = d / c * 100;
    float test = 9 / 4;
    //formula

    int  index = round(0.0588 *  L - 0.296 * S - 15.8);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }


  
}
