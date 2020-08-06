#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int height;
do{do{
do
{
 height= get_int("enter height ");

}
while ( height>8 );}
while(height<0 );}
while(height==0);



 for (int i=0; i<height; i++)
    {
       for(int j=height-1;j>i;j--){
           printf(" ");
       }
       for(int k=0; k<=i;k++)
       {
           printf("#");
       }
      printf("  ");
      for(int l=0;l<height;l++)
      {
       for(int m=0;m<=l;m++)
       {
        printf("#");
       }
      }
printf("\n");
}
}
