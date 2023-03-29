1 st
High Accuracy

#include <stdio.h>
int main(void) {
int n,a,b;

scanf("%d",&n);

for(int i=0;i<n;i++)
{
    scanf("%d",&a);
     b=a%3;
     if(b==1)
     {
         
          printf("2\n");
     }
     else if(b==2)
     {
          printf("1\n");
     }
     else
    {
        printf("0\n");
    }
  

}
  return 0;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
2nd
Air Conditioner Temperature



#include <stdio.h>

int main(void) {
    int n;
    int a,b,c,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if ( a<=b && b>=c)
        {
        printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
		return 0;
}




