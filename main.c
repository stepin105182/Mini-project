#include <stdio.h>
#include <string.h>
#include <math.h>
int main() 
{ 
    char name[15],ver[25]; 
    char pwd[12]; 
 int i,a,digi=0,up=0,low=0,schar=0;
 
    printf("Enter your username:\n"); 
    scanf("%s",&name); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&pwd); 
 //gets(pwd);

a=strlen(pwd);



//while(a>5 && a<12 && up!=0 && low!=0 && digi!=0 && schar!=00)
 top:
if(a<5)

{

printf("Error: Password should contain contain minimum 5 characters ");

}

else if(a>12)

{

printf("Error: Password shouldn't exceed 12 characters ");

}

else

{

for(i=0;pwd[i]!=NULL;i++)

{

if(pwd[i]>='A' && pwd[i]<='Z')

up++;

if(pwd[i]>='a' && pwd[i]<='z')

low++;

if(pwd[i]>='0' && pwd[i]<='9')

digi++;

if(pwd[i]=='@'||pwd[i]=='#'||pwd[i]=='$')

schar++;

}

}

if(up==0)

printf("There must be at least one Uppercase\n");

if(low==0)

printf("There must be at least one Lowercase\n");

if(digi==0)

printf("There must be at least one Digit\n");

if(schar==0)

printf("There must be at least one Special Character\n");

if (a>12 | a<5 | up==0 | low==0 | digi==0 | schar==00)
{ printf("Enter your password:\n"); 
    scanf("%s",&pwd);
    a=strlen(pwd);}
    if (a>12 | a<5 | up==0 | low==0 | digi==0 | schar==00) goto top; 


if (a>5 && a<12 && up!=0 && low!=0 && digi!=0 && schar!=00)

{

printf("Confirm your Password\n");

scanf("%s",&ver);

if(strcmp(pwd,ver)==0)

printf("Welcome %s, your is Password Verified",name);

else

printf("Password did not match");

}

return 0;

}