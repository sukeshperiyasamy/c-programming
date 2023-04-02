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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i;++j)                        //////// (j<n-1)
    
    {
  printf("*");
}
 printf("\n");
}

    return 0;
}

output
8
********
*******
******
*****
****
***
**
*

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;++j)               //////
    {
  printf("%d",i+1);                   /////// printf("%d",i+1);  
}
 printf("\n");
}

    return 0;
}


output
5
11111
22222
33333
44444
55555

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
5th
#include <stdio.h>

int main() {
    int n,i,o,space;
    scanf("%d",&n);
    for(o=0;o<n;o++)
    { 
        for(space=0;space<n-o-1;space++)
            
                printf("  ");
            
        for(i=0;i<2*o+1;i++)
        
            printf("* ");
             printf("\n");
    }
    return 0;
}


output
5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
    6th 
    #include <stdio.h>

int main() {
    int n,i,o,space;
    scanf("%d",&n);
    for(o=0;o<n;o++)
    { 
        for(space=0;space<n+o;space++)
            {
                if(space<n-o-1)
                {
                     printf("  ");
                }
            
            else{
                printf("* ");
            }
            }
            
             printf("\n");
    }
    return 0;
}

output
7
            * 
          * * * 
        * * * * * 
      * * * * * * * 
    * * * * * * * * * 
  * * * * * * * * * * * 
* * * * * * * * * * * * * 
