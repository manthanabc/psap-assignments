#include <stdio.h>

int main() {
      int start, numbers;

  printf("Give starting table: ");
      scanf("%d", &start);

      printf("Give number of tables: ");
      scanf("%d", &numbers);

      for(int i=1; i<= 10; i++) { 
        for(int j=0; j<numbers; j++) 
        printf("\t%d", (start+j)*i);
        printf("\n");
}
}
