/*
Q. Write a program that prints the numbers from 1 to 100 and for multiples of '3' print "Fizz" instead of
the number and for the multiples of '5' print "Buzz".
*/


#include<stdio.h>

void fizz()
{
	int i;
	for(i=1;i<101;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("\tFIZZ BUZZ(%d)",i);
		}
		else
		{
			if(i%3==0 || i%5==0)
			{
				if(i%3==0)
				{
					printf("\tfizz(%d)",i);
				}
				else
				{
					if(i%5==0)
					{
						printf("\tbuzz(%d)",i);
					}
				}
			}
			else
			{
				printf("\t%d",i);
			}
		
		}//else
		
	}//for
}//fizz
void main(){
	fizz();
}
