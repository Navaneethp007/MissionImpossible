#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *f;
    char c;
    
    f=fopen("20.txt","w");
    if(f==NULL){
        printf("File not found");
        exit(0);
    }
    printf("\nEnter the data to be written to the file:\n");
    while((c=getchar())!='\n'){
        fputc(c,f);
    }
    fclose(f);

    f=fopen("20.txt","r");
    printf("\nThe content of the file is: \n");
    while((c=fgetc(f))!=EOF){
        printf("%c",c);
    }
    fclose(f);

    f=fopen("20.txt","a");
    printf("\n\nEnter the data to be appended to the file:\n");
    while((c= getchar())!='\n'){
        fputc(c,f);
    }
    fclose(f);

    f= fopen("20.txt","r");
    printf("\nThe content of the file is:\n");
    while((c=fgetc(f))!=EOF){
        printf("%c",c);
    }
    fclose(f);
}
