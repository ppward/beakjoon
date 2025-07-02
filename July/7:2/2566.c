#include<stdio.h>
int main(){
  int n[9][9],max[3]={0};
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      scanf("%d",&n[i][j]);
      if(n[i][j]>max){
         max[0]=n[i][j];
         max[1]=i;
         max[2]=j;
      };
    }
  }
  printf("%d\n", max[0]);
  printf("%d %d\n", max[1]+1, max[2]+1);
  return 0;
}