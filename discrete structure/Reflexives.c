#include <stdio.h>

int main(){
  int size,ordered_pairs;
  printf("This program was run by Aryan Maharjan\n");
  printf("Enter size of array: ");
  scanf("%d",&size);
  int set[size];
  for(int i=0; i<size; i++){
    printf("Enter value of set[%d]: ", i);
    scanf("%d",&set[i]);
  }
  printf("Entered set: { ");
  for(int i=0; i<size; i++){
    printf("%d ",set[i]);
  }
  printf("}\n");
  printf("How many ordered pairs do you want to enter: ");
  scanf("%d",&ordered_pairs);
  int arr1[ordered_pairs],arr2[ordered_pairs];
  for(int i=0; i<ordered_pairs; i++){
    printf("Enter value of arr1[%d]: ",i);
    scanf("%d",&arr1[i]);
  }
  for(int i=0; i<ordered_pairs; i++){
    printf("Enter value of arr2[%d]: ",i);
    scanf("%d",&arr2[i]);
  }
  printf("\nOrdered Pairs are:\n{");
  for(int i=0; i<ordered_pairs; i++){
    printf("(%d , %d)", arr1[i], arr2[i]);
    if(i == ordered_pairs - 1){
      break;
    }
    printf(", ");
  }
  printf("}");
  int r = 0;
  for(int i=0; i<ordered_pairs; i++){
    if(arr1[i] == arr2[i]){
      r++;
    }
  }
  if(r == size){
    printf("\nThe relation is reflexive.\n");
  }else{
    printf("\nThe relation is not reflexive.\n");
  }
  return 0;
}