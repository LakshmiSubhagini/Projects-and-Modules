#include <stdio.h>
#include<string.h>
int main() {
   char a[100];
   scanf("%s",&a);
   int i,v=0,c=0;
   for(i=0;i<strlen(a);i++)
   { 
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
       {
           v=v+1;
       }
       else
       {
           c=c+1;
       }
   }
   printf("%d\n",v);
   printf("%d",c);
   return 0;
}
