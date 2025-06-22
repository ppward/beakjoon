#include<stdio.h>
#include<string.h>
int main(){
  char p[4], s[4];
  int a[2],j=2, n=0;
  while(scanf("%s", p)!= EOF ){
    for(int i=0;i<3;i++){
      s[i] = p[j];
      j--;
    };
    j=2;
    a[n]=atoi(s);
    n++;
  }
  a[0]>a[1]?printf("%d",a[0]):printf("%d",a[1]);
}