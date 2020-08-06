

# include <stdio.h>
# include <cs50.h>
# include <math.h>
int main(void)
{
    int changeOwed;
    float check;
    int count = 0;


    do
    {
        do
        {
            check = get_float("Dollar: ");
        }
        while (check == 0 || check < 0);

    }

    while (check < 0);

    changeOwed = round(check * 100);

    int c = changeOwed;
    while (c > 0)
    {


        while (c >= 25)
        {
            count ++;

            c = c - 25;
        }

        while (c >= 10)
        {
            count ++;

            c = c - 10;
        }

        while (c >= 5)
        {
            count ++;

            c = c - 5;
        }

        while (c >= 1)
        {
            count ++;

            c = c - 1;
        }

    }

    printf("Number of coins used= %d\n\n", count);


}

