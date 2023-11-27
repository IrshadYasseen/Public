#include<stdio.h>
#include<conio.h>
void main(){

int q,a1,a2,a3,b1,b2,b3,t1,t2,t3;

clrscr();
printf("enter 2 nos\n");
scanf("%d %d",&a3,&b3);

a1=1;a2=0;b1=0;b2=1;
while (b3!=0 && b3!=1){
      q=a3/b3;

      t1=a1-(q*b1);
      t2=a2-(q*b2);
      t3=a3-(q*b3);

      a1=b1; a2=b2; a3=b3;
      b1=t1; b2=t2; b3=t3;

      printf("a1 a2 a3 b1 b2 b3\n");
      printf("%d %d %d %d %d %d \n",a1, a2, a3, b1, b2, b3);
}
if(b3==0)
printf("gcd=%d",a3);
else
printf("gcd=%d  mi=%d",b3,b2);
getch();
}