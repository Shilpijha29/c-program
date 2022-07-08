#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char arr[6][20] = {"programmer", "developer", "engineer",
                        "student", "teacher", "professor"};
    char name[25];
    int found=0;
    printf("Who are You ? ");
    scanf("%s", name);
    for(int i=0; i<6; i++)
    {
        if(!strcmp(name, arr[i]))
        {
            printf("\nCongratulation!!");
            printf("\nYou're invited from codescracker.com.");
            found=1;
            break;
        }
        else
            found++;
    }
    if(found != 1)
        printf("\nSorry!\nYou're not invited.");
    getch();
    return 0;
}
