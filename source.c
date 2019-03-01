#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int place5(int (*board1)[SIZE],int (*board2)[SIZE])
{
    static int countTurn=1;

    int h=0, w=0,hCheck=0,wCheck=0;
    printf("%s","Choose a height coordinate to place the carrier,which is 5 spots long.(1-9): ");
    do{
        scanf("%d",&h);
        if(h>=1 && h<=9)
            hCheck = 1;
        else
            printf("Entry not valid.");

    }while(hCheck != 1);
    printf("%s","Choose a width coordinate to place the carrier.(1-9): ");
    do{
        scanf("%d",&w);
        if(w>=1 && w<=9)
            wCheck = 1;
        else
            printf("Entry not valid.");

    }while(wCheck != 1);
    puts("Choose an option:");

    int choice = 0; //varibale which holds users choice
    int optNum = 1; // for printing the correct option number
    int optArray[9]={0};//array to hold the coordinates of the user's choice

    int opt1[]={0,h-4,w,h-3,w,h-2,w,h-1,w,h,w};
    int opt2[]={0,h,w,h+1,w,h+2,w,h+3,w,h+4,w};
    int opt3[]={0,h,w-4,h,w-3,h,w-2,h,w-1,h,w};
    int opt4[]={0,h,w,h,w+1,h,w+2,h,w+3,h,w+4};

    if(h-5>=0)
    {
        printf("%d. %d,%d %d,%d %d,%d %d,%d %d,%d \n",optNum,h-4,w,h-3,w,h-2,w,h-1,w,h,w);
        opt1[0]=optNum;
        optNum++;
    }
    if(h+5<=10)
    {
        printf("%d. %d,%d %d,%d %d,%d %d,%d %d,%d \n",optNum,h,w,h+1,w,h+2,w,h+3,w,h+4,w);
        opt2[0]=optNum;
        optNum++;
    }
    if(w-5>=0)
    {
        printf("%d. %d,%d %d,%d %d,%d %d,%d %d,%d \n",optNum,h,w-4,h,w-3,h,w-2,h,w-1,h,w);
        opt3[0]=optNum;
        optNum++;
    }
    if(w+5<=10)
    {
        printf("%d. %d,%d %d,%d %d,%d %d,%d %d,%d \n",optNum,h,w,h,w+1,h,w+2,h,w+3,h,w+4);
        opt4[0]=optNum;
        optNum++;
    }

    int check= 0;
    while(check==0)
    {
        scanf("%d",&choice);
        if(choice >= 1 && choice <= (optNum-1))
            check = 1;
        else
            printf("Enter valid input.\n");
    }

    if(opt1[0]==choice)
    {
     for(int i=0;i<10;++i)
        {
            optArray[i]=opt1[i+1];
        }
    }
    else if(opt2[0]==choice)
    {
     for(int i=0;i<10;++i)
        {
            optArray[i]=opt2[i+1];
        }
    }
    else if(opt3[0]==choice)
    {
     for(int i=0;i<10;++i)
        {
            optArray[i]=opt3[i+1];
        }
    }
    else if(opt4[0]==choice)
    {
     for(int i=0;i<10;++i)
        {
            optArray[i]=opt4[i+1];
        }
    }
    else
        printf("Input not valid.");

    if(countTurn == 1)
    {
        for(int i=0;i<10;i+=2)
        {
            board1[optArray[i]][optArray[i+1]]=5;
        }
    }
    if(countTurn >= 2)
    {
        for(int i=0;i<10;i+=2)
        {
            board2[optArray[i]][optArray[i+1]]=5;
        }
    }

    countTurn++;
    return 0;
}

