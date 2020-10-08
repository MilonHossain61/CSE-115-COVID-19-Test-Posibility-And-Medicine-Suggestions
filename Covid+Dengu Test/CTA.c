#include <stdio.h>
#include <stdlib.h>

int Homescreen();//alip
void Normal_Fever();//milon
void Dengue();//pranto
void Covid();//milon
void open_main();//alip
int func(int arr[]);//pranto
void review();//milon
int signup();//alip
void help();//pranto


struct user
{
    char name[30];
    int age;
};

//global variables
int n;
char str[10];
char prob[10] = {"fever"};
int flag;



int main()
{
      printf("\t\t\MEDICAL ASSISTANT For FEVER (COVID19,DENGUE) \t\t\n\n");
      printf("\t\t\WELLCOME TO CDTA \n");
      printf("-------------------------------------------------------------------------------------------------------\n");
      printf("\t\tPress 1 for Sign Up \n\t\tPress 2 for Help\n\t\tPress 3 for Reviews\n\t\tPress 4 for Exit\n\t\t");

      scanf("%d",&n);
      if(n==1)
        signup();
      else if (n==2)
        help();
      else if(n==3)
        review();
      else if(n==4)
        exit(0);
      return 0;
}


int signup()
{
    struct user signup;
    FILE *fuser;
    fuser = fopen("Signup_file.txt","w");
    if(fuser==NULL)
    {
        printf("ERROR!");
        exit(1);
    }

    fflush(stdin);
    printf("\n\t\tPlease Enter your name: ");
    gets(signup.name);
    fprintf(fuser,"%s\n ", signup.name);

    printf("\n\t\tPlease Enter your age: ");
    scanf("%d",&signup.age);
    fprintf(fuser,"Age: %d  ", signup.age);

    getchar();
    system("cls");
    fclose(fuser);
    Homescreen();

    return 0;
    }


    int Homescreen()
    {

       int num;

        puts("\t\t\Welcome to CDTA\n");
        puts("\n");
        printf("\n\t\Press 1 to START\n\t\Press 2 For Instruction: How To use it");
        printf("\n\t\Press 3 to EXIT\n");

    scanf("%d",&num);
    if (num==1){
         fflush(stdin);
         system("cls");
         open_main();
    }

    else if(num==2)
    {
        printf("\nPlease sing up using your name and age\n");
    }
    else if(num==3)
    {
        exit(1);
    }

return 0;
}




