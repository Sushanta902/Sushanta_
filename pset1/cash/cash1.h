#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
int a=25, b=10, c=5,  d=1,  count=0,  aa,bb,cc,dd;
float dollor;
do 
{
    dollor=get_float("dollor ");
}
while(dollor < 0);

int cent=round(dollor*100);
do

{
    aa=cent-a;
    count=count+1;
}
while(cent>=a);
do

{
    bb=aa-b;
    count=count+1;
}
while(aa>=b);
do

{
    cc=bb-c;
    count=count+1;
}
while(bb>=c);
do

{
    dd =cc-d;
    count=count+1;
}
while(cent>=d);
printf("the count is %d",count);

}