#include <stdio.h>
int main(void)
{
int n,a[20],i,k,count=0;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{scanf("%d",&a[i]);}
for(i=1;i<=n;i++)
{
if(a[i]==k)
count++;
}
if(count>0)
printf("yes");
else
printf("no");
return 0;
}
