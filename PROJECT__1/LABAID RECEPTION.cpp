                                //ADMIN NAME: POWER LAB
                                //ADMIN PASS: cse104


#include<stdio.h>

#include<windows.h>

#include<conio.h>

#include<process.h>

#include<string.h>

#include<ctype.h>

#include<time.h>

//define



#define ENTER 13

#define BKSP 8

#define TAB 9

#define CABIN 5

#define WARD 5


FILE *f,*fp;

char ch;
int noti=0;

int flag = 0,doct=0;
int i,patient,donor;


//FUNCTIONS


void main_page();

void screen();
void loading1();

void loading2();
void choice();


//Admin


void admin();
BOOLEAN  get_pass();

void admin_page();

void admin_choice();
void admin_search();

void Apointment();
void admin_pat();

int notif();
void add_me();
void search_me();

void cab_add();
void ward_add();



//User


void user();

void user_choice(int x);

void box();
void billShow(int x);


//bank



void b_bank();




//Guest



void Guest();

void Appiontment();


void DOCTOR();

//Structures




struct usr


{
    char name[200];

    char pass[200];
    int age;

    char blood[5];

    char gender;
    char phone[15];

    char disease[200];
    char room[100];

    int room_num;
    char consult[100];



    struct Bill

    {

        int medi;

        int check;
        int doc;

        int hos;
        int ambu;
        int rent;

        int ope;
        int paid;
    } bill;

    struct Admit
    {
        int day;

        int month;
        int year;


    } admit;

    struct Release
    {
        int day;

        int month;
        int year;
    } release;

    struct Address
    {


        char vill[30];

        char thana[30];
        char dist[30];
    }
    address;



}
usr[100];

struct Appointment


{

    char name[100];
    char age[30];

    struct Doc
    {

        char name[500];
        char depertment[500];
    } doct;


    char phone[150];



} appoint[100];



struct w


{

    //blood bank

    char name[150];
    char group[110];

    char road[140];
    char thana[140];

    char dis[140];
    char phone[115];
    int age;


} work[100];

struct GUEST


{
    char name[120];

    char phone[115];
    char age[20];

    char doctor[50];
    char depertment[50];


} guest[10];


struct doctor


{
    char name[200];
    char gender[10];

    char quali[500];
    char phone[15];

    char regis[130];
    char depert[150];

    struct Visit
    {

        char f_day[50];
        char t_day[50];

        char f_time[50];
        char t_time[50];
    } visit;



} doc[50];




//Windows.h


void gotoxy(int x , int y)


{


    COORD coord;

    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}



void loading1()

{

    int i,j;

    gotoxy(49,10);

    printf("LOADING...");
    gotoxy(43,11);

    for(i=1; i<=25; i++)
    {

        for(j=0; j<=100000000; j++);
        printf("%c",177);
    }

}



void box()

{
    int i;



    //system("color 3F");


// Up Most



    for(i=8; i<=110; i++)
    {
        gotoxy(i,5);
        printf("%c",205);
    }

// Up 2nd



    for(i=8; i<=110; i++)
    {
        gotoxy(i,7);
        printf("%c",205);
    }



// Left Most




    for(i=6; i<=26; i++)
    {
        gotoxy(8,i);
        printf("%c",186);
    }
    gotoxy(8,5);
    printf("%c",201);



// Left Most



    for(i=6; i<=26; i++)
    {
        gotoxy(20,i);
        printf("%c",186);
    }
    gotoxy(20,5);
    printf("%c",201);


// bottom Most



    for(i=8; i<=110; i++)
    {
        gotoxy(i,27);
        printf("%c",205);
    }


// Right Most


    for(i=6; i<=26; i++)
    {
        gotoxy(110,i);
        printf("%c",186);
    }

    gotoxy(110,5);
    printf("%c",187);



// Right 2nd


    for(i=6; i<=26; i++)
    {
        gotoxy(90,i);
        printf("%c",186);
    }
    gotoxy(90,5);
    printf("%c",187);


}

void animation()

{
    int j;

    for (j=28; j>=1; j--)

    {

        Sleep(30);

        gotoxy(1,j);

    }

    for (j=1; j<=20; j++)

    {
        Sleep(40);

        gotoxy(1,j);

    }

}


void loading2()


{

    system("color f2");
    printf("\n\n\n\n\t\t\t\t\t\t__");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_\n");

    Sleep(50);
    printf("\t\t\t\t\t\t  L ");

    Sleep(100);
    printf("O ");

    Sleep(100);
    printf("A ");

    Sleep(100);
    printf("D ");

    Sleep(100);
    printf("I ");

    Sleep(100);
    printf("N ");

    Sleep(100);
    printf("G\n");

    Sleep(100);
    printf("\t\t\t\t\t\t_");

    Sleep(05);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(50);
    printf("_");

    Sleep(500);
    printf("\n\n");
}


void Time()

{
    time_t currenttime;

    time(&currenttime);

    struct tm *myTime = localtime(&currenttime);

    printf("%i/%i/%i",myTime->tm_mday, myTime->tm_mon+1,myTime->tm_year+1900);

}




//MAIN



int main()

{
    system("cls");
    system("color 0C");



    //loading2();
    loading1();


    main_page();
}

void main_page()

{
    system("cls");
    system("color 5B");

    screen();
    choice();


    //admin_page();

}



//main screen


void screen()

{


    system("cls");


    //system("color 37");

    //star();

    gotoxy(50,0);
    printf("SAFE  WITH..!\n");

    gotoxy(29,1);
    printf("             LABAID SPECIALIZED HOSPITAL \n");

    gotoxy(18,8);
    printf("  DO:):");

    //Sleep(300);

    gotoxy(20,10);
    printf("A:side for hospital");

    //Sleep(300);


    gotoxy(20,12);
    printf("U:side for reception");



    //Sleep(300);


    gotoxy(20,14);
    printf("G:side for stranger");

    gotoxy(50,8);
    printf("     OR:");

    //Sleep(300);


    gotoxy(55,10);
    printf("B:flow blood");

    //Sleep(300);


    gotoxy(55,12);
    printf("E:24 hours");


    //Sleep(300);


    gotoxy(55,14);
    printf("I:Know labaid");

    gotoxy(83,8);
    printf("   EXIT:");


    //Sleep(300);

    gotoxy(86,10);
    printf("come again");


    //Sleep(300);

    gotoxy(17,25);
    printf("   MY Choice: ");

}


//choice



void choice()

{

    char ch;

    ch=toupper(getche());

    if(ch=='A')
    {
        system("cls");
        admin();
    }
    else if(ch=='U')
    {
        system("cls");
        user();
    }
    else if(ch=='B')
    {
        system("cls");
        b_bank();
    }
    else if(ch=='E')
    {
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(3,3);
        printf("      Emergency Numbers: ");

        printf("\n\t\tAMBULANCE : 01711845118");

        gotoxy(5,18);
        printf("Press For Home Or Back: ");

        ch = toupper(getche());

        if(ch)
            main_page();
    }
    else if(ch=='I')
    {
        system("cls");


//       about();


    }
    else if(ch=='C')
    {
        exit(1);
    }
    else if(ch=='G')
    {
        Guest();
    }

}


