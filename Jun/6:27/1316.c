#include<stdio.h>

int main(){
  int m, sum=0;
  char p[101];
  scanf("%d",&m);
  for(int i=0;i<m;i++){
    scanf("%s",p);
    char s1=0;//s1 이전/ s2가 현재
    for(int j=0;p[j]!='\0';j++){
      char s2=p[j],alpha[26]={0};
      if(s1!=s2){
        if(alpha[p[j]-'a']==1){sum++; break;}
        else alpha[p[j]-'a']=1;
      }
      s1=s2;
    }
  }
  printf("%d",m-sum);
  return 0;
}