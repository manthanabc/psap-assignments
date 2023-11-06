#include <stdio.h>
#include <math.h>

int main() {
  
  int marks[] = {43, 27, 9, 1, 97, 43, 80, 5, 80, 51, 18, 12, 39, 47, 96, 20, 73, 27,
     47, 34, 96, 94, 91, 62, 42, 23, 12, 1, 83, 56, 95, 84, 18, 93, 33, 84, 74, 95,
     35, 8, 91, 68, 40, 72, 12, 58, 45, 98, 58, 10, 42, 77, 66, 14, 93, 49, 79, 20,
     2, 40, 87, 29, 95, 6, 82, 7, 11, 14, 82, 55, 75, 59};

  int freq[10] = { 0 };
  int size = sizeof(marks)/sizeof(marks[0]);
  int max = marks[0];
  int min = max, sum=0;
  double stdiv=0.0f, avg;
  
  for(int i=0; i<size; i++) {
    if(marks[i] < min) min = marks[i];
    if(marks[i] > max) max = marks[i];
    sum += marks[i];
    
    freq[((marks[i]==100)?99:marks[i])/10]++;
  }
  avg = (float)sum / size;

  for(int i=0; i<size; i++)
    stdiv += (avg-marks[i])*(avg-marks[i]);

  stdiv = sqrt(stdiv/size);

  printf("\n\nStats on the given marks");
  printf("\n\tCout of Values\t\t=\t%5d", size);
  printf("\n\tSum of Values\t\t=\t%5d", sum);
  printf("\n\tMinimum Value\t\t=\t%5d", min);
  printf("\n\tMaximum Value\t\t=\t%5d", max);
  printf("\n\tAverage Value\t\t=\t%.2f", avg);
  printf("\n\tStandard Deviation\t=\t%.2lf", stdiv);

  printf("\n\nFrequencies");

  for(int i=0; i<10; i++)
    printf("\n\tValues between %2d to %3d: %d", i*10, (i+1)*10, freq[i]);
  
  printf("\n\nFrequency Graph");
  printf("\n      |-------------------------------------------------");
  for(int i=0; i<10; i++) {
    printf("\n%2d-%-3d|", i*10, (i+1)*10);
    while(freq[i]---1) printf("="); printf("|");
  }
  printf("\n      |-------------------------------------------------");
  printf("\n        key - equals 1");
}