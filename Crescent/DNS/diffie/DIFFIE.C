#include<stdio.h>
#include<conio.h>
#include<math.h>

long long int pwr(long long int a,long long int b,long long int p){
	return (fmod(pow(a,b),p));
	}
void main(){
	int p,q,a,b,x,y,sa,sb;
	clrscr();

	p=23; q=9;
	a=4; b=3;

	x=pwr(q,a,p);
	y=pwr(q,b,p);
	sa=pwr(y,a,p);
	sb=pwr(x,b,p);
	printf(" x y sa sb\n %d %d %d %d",x, y, sa,d sb);

	getch();
}