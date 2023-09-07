#include<stdio.h>
#include<string.h>
void del(char *ptr,int i,int n)
{
	for(;i<n;++i)
	{
		*(ptr+i-1)=*(ptr+i);
	}
}

void main()
{
	char a1[100],a2[100];
	printf("\nENTER YOUR NAME\n");
	gets(a1);
	printf("ENTER YOUR CR*SH NAME\n");
	gets(a2);
	int l1=strlen(a1),l2=strlen(a2),i,j,len=0;
	for(i=0;i<l1;++i)
	{
		if(a1[i]==' ')
		{
			del(a1,i,l1);
		    --l1;
		}
	}
	for(i=0;i<l2;++i)
	{
		if(a2[i]==' ')
		{
			del(a2,i,l2);
		    --l2;
		}
	}
	for(i=0;i<l1;)
	{
		for(j=0;j<l2;)
		{
			if(a1[i]==a2[j])
			{
				del(a1,i,l1);
				del(a2,j,l2);
				--l1,--l2;
			}
			else
			{
				++i,++j;
			}
		}
	}
	len=l1+l2;
	len%=6;
	switch(len)
	{
		case 0:
			printf("\nFrIeNdS oNlY");
		break;
		case 1:
			printf("\nLoVe .... eVoL");
		break;
		case 2:
			printf("\n***AfFeCtIoNaTe***");
		break;
		case 3:
			printf("\nMaRrAiGe");
		break;
		case 4:
			printf("\nEnEmIeS");
		break;
		case 5:
			printf("\nSiBlInGs (us bro us)");
		break;	
	}
}















