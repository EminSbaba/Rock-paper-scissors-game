#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));



    int userOption,admin;
    int winCount=0,loseCount=0;


    printf("---------- Welcome to the rock paper scissors game----------\n");


    printf("\nToday you are playing against to Eminbaba41\n");



    do{
        printf("\n-------------------------\n");
        printf("Please enter your choice\n");
        printf("1-Rock\n2-Paper\n3-Scissors\n\n\n\n4-Quit the game\n");
        scanf("%d",&userOption);

        admin=rand()%2 + 1;
        //printf("%d",admin);
        /*1=rock
        2=paper
        3=scissors
        */
        switch(userOption){

    case 1: //rock
        if(admin==1 )
        {
            printf("\n Eminbaba41 had chosen the rock, this round is a draw \n");
            winCount++;
            loseCount++;
        }
        if(admin==2 )
        {
            printf("\n Eminbaba41 had chosen the paper, Eminbaba41 is win \n");
            loseCount++;

        }
        if(admin==3 )
        {
            printf("\n Eminbaba41 had chosen the scissors, you are win \n");
            winCount++;
        }

        break;

    case 2://paper
        if(admin==1 )
        {
            printf("\n Eminbaba41 had chosen the rock, you are win \n");
            winCount++;
        }
        if(admin==2 )
        {
            printf("\n Eminbaba41 had chosen the paper, this round is a draw \n");
             winCount++;
            loseCount++;
        }
        if(admin==3 )
        {
            printf("\n Eminbaba41 had chosen the scissors, Eminbaba41 is win \n");
            loseCount++;
        }

        break;

    case 3://scissors
        if(admin==1 )
        {
            printf("\n Eminbaba41 had chosen the rock, Eminbaba41 is win \n");
            loseCount++;
        }
        if(admin==2 )
        {
            printf("\n Eminbaba41 had chosen the paper, you are win \n");
            winCount++;
        }
        if(admin==3 )
        {
            printf("\n Eminbaba41 had chosen the scissors, this round is a draw \n");
             winCount++;
            loseCount++;
        }


        break;
    case 4:
        if(winCount>=loseCount)
        {
            printf("\n SCORE %d - %d",winCount,loseCount);
            printf("\nSee you lucky boy ,you will lose another time.  ");
        }
        else{
            printf("\nSee you later loser HAHAHAAHAHAH");
        }


        break;
            }

    }while(userOption!=4);


    return 0;
}
