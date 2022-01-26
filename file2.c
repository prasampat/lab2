#include <stdio.h>
#include <stdlib.h>

void sorting(int *arr, const int arrlength){
  int i;
  int tempvariable,currentloc;
  for(i=1; i<arrlength; i++){
    currentloc = arr[i];
    tempvariable = i-1;
    while((tempvariable >= 0) && (currentloc < arr[tempvariable])){
      arr[tempvariable + 1] = arr[tempvariable];
      tempvariable--;
    }
    arr[tempvariable+1] = currentloc;
  }
}

int main() {
  int i;
  int arrlength;
  printf("Please enter tot no. of elements: ");
  scanf("%d", &arrlength);

  int arr[arrlength];
  printf("Please enter %d items in the array: \n", arrlength);
  for(i=0; i<arrlength; i++) {
    scanf("%d", &arr[i]);
  }

  sorting(arr,arrlength);
  
  printf("\nInsertion sorted list of array: \n");
  printf("{ ");
  for(i=0; i<arrlength; i++) {
    printf("%d ",arr[i]);
  }
  printf("}\n");
  return 0;
}
