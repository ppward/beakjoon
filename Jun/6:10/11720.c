#include<stdio.h>
int main(){
  int n,sum=0;
  char c;
  scanf("%d",&n);
  getchar();
  for(int i=0;i<n;i++){
    scanf("%c",&c);
    sum+=c-'0';
  };
  printf("%d",sum);
}