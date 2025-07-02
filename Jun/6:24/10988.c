#include<stdio.h>
#include<string.h>
int main(){
  char p[101];
  int check=0;
  scanf("%s",p);
  int m= strlen(p);
  for(int i=0;i<m;i++){
    if(p[i]==p[m-i-1]) check+=0;
    else check-=1;
  }
  if(check==0)printf("1");
  else printf("0");
  return 0;
}