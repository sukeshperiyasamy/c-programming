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

