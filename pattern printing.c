#include <stdio.h>

int main() {
    int n,out,in;
    scanf("%d",&n);
    for(out=1;out<=n;++out)
    {
        for(in=1;in<=out;++in)
        {
            printf("*");
        }
          printf("\n");
    }
  

    return 0;
}
output
5
*
**
***
****
*****
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;++j)  /////(j<n)
    {
  printf("*");
}
 printf("\n");
}
    return 0;
}

output
5
*****
*****
*****
*****
*****