//ADMIN FUNCTION


void admin()

{
    system("cls");
    system("color 71");
    if(get_pass())
    {
        animation();
        admin_page();
    }
    else
    {
        system("cls");
        system("color 47");

        gotoxy(52,10);
        printf("Invalid User!!\n");

        gotoxy(0,26);
        printf("Press Enter To Go Back!");

        gotoxy(96,26);
        printf("Press 'M' To Go To Menu!");


        gotoxy(57,26);

        ch=toupper(getch());

        if(ch==ENTER)
        {
            system("cls");
            admin();
        }
        else if(ch=='M')
        {
            main_page();
        }
        else
        {
            exit(1);

        }
    }
}


BOOLEAN  get_pass()

{
    system("cls");
    system("color 71");

    char name[20],pass[20];

    gotoxy(6,6);
    printf("USERNAME: ");

    gotoxy(6,8);
    printf("PASSWORD: ");

    while(1)
    {
        gotoxy(16,6);
        gets(name);
        if(strcmp(name,"\0")==0)
        {
            gotoxy(6,16);
            printf("This field can't be blank");

            continue;
        }
        else
        {
            break;
        }
    }
    gotoxy(16,8);

    i=0;

    while(1)

    {
        ch=getch();

        if(ch==ENTER||ch==TAB)
        {
            pass[i]='\0';
            if(i==0)
            {
                gotoxy(6,16);
                printf("This field can't be blank");
                gotoxy(16,8);

                continue;
            }
            else
            {
                break;
            }
        }
        else if(ch==BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {
            pass[i++]=ch;
            printf("* \b");
        }
    }
    while(1)

    {
        if(strcmp(pass,"\0")==0)
        {
            gotoxy(6,16);
            printf("This Field Can't Be Blank");

            continue;
        }
        else
        {
            break;
        }
    }

    if(strcmp(name,"POWER LAB")==0 && strcmp(pass,"cse104")==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


void admin_page()

{
    system("cls");
    system("color F0");

    gotoxy(5,0);
    printf("<BACK");

    gotoxy(6,3);
    printf("HOME");

    //notification

    gotoxy(21,3);

    int n;

    n = notif();

    printf("APPOINTMENTS(%d)",n);


    //


    gotoxy(46,3);
    printf("PATIENTS");

    gotoxy(65,3);
    printf("DOCTORS");

    gotoxy(86,3);
    printf("NURSES");

    gotoxy(106,3);
    printf("OTHERS");

    for(i=5; i<=112; i++)
    {
        gotoxy(i,4);
        printf("%c",205);
    }
    for(i=5; i<=112; i++)
    {
        gotoxy(i,2);
        printf("%c",205);
    }

    for(i=5; i<=112; i++)

{
        gotoxy(i,22);
        printf("%c",205);
    }

    gotoxy(80,0);
    printf("SEARCH:");

    gotoxy(5,24);
    printf("PRESS THE FIRST CHARACTER TO GO: ");

    admin_choice();
}

int notif()

{
    f = fopen("guest.txt","r");

    i = 0;

    while(!feof(f))

    {
        fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",&appoint[i].name,&appoint[i].age,&appoint[i].phone,&appoint[i].doct.name,&appoint[i].doct.depertment);

        if(strcmp(appoint[i].name,"\0")==0 && strcmp(appoint[i].phone,"\0")==0)
        {
            i=0;
            return i;
        }
        else
        {
            i++;
        }
    }

    fclose(f);


    return i;
}

void admin_choice()

{
    ch = toupper(getch());

    if(ch=='H')
    {
        main_page();
    }
    else if(ch=='A')
    {
        Apointment();
    }
    else if(ch=='P')
    {
        admin_pat();
    }
    else if(ch=='D')
    {

        //doctors();
    }
    else if(ch=='N')
    {

        //nurses();
    }
    else if(ch=='O')
    {

        //others();
    }
    else if(ch=='S')
    {
        admin_search();
    }
    else
    {
        main_page();
    }

}


void admin_search()

{
    char searc[1000];

    gotoxy(88,0);
    gets(searc);

    if(strcmp(searc,"main")==0||strncmp(searc,"main",3)==0)
    {
        main_page();
    }

}

void Apointment()

{

    gotoxy(20,5);
    printf("See Appointments");

    gotoxy(29,24);
    ch = toupper(getche());

    if(ch=='S')

{
        system("cls");
        system("color 5F");

        gotoxy(1,1);

        printf("<back");
        gotoxy(110,1);

        Time();

        gotoxy(48,2);
        printf("All Appointments Today");

        f = fopen("guest.txt","r");

        i=0;

        while(!feof(f))

        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",guest[i].name,guest[i].age,guest[i].phone,guest[i].doctor,guest[i].depertment);

            printf("\n\tAppointment %d:",i+1);

            printf("\n\n\t\tNAME       : %s",guest[i].name);

            printf("\n\t\tAGE        : %s",guest[i].age);

            printf("\n\t\tPhone      : %s",guest[i].phone);

            printf("\n\t\tDoctor     : %s",guest[i].doctor);

            printf("\n\t\tDepartment : %s\n",guest[i].depertment);

            printf("\n");

            i++;
        }
        fclose(f);

        printf("\n\n\tCommand To Go Back Or Home:");

        ch = toupper(getche());

        if(ch=='H')
        {
            main_page();
        }
        else if(ch==BKSP)
        {
            admin_page();
        }
    }
    else if(ch==BKSP)
    {
        admin_page();
    }
}


void admin_pat()
{
    gotoxy(43,6);
    printf("Add Patient");

    gotoxy(43,8);
    printf("Search Patient");

    gotoxy(43,10);
    printf("Edit Bill");

    gotoxy(5,24);
    printf("PRESS THE FIRST CHARACTER TO GO: ");

    ch = toupper(getch());

    if(ch==BKSP)

    {

        admin_page();
    }

    else if(ch=='A')

    {

        add_me();
    }

    else if(ch=='S')

    {

        search_me();
    }

    else if(ch=='E')

    {


        //edit_bill();
    }

    else

    {

        admin_page();
    }

}


void add_me()

{

    system("cls");
    system("color F0");

    f = fopen("user.txt","r");

    i=0;

    int cabin=0,ward=0;

    while(!feof(f))

    {
        fscanf(f,"%[^:]:%[^:]:%d:%[^:]:%c:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%[^:]:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d: ",&usr[i].name,&usr[i].pass,&usr[i].age,&usr[i].blood,&usr[i].gender,&usr[i].phone,&usr[i].address.vill,&usr[i].address.thana,&usr[i].address.dist,&usr[i].disease,&usr[i].room,&usr[i].room_num,&usr[i].consult,&usr[i].admit.day,&usr[i].admit.month,&usr[i].admit.year,&usr[i].release.day,&usr[i].release.month,&usr[i].release.year,&usr[i].bill.medi,&usr[i].bill.check,&usr[i].bill.doc,&usr[i].bill.hos,&usr[i].bill.ambu,&usr[i].bill.rent,&usr[i].bill.ope,&usr[i].bill.paid);


        if(strcmp(usr[i].room,"Cabin")==0)

        {

            cabin++;
        }

        else

        {

            ward++;
        }

        i++;
    }

    gotoxy(1,1);
    printf("<back");

    gotoxy(8,5);
    printf("Add Patient In:");

    gotoxy(23,7);
    printf("Cabin");

    gotoxy(23,9);
    printf("Ward");

    gotoxy(8,25);
    printf("Select Room Choice: ");

    gotoxy(27,25);
    ch = toupper(getche());


    if(ch==BKSP)

    {

        admin_page();
    }

    else if(ch=='C')

    {

        if(cabin>CABIN)

        {

            system("cls");
            system("color 47");

            gotoxy(49,10);
            printf("NO SEAT AVAILABLE!!\n");

            gotoxy(0,26);
            printf("Press Enter To Go Back!");

            gotoxy(98,26);
            printf("Press M To Go To Menu!");

            gotoxy(57,26);
            ch=toupper(getche());

            if(ch==ENTER)

            {
                system("cls");
                add_me();
            }

            else if(ch=='M')

            {

                admin_page();

            }
        }
        else
        {
            fclose(f);
            cab_add();
        }
    }

    else if(ch=='W')

    {
        if(ward>WARD)
        {
            system("cls");
            system("color 47");

            gotoxy(49,10);
            printf("NO SEAT AVAILABLE!!\n");

            gotoxy(0,26);
            printf("Press Enter To Go Back!");

            gotoxy(98,26);
            printf("Press M To Go To Menu!");

            gotoxy(57,26);
            ch=toupper(getche());

            if(ch==ENTER)
            {
                system("cls");
                add_me();
            }

            else if(ch=='M')

            {
                admin_page();
            }
        }

        else

        {
            fclose(f);
            ward_add();

        }
    }

}

void cab_add()

{
    system("cls");
    system("color 6F");

    char name[50],pass[50],bg[10],gen;
    char phone[20],vill[30],thana[30],dist[30],consult[30];
    int room_num,age;
    char room[30],disease[30];
    int aday,amonth,ayear,rday,rmonth,ryear,medi,check,doc,hos,ambu,rent,ope,paid;

    strcpy(room,"Cabin");

    rday = 0,rmonth = 0,ryear = 0;
    medi= 0,check= 0,doc= 0,hos= 0,ambu= 0,rent= 0,ope= 0,paid= 0;

    f = fopen("user.txt","a+");

    gotoxy(108,1);

    Time();

    gotoxy(1,1);

    printf("<back");
    gotoxy(18,5);

    printf("Name        : ");
    gotoxy(18,7);

    printf("Password    : ");
    gotoxy(18,9);

    printf("Age         : ");
    gotoxy(18,11);

    printf("Blood Group : ");
    gotoxy(18,13);

    printf("Gender      : ");
    gotoxy(18,15);

    printf("Phone       : ");
    gotoxy(18,17);

    printf("Village     : ");
    gotoxy(18,19);

    printf("Thana       : ");
    gotoxy(18,21);

    printf("District    : ");
    gotoxy(62,5);

    printf("Disease     : ");
    gotoxy(62,7);

    printf("Consultant  : ");
    gotoxy(62,9);

    printf("Room Number : ");
    gotoxy(62,11);

    printf("Admit Day   : ");
    gotoxy(62,13);

    printf("Admit Month : ");
    gotoxy(62,15);

    printf("Admit Year  : ");
    gotoxy(32,5);

    gets(name);
    gotoxy(32,7);

    gets(pass);
    gotoxy(32,9);

    scanf("%d",&age);
    fflush(stdin);

    gotoxy(32,11);
    gets(bg);

    gotoxy(32,13);
    scanf("%c",&gen);

    fflush(stdin);

    gotoxy(32,15);
    gets(phone);

    gotoxy(32,17);
    gets(vill);

    gotoxy(32,19);
    gets(thana);

    gotoxy(32,21);
    gets(dist);

    gotoxy(76,5);
    gets(disease);

    gotoxy(76,7);
    gets(consult);

    gotoxy(76,9);
    scanf("%d",&room_num);

    //fflush(stdin);

    gotoxy(76,11);
    scanf("%d",&aday);

    //fflush(stdin);

    gotoxy(76,13);
    scanf("%d",&amonth);

    //fflush(stdin);

    gotoxy(76,15);
    scanf("%d",&ayear);

    fflush(stdin);


    for(i=0; i<1; i++)

    {


        fprintf(f,"%s:%s:%d:%s:%c:%s:%s:%s:%s:%s:%s:%d:%s:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d: ",name,pass,age,bg,gen,phone,vill,thana,dist,disease,room,room_num,consult,aday,amonth,ayear,rday,rmonth,ryear,medi,check,doc,hos,ambu,rent,ope,paid);
        printf("\n");

    }

    fclose(f);

    printf("\n\n\n\n\n\n\n\n\t\t  Press To Go Back Or home: ");
    ch = toupper(getche());

    if(ch==BKSP)
    {

        add_me();

    }

    else

    {

        admin_page();
    }

}

void ward_add()

{
    system("cls");
    system("color 6F");

    char name[50],pass[50],bg[10],gen;

    char phone[20],vill[30],thana[30],dist[30],consult[30];

    int room_num,age;

    char room[30],disease[30];

    int aday,amonth,ayear,rday,rmonth,ryear,medi,check,doc,hos,ambu,rent,ope,paid;

    strcpy(room,"Ward");

    rday = 0,rmonth = 0,ryear = 0;
    medi= 0,check= 0,doc= 0,hos= 0,ambu= 0,rent= 0,ope= 0,paid= 0;

    f = fopen("user.txt","a+");

    gotoxy(108,1);
    Time();

    gotoxy(1,1);
    printf("<back");

    gotoxy(18,5);

    printf("Name        : ");

    gotoxy(18,7);

    printf("Password    : ");

    gotoxy(18,9);

    printf("Age         : ");

    gotoxy(18,11);

    printf("Blood Group : ");

    gotoxy(18,13);

    printf("Gender      : ");

    gotoxy(18,15);

    printf("Phone       : ");

    gotoxy(18,17);

    printf("Village     : ");

    gotoxy(18,19);

    printf("Thana       : ");

    gotoxy(18,21);

    printf("District    : ");

    gotoxy(62,5);

    printf("Disease     : ");

    gotoxy(62,7);

    printf("Consultant  : ");

    gotoxy(62,9);

    printf("Room Number : ");

    gotoxy(62,11);

    printf("Admit Day   : ");

    gotoxy(62,13);

    printf("Admit Month : ");

    gotoxy(62,15);

    printf("Admit Year  : ");

    gotoxy(32,5);
    gets(name);
    gotoxy(32,7);

    gets(pass);
    gotoxy(32,9);

    scanf("%d",&age);

    fflush(stdin);
    gotoxy(32,11);

    gets(bg);
    gotoxy(32,13);

    scanf("%c",&gen);
    fflush(stdin);

    gotoxy(32,15);
    gets(phone);

    gotoxy(32,17);
    gets(vill);

    gotoxy(32,19);
    gets(thana);

    gotoxy(32,21);
    gets(dist);

    gotoxy(76,5);
    gets(disease);

    gotoxy(76,7);
    gets(consult);

    gotoxy(76,9);
    scanf("%d",&room_num);


    //fflush(stdin);

    gotoxy(76,11);
    scanf("%d",&aday);

    //fflush(stdin);


    gotoxy(76,13);
    scanf("%d",&amonth);


    //fflush(stdin);


    gotoxy(76,15);
    scanf("%d",&ayear);
    fflush(stdin);


    for(i=0; i<1; i++)

    {
        fprintf(f,"%s:%s:%d:%s:%c:%s:%s:%s:%s:%s:%s:%d:%s:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d: ",name,pass,age,bg,gen,phone,vill,thana,dist,disease,room,room_num,consult,aday,amonth,ayear,rday,rmonth,ryear,medi,check,doc,hos,ambu,rent,ope,paid);
        printf("\n");

    }

    fclose(f);
    printf("\n\n\n\n\n\n\n\n\t\t  Press To Go Back Or home: ");

    ch = toupper(getche());

    if(ch==BKSP)
    {
        add_me();
    }

    else

    {
        admin_page();
    }
}

void search_me()

{
    system("cls");
    system("color F0");

    f = fopen("user.txt","r");
    i=0,patient=0;

    while(!feof(f))

    {
        fscanf(f,"%[^:]:%[^:]:%d:%[^:]:%c:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%[^:]:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d: ",&usr[i].name,&usr[i].pass,&usr[i].age,&usr[i].blood,&usr[i].gender,&usr[i].phone,&usr[i].address.vill,&usr[i].address.thana,&usr[i].address.dist,&usr[i].disease,&usr[i].room,&usr[i].room_num,&usr[i].consult,&usr[i].admit.day,&usr[i].admit.month,&usr[i].admit.year,&usr[i].release.day,&usr[i].release.month,&usr[i].release.year,&usr[i].bill.medi,&usr[i].bill.check,&usr[i].bill.doc,&usr[i].bill.hos,&usr[i].bill.ambu,&usr[i].bill.rent,&usr[i].bill.ope,&usr[i].bill.paid);

        i++;
        patient++;
    }

    gotoxy(1,1);
    printf("<back");

    gotoxy(6,4);
    printf("Search Patient By: ");

    gotoxy(24,6);
    printf("Name");

    gotoxy(24,8);
    printf("Age");

    gotoxy(24,10);
    printf("Blood Group");

    gotoxy(24,12);
    printf("Gender");

    gotoxy(24,14);
    printf("Disease");

    gotoxy(24,16);
    printf("Place");

    gotoxy(6,22);
    printf("Select Your Destination: ");

    ch = toupper(getche());

    if(ch==BKSP)
    {
        admin_page();

    }

    else if(ch=='N')

    {



l:

        system("cls");

        gotoxy(1,1);
        printf("<back");

        char name[40];

        gotoxy(8,3);
        printf("Enter The Patient Name: ");

        gets(name);
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(8,3);
        printf(">>Search For '%s'",name);

        for(i=0; i<patient; i++)

        {
            if(strncmp(name,usr[i].name,4)==0)

            {
                printf("\n\n\t\tNAME    :  %s\n",usr[i].name);

                printf("\t\tAGE     : %d\n",usr[i].age);

                printf("\t\tSEX     : %c\n",usr[i].gender);

                printf("\t\tPHONE   : %s\n",usr[i].phone);

                printf("\t\tADRRESS : \n\n");

                printf("  \t\t   village  : %s\n",usr[i].address.vill);

                printf("  \t\t   thana    : %s\n",usr[i].address.thana);

                printf("  \t\t   district : %s\n",usr[i].address.dist);
            }
        }

        printf("\n\n\n\tPress For Further Query: ");

        ch = toupper(getche());
        if(ch==BKSP)

        {
            goto l;
        }
        else if(ch=='M')
        {
            main_page();
        }
        else
        {
            exit(1);
        }
    }
    else if(ch=='A')
    {



level:


        system("cls");

        gotoxy(1,1);
        printf("<back");

        int age1,age2;

        gotoxy(8,3);
        printf("Enter The Patient Age");

        gotoxy(27,5);
        printf("From : ");

        scanf("%d",&age1);
        fflush(stdin);

        gotoxy(27,7);
        printf("To   : ");

        scanf("%d",&age2);

        fflush(stdin);
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(8,3);
        printf(">>Search For Patient Between %d - %d:\n",age1,age2);

        for(i=0; i<patient; i++)

        {
            if(usr[i].age>=age1 && usr[i].age<=age2)

            {
                printf("\n\t  Result %d:",i+1);

                printf("\n\t\tNAME    :  %s\n",usr[i].name);

                printf("\t\tAGE     : %d\n",usr[i].age);

                printf("\t\tSEX     : %c\n",usr[i].gender);

                printf("\t\tPHONE   : %s\n",usr[i].phone);

                printf("\t\tADRRESS : \n\n");

                printf("  \t\t   village  : %s\n",usr[i].address.vill);

                printf("  \t\t   thana    : %s\n",usr[i].address.thana);

                printf("  \t\t   district : %s\n",usr[i].address.dist);
            }
        }

        printf("\n\n\n\tPress For Further Query: ");
        ch = toupper(getche());

        if(ch==BKSP)
        {
            goto level;
        }
        else if(ch=='M')
        {
            main_page();
        }
        else
        {
            exit(1);
        }
    }
    else if(ch=='G')
    {


lev:


        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(8,3);
        printf("Enter Patient Gender: ");

        ch = toupper(getchar());

        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(8,3);
        printf(">>Search For %c Patient ",ch);


        for(i=0; i<patient; i++)

        {
            if(usr[i].gender==ch)

            {
                printf("\n\t  Result %d:",i+1);

                printf("\n\t\tNAME    :  %s\n",usr[i].name);

                printf("\t\tAGE     : %d\n",usr[i].age);

                printf("\t\tSEX     : %c\n",usr[i].gender);

                printf("\t\tPHONE   : %s\n",usr[i].phone);

                printf("\t\tADRRESS : \n\n");

                printf("  \t\t   village  : %s\n",usr[i].address.vill);

                printf("  \t\t   thana    : %s\n",usr[i].address.thana);

                printf("  \t\t   district : %s\n",usr[i].address.dist);
            }

        }

        printf("\n\n\n\tPress For Further Query: ");
        ch = toupper(getche());

        if(ch==BKSP)

        {

            goto lev;

        }

        else if(ch=='M')

        {

            main();
        }

        else

        {

            exit(1);
        }
    }

    else if(ch=='B')

    {


l2:


        system("cls");

        gotoxy(1,1);
        printf("<back");

        char grp[40];

        gotoxy(8,3);
        printf("Enter The Patient Group: ");

        gets(grp);
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(8,3);
        printf(">>Search For '%s'",grp);


        for(i=0; i<patient; i++)

       {


            if(strcmp(grp,usr[i].blood)==0)

            {
                printf("\n\t  Result %d:",i+1);

                printf("\n\t\tNAME    :  %s\n",usr[i].name);

                printf("\t\tAGE     : %d\n",usr[i].age);

                printf("\t\tSEX     : %c\n",usr[i].gender);

                printf("\t\tPHONE   : %s\n",usr[i].phone);

                printf("\t\tADRRESS : \n\n");

                printf("  \t\t   village  : %s\n",usr[i].address.vill);

                printf("  \t\t   thana    : %s\n",usr[i].address.thana);

                printf("  \t\t   district : %s\n",usr[i].address.dist);

            }

        }

        printf("\n\n\n\tPress For Further Query: ");
        ch = toupper(getche());

        if(ch==BKSP)

        {

            goto l2;

        }

        else if(ch=='M')

        {

            main_page();

        }

        else

        {

            exit(1);
        }
    }

    else if(ch=='D')

    {

l3:

        system("cls");

        gotoxy(1,1);
        printf("<back");

        char dise[40];

        gotoxy(8,3);
        printf("Enter The Patient Disease: ");

        gets(dise);
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(8,3);
        printf(">>Search For '%s'",dise);

        for(i=0; i<patient; i++)

        {
            if(strncmp(dise,usr[i].disease,4)==0)

            {
                printf("\n\t  Result %d:",i+1);

                printf("\n\t\tNAME    :  %s\n",usr[i].name);

                printf("\t\tAGE     : %d\n",usr[i].age);

                printf("\t\tSEX     : %c\n",usr[i].gender);

                printf("\t\tPHONE   : %s\n",usr[i].phone);

                printf("\t\tADRRESS : \n\n");

                printf("  \t\t   village  : %s\n",usr[i].address.vill);

                printf("  \t\t   thana    : %s\n",usr[i].address.thana);

                printf("  \t\t   district : %s\n",usr[i].address.dist);

            }

        }

        printf("\n\n\n\tPress For Further Query: ");
        ch = toupper(getche());

        if(ch==BKSP)

        {

            goto l3;
        }

        else if(ch=='M')

        {

            main_page();

        }

        else

        {

            exit(1);

        }
    }

    else if(ch=='P')

    {

l4:
        system("cls");

        gotoxy(1,1);
        printf("<back");

        char grp[40];

        gotoxy(8,3);
        printf("Enter The Patient Place: ");

        gets(grp);
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(8,3);
        printf(">>Search For '%s'",grp);

        for(i=0; i<patient; i++)

        {
            if(strcmp(grp,usr[i].address.vill)==0 || strcmp(grp,usr[i].address.thana)==0 || strcmp(grp,usr[i].address.dist)==0)

            {
                printf("\n\t  Result %d:",i+1);

                printf("\n\t\tNAME    :  %s\n",usr[i].name);

                printf("\t\tAGE     : %d\n",usr[i].age);

                printf("\t\tSEX     : %c\n",usr[i].gender);

                printf("\t\tPHONE   : %s\n",usr[i].phone);

                printf("\t\tADRRESS : \n\n");

                printf("  \t\t   village  : %s\n",usr[i].address.vill);

                printf("  \t\t   thana    : %s\n",usr[i].address.thana);

                printf("  \t\t   district : %s\n",usr[i].address.dist);
            }
        }

        printf("\n\n\n\tPress For Further Query: ");

        ch = toupper(getche());

        if(ch==BKSP)
        {

            goto l4;

        }

        else if(ch=='M')

        {

            main_page();

        }

        else

        {

           exit(1);
        }
    }

    fclose(f);
}


//User Function

void billShow(int x)

{

    f = fopen("user.txt","r");

    for(i=0; i<=x; i++)

    {

        fscanf(f,"%[^:]:%[^:]:%d:%[^:]:%c:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%[^:]:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d: ",&usr[i].name,&usr[i].pass,&usr[i].age,&usr[i].blood,&usr[i].gender,&usr[i].phone,&usr[i].address.vill,&usr[i].address.thana,&usr[i].address.dist,&usr[i].disease,&usr[i].room,&usr[i].room_num,&usr[i].consult,&usr[i].admit.day,&usr[i].admit.month,&usr[i].admit.year,&usr[i].release.day,&usr[i].release.month,&usr[i].release.year,&usr[i].bill.medi,&usr[i].bill.check,&usr[i].bill.doc,&usr[i].bill.hos,&usr[i].bill.ambu,&usr[i].bill.rent,&usr[i].bill.ope,&usr[i].bill.paid);

    }


    //animation();

    system("cls");

    //_____________________

    gotoxy(2,1);
    printf("< back");

    gotoxy(96,1);
    printf("NAME: %s",usr[x].name);

    gotoxy(96,2);
    printf("DATE: ");

    Time();
//______________________

    box();

    gotoxy(12,6);
    printf("Sl. No");

    gotoxy(98,6);
    printf("Charges");

    gotoxy(50,6);
    printf("Services");

//----------------------------//

    gotoxy(14,8);
    printf("1");

    gotoxy(22,8);
    printf("Medicine");

    gotoxy(100,8);
    printf("%d",usr[x].bill.medi);

    gotoxy(14,10);
    printf("2");

    gotoxy(22,10);
    printf("Hospital Charge");

    gotoxy(100,10);
    printf("%d",usr[x].bill.hos);

    gotoxy(14,12);
    printf("3");

    gotoxy(22,12);
    printf("Operation");

    gotoxy(100,12);
    printf("%d",usr[x].bill.ope);

    gotoxy(14,14);
    printf("4");

    gotoxy(22,14);
    printf("Doctor Fee");

    gotoxy(100,14);
    printf("%d",usr[x].bill.doc);

    gotoxy(14,16);
    printf("5");

    gotoxy(22,16);
    printf("Rent Fee");

    gotoxy(100,16);
    printf("%d",usr[x].bill.rent);

    gotoxy(14,18);
    printf("6");

    gotoxy(22,18);
    printf("Check-Up");

    gotoxy(100,18);
    printf("%d",usr[x].bill.check);

    gotoxy(14,20);
    printf("7");

    gotoxy(22,20);
    printf("Ambulance");

    gotoxy(100,20);
    printf("%d",usr[x].bill.ambu);

    gotoxy(14,22);
    printf("8");

    gotoxy(22,22);
    printf("Paid");

    gotoxy(100,22);
    printf("%d",usr[x].bill.paid);

    int baki = (usr[x].bill.ambu+usr[x].bill.check+usr[x].bill.doc+usr[x].bill.hos+usr[x].bill.medi+usr[x].bill.ope+usr[x].bill.rent)-usr[x].bill.paid;
    gotoxy(83,26);

    printf("Total");
    gotoxy(100,26);

    printf("%d",baki);
    gotoxy(9,1);

    ch=getche();

    if(ch==BKSP)

    {
        user_choice(x);
    }
    fclose(f);

}

void user_choice(int x)

{
    system("cls");

    system("color 3F");

    f = fopen("user.txt","r");

    for(i=0; i<=x; i++)

    {

        fscanf(f,"%[^:]:%[^:]:%d:%[^:]:%c:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%[^:]:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d: ",&usr[i].name,&usr[i].pass,&usr[i].age,&usr[i].blood,&usr[i].gender,&usr[i].phone,&usr[i].address.vill,&usr[i].address.thana,&usr[i].address.dist,&usr[i].disease,&usr[i].room,&usr[i].room_num,&usr[i].consult,&usr[i].admit.day,&usr[i].admit.month,&usr[i].admit.year,&usr[i].release.day,&usr[i].release.month,&usr[i].release.year,&usr[i].bill.medi,&usr[i].bill.check,&usr[i].bill.doc,&usr[i].bill.hos,&usr[i].bill.ambu,&usr[i].bill.rent,&usr[i].bill.ope,&usr[i].bill.paid);

    }


    gotoxy(10,5);
    printf("Bill");

    gotoxy(10,8);
    printf("Consultant");

//_________________________

    gotoxy(2,1);
    printf("< back");

    gotoxy(96,1);
    printf("NAME: %s",usr[x].name);

    gotoxy(96,2);
    printf("DATE: ");

    Time();
//________________________

    gotoxy(10,25);
    printf("Press The First Character Of Your Destination: ");

    ch = toupper(getche());


    if(ch=='B')

    {
        animation();
        billShow(x);

    }

    else if(ch==BKSP)

    {
        user();
    }

    else if(ch=='C')

    {
        system("cls");

        gotoxy(1,1);
        printf("<back");

        rewind(f);
        fp = fopen("doctor.txt","r");

        flag=0;

        int j;

        i=0;

        while(!feof(fp))

        {
            fscanf(fp,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);


            if(strcmp(doc[i].name,usr[x].consult)==0)

            {
                printf("\n\n\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\n\n");

                flag=1;

                break;
            }

            i++;
        }

        fclose(fp);

        if(flag==0)

        {
            system("cls");

            gotoxy(15,15);
            printf("No Result Found");

            gotoxy(1,1);
            printf("<back");
        }

        gotoxy(9,20);
        printf("Command To Go Back Or Home: ");

        ch = toupper(getche());

        if(ch==BKSP)
        {
            user_choice(x);
        }

        else if(ch=='H')

        {
            main_page();
        }

        else

        {
            exit(1);
        }
    }
    else

    {

        exit(1);

    }
}


void user()

{
    system("cls");
    system("color 3F");


    f = fopen("user.txt","r");

    i=0,patient=0;

    while(!feof(f))

    {
        fscanf(f,"%[^:]:%[^:]:%d:%[^:]:%c:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d:%[^:]:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d:%d: ",&usr[i].name,&usr[i].pass,&usr[i].age,&usr[i].blood,&usr[i].gender,&usr[i].phone,&usr[i].address.vill,&usr[i].address.thana,&usr[i].address.dist,&usr[i].disease,&usr[i].room,&usr[i].room_num,&usr[i].consult,&usr[i].admit.day,&usr[i].admit.month,&usr[i].admit.year,&usr[i].release.day,&usr[i].release.month,&usr[i].release.year,&usr[i].bill.medi,&usr[i].bill.check,&usr[i].bill.doc,&usr[i].bill.hos,&usr[i].bill.ambu,&usr[i].bill.rent,&usr[i].bill.ope,&usr[i].bill.paid);

        i++;
        patient++;
    }


    /* Declaration */

    char name[30],pass[20],ch;

    gotoxy(10,5);
    printf("USER NAME:");

    gotoxy(10,7);
    printf("PASSWORD:");

    while(1)
    {
        gotoxy(21,5);
        gets(name);

        if(strcmp(name,"\0")==0)

        {
            gotoxy(10,17);
            printf("This field can't be blank");

            continue;
        }

        else

        {

            break;
        }
    }

    i=0;

    gotoxy(20,7);

    while(1)

    {

        ch = getch();

        if(ch==ENTER || ch==TAB)

        {

            pass[i]='\0';

            if(i==0)

            {
                gotoxy(10,17);

                printf("This field can't be blank");
                gotoxy(20,7);

                continue;
            }

            else

                break;
        }

        else if(ch==BKSP)

        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {

            pass[i++]=ch;

            printf("* \b");
        }

    }

    for(i=0; i<patient; i++)

    {

        if(strcmp(usr[i].name,name)==0 && strcmp(usr[i].pass,pass)==0)

        {
            flag=1;
            animation();
            user_choice(i);

            break;
        }
    }

    if(flag==0)

    {
        animation();
        system("cls");
        system("color 47");

        gotoxy(52,10);
        printf("Invalid User!!\n");

        gotoxy(0,26);
        printf("Press Enter To Go Back!");

        gotoxy(98,26);
        printf("Press M To Go To Menu!");

        gotoxy(57,26);
        ch=toupper(getche());

        if(ch==ENTER)

        {
            system("cls");
            user();
        }

        else if(ch=='M')

        {
            main_page();

        }
    }
    fclose(f);
}


//blood bank


void b_bank()

{
    system("cls");
    system("color 74");

    int donor;
    char choose;
    gotoxy(5,3);

    printf("Donor List.");
    gotoxy(5,4);

    printf("Blood Group.");
    gotoxy(5,5);

    printf("Place.");
    gotoxy(5,6);

    printf("Menu.");
    gotoxy(5,7);

    printf("Close");
    gotoxy(1,1);

    printf("<back");
    gotoxy(5,9);

    printf("Select Your Destination: ");
    choose=toupper(getche());


    f = fopen("bank.txt","a+");

    i=0,donor=0;

    while(!feof(f))

    {
        fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d ",work[i].name,work[i].group,work[i].road,work[i].thana,work[i].dis,work[i].phone,&work[i].age);

        i++;
        donor++;
    }

    if(choose=='D')

    {

        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(37,0);
        printf("  || List Of All Donors ||\n\n\n\n");

        for(i=0; i<donor; i++)
        {
            printf("%2d %-22s %-12s %-22s %-22s %-12s %1d\n",i+1,work[i].name,work[i].group,work[i].road,work[i].thana,work[i].dis,work[i].age);
            printf("\n");
        }

        printf("\nPlease Enter Your Choice");
        ch = toupper(getche());

        if(ch==BKSP)

        {

            b_bank();
        }

        else if(ch=='M')

        {
            main_page();
        }

    }

    else if(choose=='B')

    {
        system("cls");

        gotoxy(2,4);
        printf("Put Your Desired Blood Group: ");

        char gp[10];
        gets(gp);
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(35,0);
        printf("List Of All %s Donor.\n\n\n\n",gp);



        f = fopen("bank.txt","r");

        int j=1;
        for(i=0; i<donor; i++)

        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d ",work[i].name,work[i].group,work[i].road,work[i].thana,work[i].dis,work[i].phone,&work[i].age);

            if(strcmp(work[i].group,gp)==0)

            {

                printf("%2d %-22s %-12s %-22s %-12s %1d\n",j,work[i].name,work[i].road,work[i].thana,work[i].dis,work[i].age);
                printf("\n");

                j++;

                flag=1;
            }

        }

        if(flag==0)

        {
            system("cls");
            system("color 47");

            gotoxy(46,11);
            printf("SORRY! NO SUCH DONAR FOUND!!\n");

            gotoxy(0,26);
            printf("Press Enter To Go Back!");

            gotoxy(96,26);
            printf("Press 'M' To Go To Menu!");

            gotoxy(57,26);
            ch=toupper(getche());

            if(ch==ENTER)

            {

                b_bank();

            }

            else if(ch=='M')

            {
                main();

            }
        }

        else

        {
            printf("Please Enter Choice For Main Or Back:");
            ch=toupper(getche());

            if(ch==BKSP)

            {
                b_bank();
            }
            else if(ch=='M')
            {
                main_page();
            }
            else
                exit(1);
        }

    }
    else if(choose=='P')
    {

        system("cls");

        gotoxy(2,4);
        printf("Put Your Desired Place Name: ");

        char gp[10];
        gets(gp);
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(35,0);
        printf("    List Of All Donors In %s.\n\n\n",gp);

        FILE *f;

        f = fopen("bank.txt","r");

        int j=1;
        for(i=0; i<donor; i++)

        {
            //fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%d ",work[i].name,work[i].group,work[i].road,work[i].thana,work[i].dis,work[i].phone,&work[i].age);

            if(strcmp(work[i].road,gp)==0)

            {

                printf("%2d %-22s %-12s %-22s %-12s %1d\n",j,work[i].name,work[i].group,work[i].thana,work[i].dis,work[i].age);
                printf("\n");

                j++;

            }

            else if(strcmp(work[i].thana,gp)==0)

            {

                printf("%2d %-22s %-12s %-22s %-12s %1d\n",j,work[i].name,work[i].group,work[i].road,work[i].dis,work[i].age);
                printf("\n");

                j++;
            }

            else if(strcmp(work[i].dis,gp)==0)

            {

                printf("\t\t%2d %-22s %-12s %-22s %-12s %1d\n",j,work[i].name,work[i].group,work[i].road,work[i].thana,work[i].age);
                printf("\n");

                j++;
            }

            else

            {
                system("cls");
                system("color 47");

                gotoxy(46,11);
                printf("SORRY! NO SUCH DONAR FOUND!!\n");

                gotoxy(0,26);
                printf("Press Enter To Go Back!");

                gotoxy(96,26);
                printf("Press 'M' To Go To Menu!");

                gotoxy(57,26);
                ch=toupper(getche());

                if(ch==ENTER)
                {

                    b_bank();

                }

               else if(ch=='M')

                {
                    main_page();
                }
                flag=1;
            }

        }

        if(flag==0)

        {
            printf("Please Enter Your Choice:");
            ch=toupper(getche());

            if(ch==BKSP)
            {
                b_bank();
            }

            else if(ch=='M')

            {

                main_page();

            }
        }
    }

    else if(choose=='M')

    {

        main();

    }

    else if(choose=='C')

    {

        exit(1);

    }

    else if(choose==BKSP)

    {

        main_page();

    }

    else

    {

        b_bank();

    }

    fclose(f);

}

//GUEST FUNCTION


void Guest()
{
    system("cls");
    system("color 2F");

    gotoxy(1,1);

    printf("<back");
    gotoxy(6,6);

    printf("Find a doctor");
    gotoxy(6,8);

    printf("Book an appointment");
    gotoxy(6,20);

    printf("Enter First Character Of Your Destination:");
    gotoxy(48,20);

    ch = toupper(getche());
    if(ch=='B')

    {

        Appiontment();

    }

    else if(ch=='F')

    {

        DOCTOR();

    }

    else if(ch==BKSP)

    {


        main_page();

    }

    else

    {

        main_page();
    }

}

void DOCTOR()

{
    system("cls");
    system("color 2F");


    //FILE READ


    f = fopen("doctor.txt","r");
    while(!feof(f))

    {
        fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);


        doct++;
    }


    fclose(f);



    //DESIGN



    gotoxy(2,1);
    printf("<back");

    gotoxy(86,1);
    printf("Search:");

    gotoxy(18,5);
    printf("Neurologist");

    gotoxy(36,5);
    printf("Cardiologist");

    gotoxy(56,5);
    printf("Orthopedician");

    gotoxy(76,5);
    printf("Gastroenterologist");

    gotoxy(76,9);
    printf("Dentist");

    gotoxy(18,9);
    printf("Zynecologist");

    gotoxy(36,9);
    printf("Psychiatric");

    gotoxy(56,9);
    printf("Urologist");

    gotoxy(18,20);
    printf("Please select Your destination:");

    ch = toupper(getch());

    if(ch=='S')

    {
        char serc[100];

        gotoxy(94,1);
        gets(serc);

        if(strncmp("main",serc,3)==0)

       {


            main_page();


        }

    }

    else if(ch==BKSP)
    {

        Guest();
    }


    else if(ch=='U')
    {
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(5,4);
        printf(">>Search For 'Urologist'\n");

        f=fopen("doctor.txt","r");


        //rewind(f);


        i=0;

        while(!feof(f))
        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);

            if(strcmp(doc[i].depert,"Urologist")==0)

            {
                printf("\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\tFOR SERIAL    : %s\n",doc[i].phone);

                printf("\n\n");

            }

            i++;
        }

        printf("\n\n\tPress To Go Back Or Home: ");

        ch = toupper(getche());

       if(ch==BKSP)

        {

            DOCTOR();

        }

        else if(ch=='H')

        {

            main_page();

        }

        else

        {

            exit(1);

        }

        fclose(f);
    }

    else if(ch=='C')

    {
        system("cls");
        gotoxy(1,1);

        printf("<back");
        gotoxy(5,4);

        printf(">>Search For 'Cardiologist'\n");
        f=fopen("doctor.txt","r");


        //rewind(f);


        i=0;

        while(!feof(f))
        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);

            if(strcmp(doc[i].depert,"Cardiologist")==0)

            {
                printf("\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\tFOR SERIAL    : %s\n",doc[i].phone);

                printf("\n\n");
            }

            i++;

        }

        printf("\n\n\tPress To Go Back Or Home: ");
        ch = toupper(getche());

        if(ch==BKSP)

        {

            DOCTOR();
        }

        else if(ch=='H')

        {

            main_page();

        }

       else

        {

            exit(1);
        }

        fclose(f);
    }

    else if(ch=='D')

    {
        system("cls");
        gotoxy(1,1);

        printf("<back");
        gotoxy(5,4);

        printf(">>Search For 'Dentist'\n");
        f=fopen("doctor.txt","r");


        //rewind(f);

        i=0;
        while(!feof(f))
        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);

            if(strcmp(doc[i].depert,"Dentist")==0)
            {

                printf("\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\tFOR SERIAL    : %s\n",doc[i].phone);

                printf("\n\n");
            }

            i++;
        }

        printf("\n\n\tPress To Go Back Or Home: ");
        ch = toupper(getche());

        if(ch==BKSP)

        {

            DOCTOR();
        }

        else if(ch=='H')

        {

            main_page();

        }

        else

        {

            exit(1);
        }

        fclose(f);
    }


    else if(ch=='G')

    {
        system("cls");
        gotoxy(1,1);

        printf("<back");
        gotoxy(5,4);

        printf(">>Search For 'Gastroenterologist'\n");
        f=fopen("doctor.txt","r");


        //rewind(f);

        i=0;

        while(!feof(f))

        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);

            if(strcmp(doc[i].depert,"Gastroenterologist")==0)

            {
                printf("\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\tFOR SERIAL    : %s\n",doc[i].phone);

                printf("\n\n");
            }

            i++;
        }

        printf("\n\n\tPress To Go Back Or Home: ");
        ch = toupper(getche());

        if(ch==BKSP)
        {

            DOCTOR();
        }

        else if(ch=='H')
        {

            main_page();

        }

        else

        {

            exit(1);
        }

        fclose(f);
    }

    else if(ch=='O')

    {
        system("cls");
        gotoxy(1,1);

        printf("<back");
        gotoxy(5,4);


        printf(">>Search For 'Orthopedician'\n");
        f=fopen("doctor.txt","r");


        //rewind(f);

        i=0;

        while(!feof(f))

        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);

            if(strcmp(doc[i].depert,"Orthopedician")==0)

            {
                printf("\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\tFOR SERIAL    : %s\n",doc[i].phone);

                printf("\n\n");

            }

            i++;

        }

        printf("\n\n\tPress To Go Back Or Home: ");
        ch = toupper(getche());

        if(ch==BKSP)

        {

            DOCTOR();
        }

        else if(ch=='H')

        {

            main_page();

        }

        else

        {

            exit(1);
        }


        fclose(f);
    }

    else if(ch=='Z')

    {
        system("cls");
        gotoxy(1,1);

        printf("<back");
        gotoxy(5,4);

        printf(">>Search For 'Gynecologist'\n");
        f=fopen("doctor.txt","r");


        //rewind(f);

        i=0;

        while(!feof(f))

        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);

            if(strcmp(doc[i].depert,"Gynecologist")==0)

            {
                printf("\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\tFOR SERIAL    : %s\n",doc[i].phone);

                printf("\n\n");
            }

            i++;

        }
        printf("\n\n\tPress To Go Back Or Home: ");
        ch = toupper(getche());

        if(ch==BKSP)
        {

            DOCTOR();

        }

        else if(ch=='H')

        {

            main_page();

        }

        else

        {

            exit(1);
        }

        fclose(f);
    }

    else if(ch=='P')

    {
        system("cls");
        gotoxy(1,1);

        printf("<back");
        gotoxy(5,4);

        printf(">>Search For 'Psychiatric'\n");
        f=fopen("doctor.txt","r");


        //rewind(f);


        i=0;

        while(!feof(f))

        {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);

            if(strcmp(doc[i].depert,"Psychiatric")==0)

            {
                printf("\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\tFOR SERIAL    : %s\n",doc[i].phone);

                printf("\n\n");

            }
            i++;

        }
        printf("\n\n\tPress To Go Back Or Home: ");
        ch = toupper(getche());

        if(ch==BKSP)
        {

            DOCTOR();

        }


        else if(ch=='H')

        {

            main_page();

        }


        else

        {

            exit(1);
        }

        fclose(f);
    }

    else if(ch=='N')

    {
        system("cls");

        gotoxy(1,1);
        printf("<back");

        gotoxy(5,4);
        printf(">>Search For 'Neurosurgeon'\n");

        f=fopen("doctor.txt","r");


        //rewind(f);

        i=0;

        while(!feof(f))

       {
            fscanf(f,"%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]: ",doc[i].name,doc[i].gender,doc[i].depert,doc[i].quali,doc[i].visit.f_day,doc[i].visit.t_day,doc[i].visit.f_time,doc[i].visit.t_time,doc[i].phone,doc[i].regis);

            if(strcmp(doc[i].depert,"Neurosurgeon")==0)
            {
                printf("\n\n\tNAME          : %s\n",doc[i].name);

                printf("\tQUALIFICATION : %s\n",doc[i].quali);

                printf("\tVISITING HOUR : %s-%s\n",doc[i].visit.f_time,doc[i].visit.t_time);

                printf("\tVISITING DAY  : %s-%s\n",doc[i].visit.f_day,doc[i].visit.t_day);

                printf("\tFOR SERIAL    : %s\n",doc[i].phone);

                printf("\n\n");
            }
            i++;

        }

        printf("\n\n\tPress To Go Back Or Home: ");
        ch = toupper(getche());

        if(ch==BKSP)
        {

            DOCTOR();
        }

        else if(ch=='H')

        {

            main_page();
        }

        else

        {

            exit(1);

        }
    }

    else

    {

        main_page();
    }

}
void Appiontment()
{
    char name[30],phone[15],doctor[30],depertment[30];
    char age[20];

    system("cls");
    system("color 2F");

    gotoxy(1,1);
    printf("<back");

    gotoxy(37,1);
    printf("Please Fill Up The Requirements");

    gotoxy(26,5);
    printf("*NAME       :");

    gotoxy(27,8);
    printf("AGE        :");

    gotoxy(26,11);
    printf("*PHONE      :");

    gotoxy(26,14);
    printf("*DOCTOR     :");

    gotoxy(26,17);
    printf("*DEPERTMENT :");

    while(1)
    {
        gotoxy(40,5);
        gets(name);

        if(strcmp(name,"\0")==0)
        {
            gotoxy(26,21);
            printf("This Field Can't Be Blank");


            continue;
        }


        else

        {

            break;

        }


    }


    gotoxy(40,8);
    gets(age);

    while(1)
    {
        gotoxy(40,11);
        gets(phone);

        if(strcmp(phone,"\0")==0)
        {

            gotoxy(26,21);
            printf("This Field Can't Be Blank");


            continue;
        }


        else

        {


            break;

        }


    }



    while(1)

    {
        gotoxy(40,14);
        gets(doctor);


       if(strcmp(doctor,"\0")==0)
        {
            gotoxy(26,21);
            printf("This Field Can't Be Blank");


            continue;
        }



        else



        {



            break;


        }


    }



   while(1)


    {


        gotoxy(40,17);
        gets(depertment);



        if(strcmp(depertment,"\0")==0)


       {


            gotoxy(26,21);

            printf("This Field Can't Be Blank");



            continue;
        }



        else



        {





            break;



        }



    }




    f = fopen("guest.txt","a+");






    for(i=0; i<1; i++)



    {




        fprintf(f,"%s:%s:%s:%s:%s: ",name,age,phone,doctor,depertment);
        fputc('\n',f);



    }



    fclose(f);




    printf("\n\n\tPress To Go Back Or Home: ");




    ch=toupper(getche());




    if(ch==BKSP)


    {



        Guest();


    }


    else if(ch=='H')


    {


        main_page();

    }


    else

    {



        exit(1);


    }



}


