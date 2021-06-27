//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r')
        &&(char2 == 's'))
        {
            return 1;
        }
    else if ((char2 == 'r')
        &&(char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p')
        &&(char2 == 'r'))
        {
            return 1;
        }
    else if ((char2 == 'p')
        &&(char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's')
        && (char2 == 'p'))
        {
            return 1;
        }
    else if ((char2 == 's')
        && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock ,Paper ,Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        //Take player 1's input
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You chose%d\n", playerChar);

        //Generate computers's Input
        printf("Computers's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU chose%d\n", compChar);
       
        //compare the Scores
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU got it!\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("It's a Draw!\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got It!\n");
        }
        printf("You: %d\nCPU: %d\n\n",playerScore, compScore);
    }

    if (playerScore > compScore)
    {
        printf("You win the game\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the game\n");
    }
    else{
        printf("It's a Draw\n");
    }
    return 0;
}

/**#include<stdio.h>
#include<conio.h>
void main()
{
    char player1[10],player2[10];
    int in1,in2;
    printf("HELLO, WELCOME TO ROCK, PAPER, SCISSORS GAME\nWhat is player1's name?\n ");
    scanf("%s",&player1);
    printf("What is player2's name?\n ");
    scanf("%s",&player2);

    printf("%s and %s please follow the rules for the game\nPress 1 for stone\nPress 2 for paper\nPress 3 for scissors\n\n",player1,player2);
    printf("Now let us start the game\n");

    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",player1);
    scanf("%d",&in1);
    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",player2);
    scanf("%d",&in2);

    if ((in1==1 && in2==1) || (in1==2 && in2==2) || (in1==3 && in2==3))
    printf("Neither %s nor %s won, it is a draw",player1,player2);

    else if ((in1==1 && in2==3) || (in1==3 && in2==2) || (in1==1 && in2==3)|| (in1==2 && in2==1) || (in1==3 && in2==2) || (in1==1 && in2==3))
    printf("Congrats %s! You won!!!!",player1);

    else if ((in1==1 && in2==2) || (in1==3 && in2==1) || (in1==1 && in2==2)|| (in1==2 && in2==3))
    printf("Congrats %s! You won!!!!",player2);
    
}**/
