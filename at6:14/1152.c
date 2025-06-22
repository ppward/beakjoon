#include<stdio.h>
#include<string.h>

int main(){
  int n=0;
  char p[10000],*token;  
    fgets(p, sizeof(p), stdin);
    p[strcspn(p, "\n")] = '\0'; 
    token = strtok(p, " ");
  while(token!=NULL){
     n++;
     token = strtok(NULL, " ");
    }
  printf("\n%d",n);
  return 0;
}