void open_main()
{

FILE *fuser;
struct user a;

fuser = fopen("Signup_file.txt","r");
fflush(stdin);
fscanf(fuser,"%[^\n]s", a.name);
printf("Hi %s \n",a.name);
printf("If you suffering from FEVER let me know.....\n");
printf("Just write fever to start the program\n");
fflush(stdin);
gets(str);

if(strcmp(str , "fever") == 0){
     flag = 1;

    if (flag=1){
    int time;
    puts("\nI am so sorry to hear about your high temperature !!");
    puts("How long you have been suffering from this?\n");
    puts("2 or less than 2 days?\n");
    puts("7 or less than 7 days?\n");
    puts("15 and less than 15 days?\n");
    scanf("%d",&time);

                    if(time<=2)
                  {
                      Normal_Fever();
                      fflush(stdin);
                      getchar();
                      system("cls");
                      main();
                   }

                   else if (time<=7)
                   {
                       printf ("\nYou have viral fever:\n");
                       printf ("\nLet me check your symptoms?\n");
                       printf("\n");
                       int ar[9];
                       for (int i=0 ; i<8 ; i++)
                       {
                            if(i==0){
                            printf(">>1.Suddenly High Fever\n");
                            printf(">>2.High Fever\n");
                            printf ("\nPress 1 or 2 for choose\n");
                            printf("\n");
                            scanf("%d",&ar[i]);
                            printf("\n\n");}

                            else if(i==1){
                            printf(">>1.Severe headaches \n");
                            printf(">>2.dry cough\n");
                            printf ("\nPress 1 or 2 for choose\n");
                            printf("\n");
                            scanf("%d",&ar[i]);
                            printf("\n\n");}


                            else if(i==2){
                            printf(">>1.Pain behind the eyes \n");
                            printf(">>2.Tiredness\n");
                            printf ("\nPress 1 or 2 for choose\n");
                            printf("\n");
                            scanf("%d",&ar[i]);
                            printf("\n\n");}


                            else if(i==3){
                            printf(">>1.Severe joint and muscle pain \n");
                            printf(">>2.Diarrhoea\n");
                            printf ("\nPress 1 or 2 for choose\n");
                            printf("\n");
                            scanf("%d",&ar[i]);
                            printf("\n\n");}


                            else if(i==4){
                            printf(">>1.Fatigue\n");
                            printf(">>2.loss of taste or smell\n");
                            printf ("\nPress 1 or 2 for choose\n");
                            printf("\n");
                            scanf("%d",&ar[i]);
                            printf("\n\n");}


                            else if(i==5){
                            printf(">>1.Nausea\n");
                            printf(">>2.Conjunctivitis\n");
                            printf ("\nPress 1 or 2 for choose\n");
                            printf("\n");
                            scanf("%d",&ar[i]);
                            printf("\n\n");}

                            else if(i==6){
                            printf(">>1.Skin rash, which appears two to five days\n");
                            printf(">>2.difficulty breathing or shortness of breath\n");
                            printf ("\nPress 1 or 2 for choose\n");
                            printf("\n");
                            scanf("%d",&ar[i]);
                            printf("\n\n");}

                            else if(i==7){
                            printf(">>1.Aches and pains\n");
                            printf(">>2.chest pain or pressure\n");
                            printf ("\nPress 1 or 2 for choose\n");
                            printf("\n");
                            scanf("%d",&ar[i]);
                            printf("\n\n");}


                        }

                       func(ar);
                   }

            else{
            printf ("\nYou fever is now in a critical stage\n");
            printf ("\nYou have to admit in a Hospital as soon as possible.\n");
            printf ("\nPress ENTER to back main menu\n");
            fflush(stdin);
            getchar();
            system("cls");
            main();}
    }

}

else{puts("Sorry,I have no data base about your problem.");}

}



int func(int arr[])
{
    int a [] = {1,1,1,1,1,1,1,1};
    int b [] = {2,2,2,2,2,2,2,2};

    int flag1;

    for (int i=0; i<4; i++)
    {
        if (arr[i]==a[i])
        {flag1 = 0;}

        else if (arr[i]==b[i])
        {flag1=1;}
    }

    if (flag1==0)
    {
        system("cls");
        fflush(stdin);
        Dengue();
    }

    if (flag1==1)
    {
        system("cls");
        fflush(stdin);
        Covid();
    }
}

void Normal_Fever(){
printf ("\nYou have normal fever:\n");
printf ("\nTake Paracetamol 3 times in a day\n");
printf ("\nN.B:If Temperature >100'C\n");
printf ("\nPress ENTER to back main menu\n");
}


void Dengue()
{
    FILE *den;
    den = fopen ("Prescription for Dengue.txt","w");
    if (den == NULL){
    printf ("\nError. No file found.");
    }
    fprintf(den,"Drugs and Treatments for Dengue fever.\n");
    fprintf(den,"\n\nDrugs:\n");
    fprintf(den,"\n\n1) Tab.\n");
    fprintf(den,"\nParacetamol(500mg) (if Temperature > 100'C).\n");
    fprintf(den,"\n1 + 1 + 1.\n");
    fprintf(den,"\n\n2) Tab\n");
    fprintf(den,"\nAcetaminophen(500mg) ( For Reduce Pain ).\n");
    fprintf(den,"\n1 + 0 + 1\n");
    fprintf(den,"\n\n3) Tab.\n");
    fprintf(den,"\nLosectil V(20mg).\n");
    fprintf(den,"\n1 + 0 + 1.\n");
    fprintf(den,"\n\n\n\n");
    fprintf(den,"Treatment:\n");
    fprintf(den,"\n\nNo specific treatment for dengue fever exists.\n");
    fprintf(den,"\nYour doctor may recommend that you drink plenty of fluids to avoid dehydration from vomiting and high fever.\n");
    fclose(den);

    fflush(stdin);
    printf("According to your Symptoms , You are probably suffering form dengue fever :");
    printf("\nUntil you consult with a DOCTOR, You can Follow these......");
    printf("\n\nDrugs and Treatments for Dengue fever :");
    printf("\n\nDrugs-");
    printf("\n\n1) Tab.");
    printf("\nParacetamol(500mg) (if Temperature > 100'C)");
    printf("\n1 + 1 + 1");
    printf ("\n\n2) Tab.");
    printf("\nAcetaminophen(500mg) ( For Reduce Pain )");
    printf("\n1 + 0 + 1");
    printf ("\n\n3) Tab.");
    printf("\nLosectil V(20mg)");
    printf("\n1 + 0 + 1");
    printf("\n\n\n\n");
    printf("Treatment-");
    printf("\n\nNo specific treatment for dengue fever exists.");
    printf("\nYour doctor may recommend that you drink plenty of fluids to avoid dehydration from vomiting and high fever.");

}


