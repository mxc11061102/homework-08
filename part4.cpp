#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char ch;
char token[100]={0};

void retract(FILE *file) 
{
	fseek(file,-1,SEEK_CUR); 
}

void catToken()
{
	token[strlen(token)] = ch;
}

void clearToken(){                           
	memset(token,0,sizeof(token));
}

int isLetter()
{
	if((ch>='a' &&ch<='z')||(ch>='A'&&ch<='Z')||ch<0)
		return 1;
	else return 0;
}

int isDigit()
{
	if (ch>='0'&&ch<='9')
		return 1;
	else return 0;
}

int isColon()
{
	if (ch==':') 
		return 1;
	else return 0;
}

int isDivi()
{
	if (ch=='/') 
		return 1;
	else return 0;
}

int isPeriod()
{
    if (ch=='.')
        return 1;
    else return 0;
}
int isSpace()
{
	if (ch==' ') 
		return 1;
	else return 0;
}
int isNewline()
{
	if (ch=='\n') 
		return 1;
	else return 0;
}
int isTab()
{
	if (ch=='	') 
		return 1;
	else return 0;
}
int is__()
{
	if (ch=='-') 
		return 1;
	else return 0;
}
int is_()
{
	if (ch=='_') 
		return 1;
	else return 0;
}

int getsym(FILE *file)

{
	clearToken();
	ch=fgetc(file);
	while(isSpace() || isNewline()|| isTab())  ch = fgetc(file);
	while(isColon() || isDivi()|| isPeriod())  ch = fgetc(file);
    while(isLetter()||is_()||is__()||isDigit())
		{catToken();
		ch=fgetc(file);
        if (ch==EOF) break; }
}

int main()
{
	FILE *read; 
	FILE *write;
	int count=1;
	char fname[100] = {0};	
	printf("请输入文件名\n");
	gets(fname);
	read =fopen(fname,"r");      
	write =fopen("cut.txt", "w" ); 
    if((read=fopen(fname,"r"))!=NULL)
    { 
		getsym(read);	
		fprintf(write,"%s\n",token);
		while(!feof(read))
		{	
            getsym(read);	
			fprintf(write,"%s\n",token);     
				
		}
         
    } 
	else
	{
		printf("error.\n");
	}
	return 0;
}	
