Practice makes us perfect


#include <stdio.h>

int main(void) {
int a[4];
int count=0;

	for(int i=0;i<4;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int j=0;j<4;j++)
	{
	    if(a[j]>=10){
	        count++;
	        
	      
	    }
	    
	}
	  printf("%d",count);
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


