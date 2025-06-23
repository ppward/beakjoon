#include<stdio.h>

int main(){
  int i=0, sum=0;
  char p[16];
  scanf("%s",p);
  while(*(p+i)!='\0'){
    if(*(p+i)-'0'==1)  sum+=2;
    else if(*(p+i)>= 65 && *(p+i)<= 67)  sum+=3;
    else if(*(p+i)>= 68 && *(p+i)<= 70 ) sum+=4;
    else if(*(p+i)>= 71 && *(p+i)<= 73 ) sum+=5;
    else if(*(p+i)>= 74 && *(p+i)<= 76 ) sum+=6;
    else if(*(p+i)>= 77 && *(p+i)<= 79 ) sum+=7;
    else if(*(p+i)>= 80 && *(p+i)<= 83 ) sum+=8;
    else if(*(p+i)>= 84 && *(p+i)<= 86 ) sum+=9;
    else if(*(p+i)>= 87 && *(p+i)<= 90 ) sum+=10;
    else sum=11;
   i++;
  }
  printf("%d",sum);
  return 0;
}