#include<stdio.h>
int main(){
  char p[5][16]={0};
  int r=0,c=0;
  for (int i = 0; i < 5; i++) {
      scanf("%s", p[i]);
  }
  for(int i=0;i<15;i++){
    for(int j=0;j<5;j++){
      if(p[j][i]!='\0') printf("%c",p[j][i]);
    }
    printf("\n");
  }
  return 0;
}