void Covid()
{

    FILE *cov;
    cov = fopen ("Prescription for COVID19.txt","w");
    if (cov == NULL){
    printf ("\nError. No file found.");
    }
    fprintf(cov,"Drugs and Treatments for COVID fever :\n");
    fprintf(cov,"\n\nDrugs:\n");
    fprintf(cov,"\n\n1) Cap.\n");
    fprintf(cov,"\nDoxicap 100mg\n");
    fprintf(cov,"\n1+0+1 for 7days\n");
    fprintf(cov,"\n\n2) Tab\n");
    fprintf(cov,"\nIvera 12mg\n");
    fprintf(cov,"\n1 tab Once\n");
    fprintf(cov,"\n\n3) Tab.\n");
    fprintf(cov,"\nFamotid 40mg\n");
    fprintf(cov,"\n1+0+1 7days\n");
    fprintf(cov,"\n\n4) Cap.");
    fprintf(cov,"\nD- rise 40,000IU");
    fprintf(cov,"\n1 cap weekly for 6 weeks");
    fprintf(cov,"\n\n5) Tab.");
    fprintf(cov,"\nZorate 60mg");
    fprintf(cov,"\n1+0+1 14 days");

    fprintf(cov,"\n\n\n\n");

    fprintf(cov,"Treatment\n");
    fprintf(cov,"\n\nTo date, there are no specific vaccines or medicines for COVID-19. Treatments are under investigation, and will be tested through clinical trials.");
    fprintf(cov,"\nAbove mention drugs may help to recover immune system of your body so that you can fight against COVID19");



    fclose(cov);

    fflush(stdin);

    printf("According to your Symptoms , You are probably suffering form COVID19 :");
    printf("\nUntil you consult with a DOCTOR, You can Follow these......");
    printf("\n\nDrugs and Treatments for COVID19 fever :");
    printf("\n\nCOVID19-");
    printf("\n\n1) Cap.");
    printf("\nDoxicap 100mg");
    printf("\n1+0+1 for 7days");
    printf ("\n\n2) Tab.");
    printf("\nIvera 12mg");
    printf("\n1 tab Once");
    printf ("\n\n3) Tab.");
    printf("\nFamotid 40mg");
    printf("\n1+0+1 7days");
    printf ("\n\n4) Cap.");
    printf("\nD- rise 40,000IU");
    printf("\n1 cap weekly for 6 weeks");
    printf ("\n\n5) Tab.");
    printf("\nZorate 60mg");
    printf("\n1+0+1 14 days");

    printf("\n\n\n\n");

    printf("Treatment-");
    printf("\n\nTo date, there are no specific vaccines or medicines for COVID-19. Treatments are under investigation, and will be tested through clinical trials.");
    printf("\nAbove mention drugs may help to recover immune system of your body so that you can fight against COVID19");

}


void review()
{

char revR[100];
FILE *rev;

rev = fopen("Review.txt" , "a");
if(rev==NULL)
{
    printf("Error file not found");
}

printf("\nWrite Reviews...\n");
fflush(stdin);
gets(revR);
fputs(revR,rev);
fclose(rev);

printf ("\nThanks for your review.");
printf("\n \nPress Enter to main menu");
fflush(stdin);
getchar();
system("cls");
main();
}

void help()
{
    printf("\nCALL Health Care Centre at 16263\n");

}


