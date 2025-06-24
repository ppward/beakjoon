#include<stdio.h>
#include<ctype.h>
int main(){
  int i=0,a[26]={0},max=0,c=0;
  char p[1000001],maxChar='A';
  scanf("%s",p);
   while(*(p+i)!='\0'){
    *(p+i)=toupper(*(p+i));
    a[*(p+i)-'A']++;
    i++;
  }
  for(int j=0;j<26;j++){
    if(max<a[j]){
      max=a[j];
      maxChar='A'+j;
      c=1;
    } else if(max==a[j]){
      c++;
    }
  }
  if(c>1)printf("?");
  else printf("%c",maxChar);
}