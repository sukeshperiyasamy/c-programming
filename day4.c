1st 
Better Deal



#include <stdio.h>

int main(void) {
int n,d1,d2,d3;
int s1,s2;
scanf("%d",&n);
while(n--)
{
scanf("%d %d",&s1,&s2);
d1=100-s1;
d2=200-s2*2;
d3=d2/2;
if(d1<d2)
{
    printf("FIRST\n");
}
else if (d2<d1)
{
    printf("SECOND\n");
}
else
{
   printf("BOTH\n"); 
}

}
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
