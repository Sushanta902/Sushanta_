#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int aa,b, c = 0;
    float money;
do
{
    money = get_float("Dollar: ");
}
while (money<0);

int a = round(money*100);

while(aa>=25){
    aa=a-25;
    c++;
}

while(aa>=10){
    aa=aa-10;
    c++;
}


while(aa>=5){
    aa=aa-5;
    c++;
}

while(aa>=1){
    aa=aa-1;
    c++;
}


printf("Number of coins: %i\n",c);



}