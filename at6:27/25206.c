#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Score{
  char name[50];
  float allot;
  char grade[2];
};
int main(){
  int i=0, idx=0;
  struct Score s[20];
  char p[50];
  while(scanf("%s",p)!= EOF){
    switch(i%3){
      case 0:
         strcpy(s[idx].name, p);
        break;
      case 1:
        s[idx].allot =atof(p);
        break;
      case 2:
         strcpy(s[idx].grade, p);
         idx++;
        break;
    }
    i++;
  }
  float sumAllot=0, sumGrade=0;
  for(int j=0;j<20;j++){
    if(strcmp(s[j].grade,"P")!=0){
      sumAllot+=s[j].allot;
      //strcmp(str1, str2) == 0) 
      if(strcmp(s[j].grade,"A+")==0)sumGrade+=s[j].allot*4.5;
      else if(strcmp(s[j].grade,"A0")==0)sumGrade+=s[j].allot*4.0;
      else if(strcmp(s[j].grade,"B+")==0)sumGrade+=s[j].allot*3.5;
      else if(strcmp(s[j].grade,"B0")==0)sumGrade+=s[j].allot*3.0;
      else if(strcmp(s[j].grade,"C+")==0)sumGrade+=s[j].allot*2.5;
      else if(strcmp(s[j].grade,"C0")==0)sumGrade+=s[j].allot*2.0;
      else if(strcmp(s[j].grade,"D+")==0)sumGrade+=s[j].allot*1.5;
      else if(strcmp(s[j].grade,"D0")==0)sumGrade+=s[j].allot*1.0;
      else if(strcmp(s[j].grade,"F")==0)sumGrade+=0.0;
    }
  }
  printf("%4lf",sumGrade/sumAllot);
  return 0;
}