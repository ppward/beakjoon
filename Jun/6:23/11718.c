#include<stdio.h>
int main(){
  char p[101];
  while(fgets(p, sizeof(p),stdin)!=EOF){
  printf("%s",p);
  }
  return 0;
}