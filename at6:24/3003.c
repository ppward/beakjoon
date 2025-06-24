#include<stdio.h>
int main(){
  int n[6]={1,1,2,2,2,8}, m;
  for(int i=0; i<6;i++){
    scanf("%d",&m);
    n[i]-=m;
  }
  for(int i=0; i<6;i++) printf("%d ",n[i]);
  return 0;
};