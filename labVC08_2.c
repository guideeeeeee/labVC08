#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char c ;
    FILE *fpt;
    fpt = fopen("File_1.txt","w");
    if(fpt==NULL)
    {
        printf("\n Error can't open/create file \n");
        exit(1);
    }
    while(c !=EOF)
    {
        c = getc(fpt);
        printf("%c",c);
    }
    fclose(fpt);
    printf("\n... Read form file ready...!\n");
    system("pause");
}