int place3(int (*board1)[SIZE],int (*board2)[SIZE])
{
    static int countTurn=1;

    int h=0, w=0,hCheck=0,wCheck=0;
    printf("%s","Choose a height coordinate to place the cruiser,which is 3 spots long.(1-9): ");
    do{
        scanf("%d",&h);
        if(h>=1 && h<=9)
            hCheck = 1;
        else
            printf("Entry not valid.");

    }while(hCheck != 1);
    printf("%s","Choose a width coordinate to place the cruiser.(1-9): ");
    do{
        scanf("%d",&w);
        if(w>=1 && w<=9)
            wCheck = 1;
        else
            printf("Entry not valid.");

    }while(wCheck != 1);
    puts("Choose an option:");

    int choice = 0; //varibale which holds users choice
    int optNum = 1; // for printing the correct option number
    int optArray[5]={0};//array to hold the coordinates of the user's choice

    int opt1[]={0,h-2,w,h-1,w,h,w};
    int opt2[]={0,h,w,h+1,w,h+2,w};
    int opt3[]={0,h,w-2,h,w-1,h,w};
    int opt4[]={0,h,w,h,w+1,h,w+2};

    if(h-3>=0)
    {
        printf("%d. %d,%d %d,%d %d,%d \n",optNum,h-2,w,h-1,w,h,w);
        opt1[0]=optNum;
        optNum++;
    }
    if(h+3<=10)
    {
        printf("%d. %d,%d %d,%d %d,%d \n",optNum,h,w,h+1,w,h+2,w);
        opt2[0]=optNum;
        optNum++;
    }
    if(w-3>0)
    {
        printf("%d. %d,%d %d,%d %d,%d \n",optNum,h,w-2,h,w-1,h,w);
        opt3[0]=optNum;
        optNum++;
    }
    if(w+3<=10)
    {
        printf("%d. %d,%d %d,%d %d,%d \n",optNum,h,w,h,w+1,h,w+2);
        opt4[0]=optNum;
        optNum++;
    }

    int check= 0;
    while(check==0)
    {
        scanf("%d",&choice);
        if(choice >= 1 && choice <= (optNum-1))
            check = 1;
        else
            printf("Enter valid input.\n");
    }

    if(opt1[0]==choice)
    {
     for(int i=0;i<6;++i)
        {
            optArray[i]=opt1[i+1];
        }
    }
    else if(opt2[0]==choice)
    {
     for(int i=0;i<6;++i)
        {
            optArray[i]=opt2[i+1];
        }
    }
    else if(opt3[0]==choice)
    {
     for(int i=0;i<6;++i)
        {
            optArray[i]=opt3[i+1];
        }
    }
    else if(opt4[0]==choice)
    {
     for(int i=0;i<6;++i)
        {
            optArray[i]=opt4[i+1];
        }
    }
    else
        printf("Input not valid.");

    if(countTurn == 1)
    {
        for(int i=0;i<6;i+=2)
        {

            if(board1[optArray[i]][optArray[i+1]] == 0)
                board1[optArray[i]][optArray[i+1]] = 3;
            else
            {
                puts("This ship overlaps with another, try again");
                return 3;
            }
        }
    }
    if(countTurn >= 2)
    {
        for(int i=0;i<6;i+=2)
        {

            if(board2[optArray[i]][optArray[i+1]] == 0)
                board2[optArray[i]][optArray[i+1]] = 3;
            else
            {
                puts("This ship overlaps with another, try again");
                return 3;
            }
        }
    }

    countTurn++;
    return 0;
}

