#include <stdio.h>

int main() {
  printf("Welcome! I am going to guess the number in your mind");
  printf("\nHold a number in your mind. Number should be between 1 and 100 (inclusive)");
  printf("\n\nEvery time I give you my guess, please reply as per following:\n");
  printf("L : If my guess is larger than the number in your mind\n");
  printf("S : If my guess is smaller than the number in your mind\n");
  printf("E : If my guess is matching with the number in your mind\n\n");

  int guess, start = 0, end = 100, attmpt = 0;
  char ch='D';
  while(ch != 'E') {
   switch (ch) {
      case 'S': start = guess+1; break;
      case 'L': end = guess-1; break;
    }
    guess = (start + end)/2;
    printf("My guess is %d Give reply (L/S/E) : ", guess);
    scanf("\n%c", &ch);
    attmpt++;
  }
  printf("\nWoo-Hoo! I guessed your number in %d attempts\n", attmpt);
  printf("Thanks for playing it was fun!");
}
