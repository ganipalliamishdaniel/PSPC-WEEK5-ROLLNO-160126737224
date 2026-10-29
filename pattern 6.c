				#include<stdio.h>
				int main()
				
				{
				    int n,m,i,j;
				
				    printf("Enter m:");
				    scanf("%d", &m);
				    printf("Enter n:");
				    scanf("%d", &n);
				
				    for(i=1;i<=m;i++)
				    {
				        for(j=1; j<=n; j++)
				        {
				           if(i==1||i==m||j==1||j==n)
				           {
				               printf(" * ");
				           }
				           else
				           {
				               printf("   ");
				           }
				           
				        }
				        printf("\n");
				    }
				    
				}

