#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3]={0,};
int i,j,k,x1,y1,x2,y2;

    printf("Enter 1ST matrix order\n");
scanf("%d%d",&x1,&y1);
printf("Enter 2ND matrix order\n");
scanf("%d%d",&x2,&y2);
if(y1==x2)
{

for(i=0;i<=x1-1;i++)
for(j=0;j<=y1-1;j++)
{
    printf("Enter A%dx%d ",i+1,j+1);
    scanf("%d",&a[i][j]);
}
printf("\n");

for(i=0;i<=x2-1;i++)
    for(j=0;j<=y2-1;j++)
{
    printf("Enter B%dx%d ",i+1,j+1);
    scanf("%d",&b[i][j]);
}


for(i=0;i<=x1-1;i++)
{
    for(j=0;j<=y2-1;j++)
    {
        for(k=0;k<=x2-1;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }

    }
    }
    for(i=0;i<=x1-1;i++)
{for(j=0;j<=y2-1;j++)
{
    printf("%d ",c[i][j]);
}
printf("\n");
}
}
else
    printf("these matrix are not able to multiply\n");
return 0;
}
