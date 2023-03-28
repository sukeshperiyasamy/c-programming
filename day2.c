1st
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
2nd



#include <stdio.h>

int main(void) {
    int time,n;
    scanf("%d",&time);
    for(int i=0;i<time;i++)
    {
        int sum=0;
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
       
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=1000)
            sum+=1;
        }
        printf("%d\n",sum);
    }
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
3rd

