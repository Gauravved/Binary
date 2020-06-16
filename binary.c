#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
	long ar[32],n;
	int i,a[5],m,cnt[10],j,k,grt=0;
	double f;
	char choice,ch;
	char sen[250];
	system("CLS");
	int choose,cho;
	do
	{
		printf("-------------------------------------- Number Conversion --------------------------------------");
		printf("\n1> Binary: \n2> Decimal to Octal: \n3> Decimal to Hexadecimal:\nEnter your choice:");
		scanf("%d",&choose);
		if(choose==1)
		{
			printf("1> Number \n2>Alphabet \n3>Sentence \nEnter the your choice:");
			scanf("%d",&cho);
			if(cho==1)
			{
				printf("\nEnter the number to convert:");
				scanf("%lf",&f);
				n=f;
				for(i=0;n>0;i++)
				{
					ar[i]=n%2;
					n=n/2;
				}
				m=i;
				printf("The binary number is :");
				for(i=m-1;i>=0;i--)
				{
					grt=0;
					printf("%d",ar[i]);
					if(ar[i]==1)
					{
						j=i-1;
						grt=0;
						while(ar[j]!=1 &&j>=0)
						{ 
							grt++;
							j--;
						}
						if(j<0)
						{
							grt=0;
						}
					}
					cnt[i]=grt;
				}
				printf(".");
				k=0;
				do
				{	
					if(f>=1)
					{	
						f=f-(int)f;	
					}	
					f=f*2;
					a[k]=(int)f;
					printf("%d",a[k]);
					k++;
				}while(f>=0 && k<4);
				grt=cnt[0];
				for(i=m-1;i>=0;i--)
				{
					if(grt<cnt[i])
					{
						grt=cnt[i];
					}
				}
				if(grt==0)
				{ 
					printf("\nThere is no binary gap");
				}
				else
					printf("\nThe longest binary gap is %d",grt);
			}
			else if(cho==2)
			{
				printf("\nEnter the alphabet:");
				scanf("%s",&ch);
				n=(int)ch;
				for(i=0;i<8;i++)
				{
					ar[i]=n%2;
					n=n/2;
				}
				m=i;
				printf("The binary of %c is:",ch);
				for(i=m-1;i>=0;i--)
				{
					grt=0;
					printf("%d",ar[i]);
					if(ar[i]==1)
					{
						j=i-1;
						grt=0;
						while(ar[j]!=1 &&j>=0)
						{ 
							grt++;
							j--;
						}
						if(j<0)
						{
							grt=0;
						}
					}
					cnt[i]=grt;
				}
				for(i=m-1;i>=0;i--)
				{
					if(grt<cnt[i])
					{
						grt=cnt[i];
					}
				}
				if(grt==0)
				{ 
					printf("\nThere is no binary gap");
				}
				else
					printf("\nThe longest binary gap is %d",grt);
			}
			else if(cho==3)
			{
				printf("\nEnter the sentence or word ( Enter . When done):");
				scanf("%[^.]",&sen);
				printf("The binary of the sentence or word is:\n");
				for(i=1;sen[i]!='\0';i++)
				{
					n=(int)sen[i];
					for(j=0;j<8;j++)
					{
						ar[j]=n%2;
						n=n/2;
					}
					m=j;
					for(j=m-1;j>=0;j--)
					{
						printf("%d",ar[j]);
					}
				}
				scanf("%s",&choice);
			}
		}
		else if(choose==2)
		{
			printf("\nEnter the number to convert:");
			scanf("%lf",&f);
			n=f;
			for(i=0;n>0;i++)
			{
				ar[i]=n%8;
				n=n/8;
			}
			k=0;
			do
			{	
				if(f>=1)
				{
					f=f-(int)f;
				}	
				f=f*8;
				a[k]=(int)f;
				k++;
			}while(f>=0 && k<4);
			printf("The octal number is :");
			m=i;
			for(i=m-1;i>=0;i--)
			{
				printf("%d",ar[i]);
			}
			printf(".");
			for(k=0;k<4;k++)
			{
				printf("%d",a[k]);
			}
		}
		else if(choose==3)
		{
			printf("\nEnter the number to convert:");
			scanf("%lf",&f);
			n=f;
			for(i=0;n>0;i++)
			{
				ar[i]=n%16;
				n=n/16;		
			}
			k=0;
			do
			{	
				if(f>=1)
				{	
					f=f-(int)f;
				
				}	
				f=f*16.0;
				a[k]=(int)f;
				k++;
			}while(f>=0 && k<4);
			printf("The hexadecimal number is :");
			m=i;
			for(i=m-1;i>=0;i--)
			{
				if(ar[i]==10)
				{
					printf("A");
				}
				else if(ar[i]==11)
				{
					printf("B");
				}
				else if(ar[i]==12)
				{
					printf("C");
				}
				else if(ar[i]==13)
				{
					printf("D");
				}
				else if(ar[i]==14)
				{
					printf("E");
				}
				else if(ar[i]==15)
				{
					printf("F");
				}
				else
					printf("%d",ar[i]);
			}
			printf(".");
			for(k=0;k<4;k++)
			{	if(a[k]==10)
				{
					printf("A");
				}
				else if(a[k]==11)
				{
					printf("B");
				}
				else if(a[k]==12)
				{
					printf("C");
				}
				else if(a[k]==13)
				{
					printf("D");
				}
				else if(a[k]==14)
				{
					printf("E");
				}
				else if(a[k]==15)
				{
					printf("F");
				}
				else
					printf("%d",a[k]);
			}
		}
		else
		{
			printf("Please recheck the number!!!!");
		}
		lable:
		printf("\n\nDo you want to continue? [y/n] :");
		scanf("%s",&choice);
		system("CLS");
	}while(choice=='y'||choice=='Y');
	return 0;
}
