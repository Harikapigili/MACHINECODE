#include<stdio.h> 
#include<string.h> 
int main()
{
char name[20];
char rollno[20];
printf("\nEnter  the Name of the Student:");
scanf("%s",name);
printf("\nEnter the Roll Number of the Student:");
scanf("%s",rollno);
printf("\nName of the Student is:%s",name);
printf("\nRoll no of the Student is:%s",rollno);
char inp[100][100]; 
int n,i,j,len;
int reg = 1;
printf("\nEnter the No of Statements:"); 
scanf("%d",&n);
for(i = 0; i < n; i++) 
scanf("%s",&inp[i]); 
printf("\nTARGET CODE");
printf("\n--------------------------------------");
for(i = 0; i < n; i++)
{
len = strlen(inp[i]); 
for(j=2; j < len; j++)
{
if(inp[i][j] >= 97 && inp[i][j] <= 122)
{
printf("\nMOV R%d %c \n",reg++,inp[i][j]);
}
if(j == len-1 && inp[i][len-j] =='=')
{
j=3; 
if(inp[i][j] == '+')
{
if(inp[i][4] >= 97 && inp[i][4] <= 122)
{
printf("\nADD R%d R%d\n",reg-2,reg-1); 
printf("\nSTORE %c R%d\n",inp[i][0],reg-2);
}
else if(inp[i][4]>=48 && inp[i][4]<=57)
{
printf("\nADD R%d #%c\n",reg-1,inp[i][4]); 
printf("\nSTORE %c R%d\n",inp[i][0],reg-1);
}
}
else if(inp[i][j]=='-')
{
if(inp[i][4] >= 97 && inp[i][4] <= 122)
{
printf("\nSUB R%d R%d\n",reg-2,reg-1); 
printf("\nSTORE %c R%d\n",inp[i][0],reg-2);
}
else if(inp[i][4]>=48 && inp[i][4]<=57)
{
printf("\nSUB R%d #%c\n",reg-1,inp[i][4]); 
printf("\nSTORE %c R%d\n",inp[i][0],reg-1);
}

}
else if(inp[i][j]=='*')
{
if(inp[i][4] >= 97 && inp[i][4] <= 122)
{
printf("\nMUL R%d R%d\n",reg-2,reg-1); 
printf("\nSTORE %c R%d\n",inp[i][0],reg-2);
}
else if(inp[i][4]>=48 && inp[i][4]<=57)
{
printf("\nMUL R%d #%c\n",reg-1,inp[i][4]); 
printf("\nSTORE %c R%d\n",inp[i][0],reg-1);
}

}
else if(inp[i][j]=='/')
{
if(inp[i][4] >= 97 && inp[i][4] <= 122)
{
printf("\nDIV R%d R%d\n",reg-2,reg-1); 
printf("\nSTORE %c R%d\n",inp[i][0],reg-2);
}
else if(inp[i][4]>=48 && inp[i][4]<=57)
{
printf("\nDIV R%d #%c\n",reg-1,inp[i][4]); 
printf("\nSTORE %c R%d\n",inp[i][0],reg-1);
}
}
else
{
printf("\nSTORE %c R%d\n",inp[i][0],reg-1);
}

break;
}
}
}
return 0;
}