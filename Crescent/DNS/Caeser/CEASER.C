#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
int i;
char ch,s[100];


clrscr();

printf("enter a string");

fgets(s,sizeof(s),stdin);
s[strcspn(s,"\n")]='\0';
printf("%s\n",s);

for(i=0;i<strlen(s);i++){
	if(s[i]!=' ')
	s[i]=((s[i]+1-'a')%26)+'a';
}
printf("%s",s);
getch();

}