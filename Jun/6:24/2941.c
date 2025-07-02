#include<stdio.h>
#include<string.h>
int main(){
  int count=0;
  char p[101];
  scanf("%s",p);
  int len = strlen(p);
  for(int i=0;i<len;i++){
    switch (p[i]){
    case 'c':
      if(p[i+1]=='=' || p[i+1]=='-')i+=1;
      break;
    case 'd':
      if(p[i+1]=='z'&&p[i+2]=='=')i+=2;
      else if(p[i+1]=='-')i+=1;
      break;
    case 'l':
      if(p[i+1]=='j')i+=1;
      break;
    case 'n':
      if(p[i+1]=='j')i+=1;
      break;
    case 's':
      if(p[i+1]=='=')i+=1;
      break;
    case 'z':
      if(p[i+1]=='=')i+=1;
      break;
    default:
      break;
    }
    count++;
  }
  printf("%d",count);
  return 0;
}