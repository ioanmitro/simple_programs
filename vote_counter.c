#include<stdio.h>


int main(int argc,char *argv[])
{
	
	int candidates_number;
	int counter,i,m,j,max_votes,pos;
	counter=0;
    unsigned  int votes;
	int bit_num=(8*(sizeof(short int)));
	
	do
	{
		//o xrhsths eisagei enan mhnyma ektypwshs ari8mou  ypo4hfiwn kai diabazei enan ari8mo
		printf("Enter number of candidates: ");
		scanf("%d",&candidates_number);
	}while(candidates_number<0);
	
	if((candidates_number>0)&&(candidates_number<=16))
	{
	
		for(i=0;i<candidates_number;i++)
		{	
			printf("Enter votes for candidate %d: ",i);
			scanf(" %X",&votes);
			
			//sto shmeio ayto 3ekianei h metatroph tou ari8mou apo dekae3adiko se dyadiko kai me bash to plh8os twn asswn upologizei o metrhths ton ari8mo twn 4hfwn
			counter=0;			
			for(m=bit_num;m>=0;m--)
			{
				if(j&1)//edw ginetai logikh pros8esh kai me bash to plh8os twn asswn pou prokyptoun o counter lambanei thn timh aytwn katametrwntas panta
				{	
					counter++;
				}
				if(i==0)
				{
					max_votes=counter+1;
					pos=0;
				}
				if(counter>max_votes)
				{
					max_votes=counter;
					pos=i;
				}	
				j=votes>>m;	
			}
		
			printf(" %d votes\n",max_votes);
		}	
			
		printf("The winner is candidate %d with %d votes\n",pos,max_votes);//telos ektypwnei ton ari8mo toy ypo4hfiou pou exei perissoterous 4hfous ka8ws kai to plh8os aytwn

	}
	
	return(0);
}	
	