// Reach on Time


#include <stdio.h>

int main(void) {
int n,a;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a);
    if(a>=30)
    {
        printf("YES\n");
        
    }
    else{
        printf("NO\n");
    }
}
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Who is taller!
#include <stdio.h>

int main(void) {
int n,a,b;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d %d",&a,&b);
    
    if(a>b){
        printf("A\n");
    }
        else{
            printf("B\n");
        }
        
    }

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Reach the Target



#include <stdio.h>

int main(void) {
int n,a,b;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d %d",&a,&b);
    printf("%d\n",a-b);
    
}
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Tour of King

#include <stdio.h>

int main(void) {
int n,a,b;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d %d",&a,&b);
   
    printf("%d\n",a*5+b*7);
}

	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
My very 1st contest!



#include <stdio.h>

int main(void) {
	int a,b,c,d,e;
	scanf("%d %d %d",&a,&b,&c);
	d=a-b;
	e=d-c;
	printf("%d %d",d,e);
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Best of Two



#include<stdio.h>

int main() {
int n,a,b;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d %d",&a,&b);

    if(a>b){
        printf("%d\n",a);
        
    }
    else
    {
        printf("%d\n",b);
    }
}
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



