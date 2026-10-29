			#include<stdio.h>
			int main()
			{
			    int i,j,k,n;
			    printf("enter n:");
			    scanf("%d",&n);
			    for(i=0;i<=n;i++)
			    {
			        for(k=1;k<=n-i;k++)
			        {
			            printf(" ");
			        }
			        for(j=1;j<=2*i+1;j++)
			        {
			            
			            if(j%2!=0)
			            {
			            printf("*");
			            }
			            else
			            {
			            printf("A");
			            }
			        }
			        printf("\n");
			        
			    }
			    return 0;
			}

