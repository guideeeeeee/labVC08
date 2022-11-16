#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    FILE *fpt;
    char buffer[60];
    if((fpt = fopen("FILE_2.TXT","r+"))==NULL)
    {
        printf("Cannot open output file.\n");
        exit(1);
    }
    fread(buffer,61,1,fpt);
    printf("%s\n",buffer);
    fclose(fpt);
    printf("\n Read form block file ready...!\n");
    system("pause");
}