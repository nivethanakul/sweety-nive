#include<stdio.h>
#include<conio.h>
void main()
{
char j;
clrscr();
printf("\n enter the letter:");
scanf("%c",&j);
if(j=='a'||j=='e'||j=='i'||j=='o'||j=='u'||j=='A'||j=='E'||j=='I'||j=='O'||j=='U')
printf("\n the letter is vowel");
else
printf("\n the letter is constant");
getch();
}
