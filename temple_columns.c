#include<stdio.h>

int main(int argc,char *argv[])
{
	int const MIN=2;
	int const MAX=8;
	int i,j,m,epilogi=1;
	int kiones,last_pos1=0,last_pos2=0,last_pos3=0,last_pos4=0,last_pos5=0,last_pos6=0;
	// ta == thss skephss einai kiones * 8 ara ta spaces anamesa einai me mathhmatiko typo
	
	
	printf("Enter the number of kiones:");
	do
	{
		scanf("%d",&kiones);
	}
	while(kiones%2==1 || kiones<MIN || kiones>MAX);
	
	for(i=1;i<=(2*kiones);i++)
    {
		if(epilogi==1)
		{       
          if(last_pos5==0)
          last_pos1=kiones*8/2-2; //kratw thn 8esh gia to epomeno
 
          else
          last_pos1=last_pos5-1;
         //printf("last_pos1=%d",last_pos1);
          for(j=1;j<=last_pos1;j++)
                 putchar(' ');
                 if(i!=1)
                 {printf("  ");
					printf("''");
                   for(j=last_pos1+2;j<=last_pos6-1;j++)
                            putchar(' ');
                            printf("''");
                            last_pos2=j+2;
                 } 
                 else
				 {printf("  ");
					 last_pos2=last_pos1+5;
                     printf("''''");
                 }
		}
        else if(epilogi==2)
        {printf("  ");
          last_pos3=last_pos1-1;
          for(j=1;j<=last_pos1-2;j++)
					putchar(' ');
					printf("--");
					for(j=last_pos1+1;j<=last_pos2;j++)
                        putchar(' ');
                        printf("--");
                        last_pos4=last_pos2+3; 
		}
        else if(epilogi==3)
		{printf("  ");
         last_pos5=last_pos3-6;
         for(j=1;j<=last_pos3-3;j++)
                   putchar(' ');
		           printf("..");
                   for(j=last_pos3+2;j<=last_pos4+1;j++)
                        putchar(' ');
                        printf("..");
                        last_pos6=last_pos4+3;
         }
         else if(epilogi==4)
		 {
			 printf("  ");
           for(j=1;j<=last_pos5+1;j++)
           putchar(' ');
		   printf("__");
		   for(j=last_pos5+3;j<=last_pos6-3;j++)
				putchar(' ');
				printf("__");
				epilogi=0;
		 } 
				epilogi++;
				printf("\n");
	}		
	printf("\n");
	printf("  ");  
	for(i=0;i<1;i++)
	{
		for(j=0;j<kiones*8;j++)
		{
			printf("=");
		}
	}	
	printf("\n");
	printf("  ");
	for(i=0;i<kiones;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[]");
		}	
	}
	printf("\n");
	printf(" ");
	for(i=0;i<kiones;i++)
	{
		printf(" ");
		for(j=0;j<1;j++)
		{
			printf(" @.==.@");
		}   
	}
	printf("\n");
	for(i=0;i<8;i++)
	{
		for(j=0;j<kiones;j++)
		{
			if(i!=7)	 
				
				printf("    |''|"); 
			if(i==7)
			  {
				  if(j==0)
				  {  
						 printf("    |''|");
				  }	
				  else
				  {
				  for(m=0;m<4;m++)
			      {
						printf("_");
			      }
				  printf("|''|");
				  }
		      }
		}
	    printf("\n");
	}	 
    printf("    ");
	for(i=0;i<1;i++)
	{
	   for(j=0;j<(kiones*7)+(kiones-4);j++)
		{
			printf("=");
		}	
			
	}	
	printf("\n");
	printf("   ");
	for(i=0;i<1;i++)
	{
		for(j=0;j<(kiones*7)+(kiones-2);j++)
		{
				printf("=");
		}
			
			
	}
	 printf("\n");
     printf("  ");
	 for(i=0;i<1;i++)
	 {
		for(j=0;j<kiones*8;j++)
		{
			printf("=");
		}
	}
	return(0);
}	
	
			