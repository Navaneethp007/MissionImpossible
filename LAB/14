#include<stdio.h>
#include<string.h>
struct employee{
char name[50];
int id;
int s;
};
int main(){
int n=0, f=1;


struct employee em[50];
while(f==1){
    n++;
    
        printf("Enter the details of %i employee:\n",n);
        printf("Name:");
        scanf("%s",&em[n].name);
        printf("Id:");
        scanf("%i",&em[n].id);
        printf("Salary::");
        scanf("\n %i",&em[n].s);
    
    printf("Do you need to enter more data [if yes =1|if no =0]::\n");
    scanf("%i", &f);
    

}

printf("\n--Name--------Id------Salary-------::\n");
for(int p = 1; p <= n; p++){
    printf("%s   %i    %i    \n", em[p].name,em[p].id,em[p].s);
}
}
