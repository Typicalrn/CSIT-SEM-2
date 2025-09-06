#include <stdio.h>
int main(){
  int n,flag = 0,a,b;
  printf("This program was run by Aryan Maharjan\n");
  printf("Enter the number of ordered pairs: ");
  scanf("%d", &n);

  int relation[n][2];
  for(int i=0; i<n; i++){
    printf("Enter the value of relation[%d][0]: ", i);
    scanf("%d",&relation[i][0]);
    a = relation[i][0];
    printf("Enter the vlaue of relation[%d][1]: ", i);
    scanf("%d",&relation[i][1]);
    b = relation[i][1];
    flag = 0;
    for(int j = 0; j<n; j++){
      if(relation[j][0] == b && relation[j][1] == a){
        flag = 1;
        break;
      }
    }
  }
  printf("{ ");
  for(int i=0; i<n; i++){
    printf("(%d, %d)",relation[i][0],relation[i][1]);
    if(i == n-1){
      break;
    }
    printf(", ");
  }
  printf(" }\n");

  if(flag==0){
    printf("\nThe relation is not symmetric.");
  }else{
    printf("\nThe relation is symmetric.");
  }

}