#include<stdio.h>
void main(){
  int s1,s2,s3;
  printf("enter sides of traingle:"):
    scanf("%d%d%d",&s1,&s2,&s3);
  if((s1+s2+s3) == 180)
  {
    printf("this is traingle:");
}
else{
  printf("this is not traingle");
}
getch();
}
