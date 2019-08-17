void main()
{
char s[100],count=0,i;
clrscr();
printf("Enter any word:");
gets(s);
printf("Number of character in an word:");
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
count++;
}
printf("%d",count);
getch();
}
