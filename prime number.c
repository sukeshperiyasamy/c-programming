#include <stdio.h>

int main()
{
    
    int i,flag=0,n;
    scanf("%d",&n);
    
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
           flag++;
        }
    }
   if(flag==0)
      {
            printf(" prime");
      }
        
      else{
          printf("not a  prime");
      }

    return 0;
}

output


10
not a  prime
