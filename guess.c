#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int attmpt =0, guess, rndm;

  srand(time(0)); // Initialize the rng
  rndm = rand()%100 +1;
  puts("Welcome! I have a number between 1 to 100, can you guess it");
  
  while(++attmpt) {
    printf("\nGive your Guess : ");
    scanf("%d", &guess);
    if(!(guess-rndm)) break;
    printf("Your guess is %s than the number you are predicting\n", (guess > rndm)?"greater":"smaller");
  }
  printf("Congratulations! You have guessed the number in %d attempts",attmpt);
}
