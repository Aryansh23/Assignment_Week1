#include<stdio.h>
//display your basic info like name,regdno,branch,hobbies.
int main()
{
    char name[30];
    char regdno[3];
    char branch[30];
    char hobbies[30];
    int regno;
    printf("Enter name: \n");
    scanf("%s",&name);
    printf("Enter last 3 digits of Registration no.:\n");
    scanf("%d",&regno);
    printf("Enter branch :\n");
    scanf("%s",&branch);
    printf("Enter hobbies :\n");
    scanf("%s",&hobbies);
    printf("\n Name- %s",name);
    printf("\n Registration No- %d",regno);
    printf("\n Branch- %s",branch);
    printf("\n Hobbies- %s",hobbies);
    return 0;
}
