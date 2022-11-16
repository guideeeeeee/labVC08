#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define OFFSET -10
#define ORIG 2
void main()
{
    char c;
    FILE *fpt;
    fpt =fopen("File_2.txt","r");
    if(fpt == NULL)
    {
        printf("\n Error can't open/create file \n");
        exit(1);
    }
    fseek(fpt,OFFSET,ORIG);
    while(c!=EOF){
        c=getc(fpt);
        putchar(c);
    }
    fclose(fpt);
    printf("\n Seek to file ready...!\n");
    system("pause");
}