#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char a,b,Name[20],District[20];
    int Age,count=0;

    printf("\t\t\t\t\t COVID-19 possibility test ");
    printf("\n\t\t\t\t-----------------------------------------------");
    printf("\n\n\t\t\t\t\tPLEASE ENTER THE BASIC INFORMATION: \n");

    printf("Enter your Name : ");
    scanf("%[^\n]",Name);

    printf("\nWhich district are you from : ");
    scanf("%s",District);

    printf("\nEnter your age : ");
    scanf("%d",&Age);

    printf("\t\t\t\t   Please Enter The Following Answer correctly : ");
    printf("\n\t\t\t\t---------------------------------------------------\n");

    printf("\n\n\t Do you have any travel history across Bangladesh?(y/n)\nAns:- ");
    fflush(stdin);
    scanf("%c",&a);
    if(a=='y' || a=='Y')
    {
        count++;
    }

    printf("\n\n\tDo you come in contact with any COVID-19 infected people?(y/n)\nAns:- ");
    fflush(stdin);
    scanf("%c",&b);
    if(b=='y' || b=='Y')
    {
        count++;
    }



}