int place4(int (*board1)[SIZE],int (*board2)[SIZE])
{
    static int countTurn=1;

    int h=0, w=0,hCheck=0,wCheck=0;
    printf("%s","Choose a height coordinate to place the battleship,which is 4 spots long.(1-9): ");
    do{
        scanf("%d",&h);
        if(h>=1 && h<=9)
            hCheck = 1;
        else
            printf("Entry not valid.");

    }while(hCheck != 1);

    printf("%s","Choose a width coordinate to place the battleship.(1-9): ");
    do{
        scanf("%d",&w);
        if(w>=1 && w<=9)
            wCheck = 1;
        else
            printf("Entry not valid.");

    }while(wCheck != 1);
    puts("Choose an option:");

    int choice = 0; //varibale which holds users choice
    int optNum = 1; // for printing the correct option number
    int optArray[7]={0};//array to hold the coordinates of the user's choice

    int opt1[]={0,h-3,w,h-2,w,h-1,w,h,w};
    int opt2[]={0,h,w,h+1,w,h+2,w,h+3,w};
    int opt3[]={0,h,w-3,h,w-2,h,w-1,h,w};
    int opt4[]={0,h,w,h,w+1,h,w+2,h,w+3};

    if(h-4>=0)
    {
        printf("%d. %d,%d %d,%d %d,%d %d,%d \n",optNum,h-3,w,h-2,w,h-1,w,h,w);
        opt1[0]=optNum;
        optNum++;
    }
    if(h+4<=10)
    {
        printf("%d. %d,%d %d,%d %d,%d %d,%d \n",optNum,h,w,h+1,w,h+2,w,h+3,w);
        opt2[0]=optNum;
        optNum++;
    }
    if(w-4>=0)
    {
        printf("%d. %d,%d %d,%d %d,%d %d,%d \n",optNum,h,w-3,h,w-2,h,w-1,h,w);
        opt3[0]=optNum;
        optNum++;
    }
    if(w+4<=10)
    {
        printf("%d. %d,%d %d,%d %d,%d %d,%d \n",optNum,h,w,h,w+1,h,w+2,h,w+3);
        opt4[0]=optNum;
        optNum++;
    }


    int check= 0;
    while(check==0)
    {
        scanf("%d",&choice);
        if(choice >= 1 && choice <= (optNum-1))
            check = 1;
        else
            printf("Enter valid input.\n");
    }

    if(opt1[0]==choice)
    {
     for(int i=0;i<8;++i)
        {
            optArray[i]=opt1[i+1];
        }
    }
    else if(opt2[0]==choice)
    {
     for(int i=0;i<8;++i)
        {
            optArray[i]=opt2[i+1];
        }
    }
    else if(opt3[0]==choice)
    {
     for(int i=0;i<8;++i)
        {
            optArray[i]=opt3[i+1];
        }
    }
    else if(opt4[0]==choice)
    {
     for(int i=0;i<8;++i)
        {
            optArray[i]=opt4[i+1];
        }
    }
    else
        printf("Input not valid.");

    if(countTurn == 1)
    {
        for(int i=0;i<8;i+=2)
        {
            if(board1[optArray[i]][optArray[i+1]]==0)
                board1[optArray[i]][optArray[i+1]]=4;
            else
            {
                puts("This ship overlaps with another, try again");
                return 4;
            }
        }
    }
    if(countTurn >= 2)
    {
        for(int i=0;i<8;i+=2)
        {
            if(board2[optArray[i]][optArray[i+1]]==0)
                board2[optArray[i]][optArray[i+1]]=4;
            else
            {
                puts("This ship overlaps with another, try again");
                return 4;
            }
        }
    }
    countTurn++;
    return 0;
}

