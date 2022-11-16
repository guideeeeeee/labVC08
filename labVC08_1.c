#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fpt;
    fpt = fopen("File_1.txt","w");
    if(fpt==NULL)
    {
        printf("\n Error can't open/create file \n");
        exit(1);
    }
    fprintf(fpt,"Welcome to create file by Visual C++...!");
    fclose(fpt);
    printf("\n Open file/Create ready...!\n");
    system("pause");
}