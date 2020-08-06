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

 for(int i=0; i<height;i++)
 {
  for(int j=height; j>0;j++)
  {
      if(j<height-i){
   printf("");}
   else {printf("#");}
  }

printf("\n");
 }

}
