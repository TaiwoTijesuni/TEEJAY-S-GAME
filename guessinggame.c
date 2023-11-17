#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int correctNumber;
    int guessNumber = 0;

    srand(time(NULL));
    int num = 50;

    correctNumber = rand() % num;

     printf("Welcome to the guessing game!\n\n");

    for(int i = 10; i >= 1; --i){

    printf("Remember, You have %d trials. So choose wisely.\n", i);
    printf("You can only choose between 0 and 50.\n\n");
    
    printf("Guess the number:\n ");
     scanf("%d", &guessNumber);

    if(guessNumber > num || guessNumber < 0){
        printf("Out of Range.\n");
    };
    

    if (guessNumber > correctNumber){
        printf("Wrong, your guess is larger.\n");
    }
    else if (guessNumber == correctNumber){
        printf("correct, good guess. Toodles.\n");
        break;
    }
    else {
        printf("Wrong, your guess is smaller.\n");
    }

     if(i == 1){
         printf("\nSorry, You have exhausted your trials.");
        break;
     };
    };


     return 0;
    }
   


    
