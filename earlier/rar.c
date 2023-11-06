
#include <stdio.h>

int main() {
  int len, indx, operation, num;
  scanf("%d", &len);
  int arr[len+1];
  for(int i=0; i< len; i++)
    	scanf("%d", &arr[i]);
  scanf("%d %d %d", &operation, &indx, &num);
  
  if(operation == 1) {
  	if(operation >= indx) printf("Insertion not possible");
    for(int i=len; i>=indx; i--)
      arr[i]=arr[i-1];
    arr[indx-1] = num;
  } else {
  	if(operation >= indx) printf("Deletion not possible");    
  }
  
  for(int i=0; i<=len; i++)
    printf("%d ", arr[i]);
}