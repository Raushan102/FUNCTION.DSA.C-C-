#include <stdio.h>
#include <conio.h>
int main()
{
int star[10];

for(int i=0;i<10;i++){
  //
  scanf("%d",&star[i]);

}


for(int i=0;i<10;i++){


  printf("%d index %d value\n",i,star[i]);


  if(i==9){
    printf("%d" , star[9]);


  }
}
  return 0;
}
