#include<stdio.h>
#include<math.h>

int enc(int pt,int e,int n){
	int ct=fmod(pow(pt,e),n);
	printf("pt e n\n%d %d %d",pt,e,n);
	return ct;
}

int dec(int ct,int d,int n){
	int pt=fmod(pow(ct,d),n);
	printf("ct d n\n%d %d %d \n",ct,d,n);
	return pt;
}

void main(){

int n,m,p,q,e,d,pt,ct;

p=3;  e=3;
q=5; d=3;

n=p*q;  m=(p-1)*(q-1);

printf("enter plaintxt:\n");
scanf("%d",&pt);

printf("pt e n\n%d %d %d \n",pt,e,n);

ct=enc(pt,e,n);
printf("ct %d \n",enc(pt,e,n));
printf("pt %d",dec(ct,d,n));


}