int main()
{
    printf("%s","\tWelcome to Battleship\n");
    int board1[SIZE][SIZE] = {{0}};
    int board2[SIZE][SIZE] = {{0}};
    int p1Attack[SIZE][SIZE] = {{126}};
    int p2Attack[SIZE][SIZE] = {{126}};   //Setting up the blank board

    for(int i=0;i<SIZE;++i)
    {
        for(int j=0;j<SIZE;++j)
        {
            p1Attack[i][j] = 126;
            p2Attack[i][j] = 126;
            if(i==0 && j==0)
            {

                board1[i][j] = 0;
                board2[i][j] = 0;
                p1Attack[i][j] = 48;
                p2Attack[i][j] = 48;
            }
            if(i == 0 && j > 0)
            {
                board1[i][j]=j;
                board2[i][j]=j;
                p1Attack[i][j] = j+48;
                p2Attack[i][j] = j+48;
            }
            if(i > 0 && j == 0)
            {
                board1[i][j] = i;
                board2[i][j] = i;
                p1Attack[i][j] = i+48;
                p2Attack[i][j] = i+48;
            }
        }
    }
    for(int i=0;i<SIZE;++i)            //Printing out the board
    {
        puts("");
        for(int j=0;j<SIZE;++j)
        {
            printf("%3d",board1[i][j]);      //Formatting to line up the columns and rows nicely
        }
    }

    printf("\n\tReady player 1?\n\tPress any key to continue: "); //waiting for user to continue
    getchar();

    place5(board1,board2);
    while(place3(board1,board2)==3)
    {
        if(place3(board1,board2)==0)
            break;
    }
    while(place4(board1,board2)==4)
    {
        if(place4(board1,board2)==0)
            break;
    }
    for(int i=0;i<SIZE;++i)            //Printing out the board for player 1
    {
        puts("");
        for(int j=0;j<SIZE;++j)
        {
            printf("%3d",board1[i][j]);      //Formatting to line up the columns and rows nicely
        }
    }
    printf("\nPress any key to clear screen: "); //waiting for user to continue
    getchar();
    getchar();
    system("cls"); //cls for windows

    place5(board1,board2);
    while(place3(board1,board2)==3)
    {
        if(place3(board1,board2)==0)
            break;
    }
    while(place4(board1,board2)==4)
    {
        if(place4(board1,board2)==0)
            break;
    }

    for(int i=0;i<SIZE;++i)            //Printing out the board for player 1
    {
        puts("");
        for(int j=0;j<SIZE;++j)
        {
            printf("%3d",board2[i][j]);      //Formatting to line up the columns and rows nicely
        }
    }

    printf("\nPress any key to clear screen: "); //waiting for user to continue
    getchar();
    system("cls"); //cls for windows
                                            //game setup is finished
//------------------------------------------//game will now commence
    int p1Score = 0,p2Score=0;
    while(p1Score != 12 || p2Score != 12)
    {
        int h=0, w=0,hCheck=0,wCheck=0;
        puts("Player 1's Turn");
        for(int i=0;i<SIZE;++i)
        {
            puts("");
                for(int j=0;j<SIZE;++j)
                {
                    printf("%3c",p1Attack[i][j]);
                }
        }
        int valid1 = 1;
        while(valid1 != 0)
        {

        printf("%s","\nChoose a height coordinate to attack.(1-9): ");
        do{
            scanf("%d",&h);
            if(h>=1 && h<=9)
                hCheck = 1;
            else
                printf("Entry not valid.");

        }while(hCheck != 1);
        printf("%s","\nChoose a width coordinate to attack.(1-9): ");
        do{
            scanf("%d",&w);
            if(w>=1 && w<=9)
                wCheck = 1;
            else
                printf("Entry not valid.");

        }while(wCheck != 1);

        if(p1Attack[h][w] != 126)
        {
            puts("You already guessed this coordinate.");
            continue;
        }
        else
            valid1 = 0;

        if(board2[h][w]!=0)
        {
            puts("Hit!");
            p1Attack[h][w] = 72;
            p1Score++;
        }
        else if(board2[h][w]==0)
        {
            puts("Miss!");
            p1Attack[h][w] = 109;
        }

        }
        puts("\nPress any key to clear screen: "); //waiting for user to continue
        getchar();
        getchar();
        system("cls"); //cls for windows
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


        h=0, w=0,hCheck=0,wCheck=0;
        puts("Player 2's Turn");
        for(int i=0;i<SIZE;++i)
        {
            puts("");
                for(int j=0;j<SIZE;++j)
                {
                    printf("%3c",p2Attack[i][j]);
                }
        }
        int valid2 = 1;
        while(valid2 != 0)
        {

        printf("%s","Choose a height coordinate to attack.(1-9): ");
        do{
            scanf("%d",&h);
            if(h>=1 && h<=9)
                hCheck = 1;
            else
                printf("Entry not valid.");

        }while(hCheck != 1);
        printf("%s","Choose a width coordinate to attack.(1-9): ");
        do{
            scanf("%d",&w);
            if(w>=1 && w<=9)
                wCheck = 1;
            else
                printf("Entry not valid.");

        }while(wCheck != 1);

        if(p2Attack[h][w] != 126)
        {
            puts("You already guessed this coordinate.");
            continue;
        }
        else
            valid2 = 0;

        if(board2[h][w]!=0)
        {
            puts("Hit!");
            p2Attack[h][w] = 72;
            p2Score++;
        }
        else if(board1[h][w]==0)
        {
            puts("Miss!");
            p2Attack[h][w] = 109;
        }
        }
        puts("Press any key to clear screen: "); //waiting for user to continue
        getchar();
        getchar();
        system("cls"); //cls for windows
    }

    if(p1Score >= 12)
        puts("Player 1 wins");
    else if(p2Score >=12)
        puts("Player 1 wins");

    return 0;
}
