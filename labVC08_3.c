#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main (){
    char c;
    FILE *fpt;
    fpt = fopen("File_1.txt","a");
    if(fpt ==NULL)
    {
        printf("\n Error can't open/create file\n");
        exit(1);
    }
    fprintf(fpt,"\n This Message append to File_1.txt");
    fclose(fpt);
    printf("\n Append to file ready...!\n");
    system("pause");
}