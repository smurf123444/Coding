

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int quit = 0;
	int score = 0;
	int correct_count = 0;
	int incorrect_count = 0;

	srand(time(NULL));
	while(!quit){

		int top_dice1 = (rand() % 6) + 1;						
		int top_dice2 = (rand() % 6) + 1;
		int sum = top_dice1 + top_dice2;
		printf("Computer rolled two dice...Guess the sum\n");
		printf("Enter any <=0 value to terminate. \n");
		printf("Enter your guess: ");
		int guess ;
		scanf("%d", &guess);
		if (guess <= 0){
			quit = 1;
		}
		else if (guess == sum){
			correct_count++;
			score += 10;
			printf("Bravo!!! You were correct +10\n");
			printf("\n");
		}
		else{
			incorrect_count++;
			score -= 5;
			printf("Darn!!! Bad attempt, -5\n");
			printf("Sum was: %d\n", sum);
			printf("\n");
		}

		printf("\n");
		printf("Total Correct:   %d\n", correct_count);
		printf("Total Incorrect: %d\n", incorrect_count);
		printf("Score:           %d\n", score);
		printf("\n");
	}
	printf("Thank you for playing...\n");
}