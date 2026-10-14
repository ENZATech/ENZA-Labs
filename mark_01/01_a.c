#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Number Guessing simple game.

int main(){
    int x;
    int z;
    int a;
    int n=0;

    printf("Choose the level you want to play. \n");
    printf("  EASY [1-10]\n");
    printf("  Hard [1-100] \n");
    printf("  INSANE [1-1000] \n");
    printf("Enter '1' for EASY, '2' for HARD, and '3' for INSANE: ");
    
    do{
    scanf("%d", &a);

    // Level-1: EASY.
        if(a==1){
            srand(time(0));
            int y = (rand() % 10) + 1;    

            printf("A number has been generated between 1-10. \nYou have to guess that number. \n");
            do{
            printf("Enter your guessed number: ");
            scanf("%d", &x);
            
            if(x>=1 && x<=10){
                n++;

                if(x>y){
                    printf("Lower number please. \n");
                }
                else if(x<y){
                    printf("Higher number please. \n");
                }
                else{
                    printf("Congratulations!! you have guessed the number. \n");
                }
            }
            else{
                printf("Invalid imput, enter a number between 1 - 10. \n");
            }

            }while(x!=y);
            
            if(n==1){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Time traveller man.! \n");
            }
            else if(n==2){
                printf("You guessed the number in just %d times \n", n);
                printf("You're really Binary Search Beast.! \n");
            }
            else if(n>2 && n<=4){
                printf("You guessed the number in just %d times \n", n);
                printf("You're Logic Master.! \n");
            }
            else if(n>4 && n<=6){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Linear Searcher.! \n");
            }
            else if(n>6){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Lost Tourist.! \n");
            }
            else{
                printf("Something is wrong. \n");
            }
        }

    // Level-2: HARD.
        else if(a==2){
            srand(time(0));
            int y = (rand() % 100) + 1;

            printf("A number has been generated between 1-100. \nYou have to guess that number. \n");
            do{
            printf("Enter your guessed number: ");
            scanf("%d", &x);
            
            if(x>=1 && x<=100){
                n++;

                if(x>y){
                    printf("Lower number please. \n");
                }
                else if(x<y){
                    printf("Higher number please. \n");
                }
                else{
                    printf("Congratulations!! you have guessed the number. \n");
                }
            }
            else{
                printf("Invalid imput, enter a number between 1 - 100. \n");
            }

            }while(x!=y);
            
            if(n==1){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Time traveller man.! \n");
            }
            else if(n>1 && n<=4){
                printf("You guessed the number in just %d times \n", n);
                printf("You're really Binary Search Beast.! \n");
            }
            else if(n>4 && n<=8){
                printf("You guessed the number in just %d times \n", n);
                printf("You're Logic Master.! \n");
            }
            else if(n>8 && n<=11){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Linear Searcher.! \n");
            }
            else if(n>11){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Lost Tourist.! \n");
            }
            else{
                printf("Something is wrong. \n");
            }
        }

    // Level-3: INSANE.
        else if(a==3){
            srand(time(0));
            int y = (rand() % 1000) + 1;

            printf("A number has been generated between 1-1000. \nYou have to guess that number. \n");
            do{
            printf("Enter your guessed number: ");
            scanf("%d", &x);
            
            if(x>=1 && x<=1000){
                n++;

                if(x>y){
                    printf("Enter a lower number please. \n");
                }
                else if(x<y){
                    printf("Enter a higher number please. \n");
                }
                else{
                    printf("Congratulations!! you have guessed the number. \n");
                }
            }
            else{
            printf("Invalid imput, enter a number between 1 - 1000. \n");
            }

            }while(x!=y);
            
            if(n<=3){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Time traveller man.! \n");
            }
            else if(n>3 && n<=7){
                printf("You guessed the number in just %d times \n", n);
                printf("You're really Binary Search Beast.! \n");
            }
            else if(n>7 && n<=10){
                printf("You guessed the number in just %d times \n", n);
                printf("You're Logic Master.! \n");
            }
            else if(n>10 && n<=15){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Linear Searcher.! \n");
            }
            else if(n>15){
                printf("You guessed the number in just %d times \n", n);
                printf("You're a Lost Tourist.! \n");
            }
            else{
                printf("Something is wrong. \n");
            }
        }
        else{
            printf("Invalid Input. \n");
            printf("Enter a valid input again: ");
        }
    }while(a < 1 || a > 3);

    return 0;
}