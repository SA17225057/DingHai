#include<stdio.h>
#include<stdlib.h>
void hello()
{
	printf("hello world!\n");
}
void add()
{
	int a,b,c;
	printf("please input two numbers:\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("%d",c);
}
void help()
{
	printf("you need help!");
}
void sub()
{
	int a,b,c;
	printf("please input two numbers:\n");
	scanf("%d  %d",&a,&b);
	c=a-b;
	printf("%d",c);
}
void mul()
{
	int a,b,c;
	printf("please input two numbers:\n");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("%d",c);
}
void chu()
{
	int  a,b,c;
	printf("please input two numbers:\n");
	scanf("%d %d",&a,&b);
	if(b==0)
	{
	printf("Error : divisor can not be zero!\n");
	}
	else 
	{
	c=a/b;
	printf("%d",c);
	}
}

void main()
{
	char cmd[256];
	while(1)
	{
		scanf("%s",cmd);
		if(strcmp(cmd,"hello")==0)
		{
			hello();
		}
		else if(strcmp(cmd,"quit")==0)
		{
			exit(0);
		}
		else if(strcmp(cmd,"sub")==0)
		{
			sub();
		}
		else if(strcmp(cmd,"add")==0)
		{
			add();
		}
		else if(strcmp(cmd,"chu")==0)
		{
			chu();
		}
		else if(strcmp(cmd,"mul")==0)
		{
			mul();
		}
		else
		{
			printf("Error command!\n");
			help();
		}
	}
}

