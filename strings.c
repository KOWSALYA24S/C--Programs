#include<stdio.h>
#include<string.h>
void main() {
char str[20];
char str2[15];
char str_rev[20];
printf("Enter the string: \n");
gets(str);
strcpy(str2, str);
printf("\nStr value is \t");
puts(str);
printf("\nStr2 value is \t");
puts(str2);
int length = 0;
length = strlen(str);
printf("%d\n",length); 
for(int j=length-1;j>=0;j--)
{
str_rev[length - 1 - j] = str[j];
}
printf("\nReverse string: ");
puts(str_rev);

int count=0;
int wordcount = 0;
for(int i=0;str[i]!='\0';i++)
{
count++;
if(str[i]==' ')
wordcount++;
}
printf("Word count: %d\n",wordcount+1);
printf("%d\n",count); 
}