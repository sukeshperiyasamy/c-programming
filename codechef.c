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



