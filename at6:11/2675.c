#include <stdio.h>
int main() {
  int t, n, m,count;
  char p[21], c;
  scanf("%d",&t);
  getchar();
  for(int i=0;i<t;i++){
    scanf("%d %20s",&n, p);
    m=0;
    count=0;
    while(*(p+m)!='\0'){
      if(count==n){
        count=0;
        m++;
      }
      else{
        printf("%c",*(p+m));
        count++;      
      }  
    };
    printf("\n");
  }
    return 0;
}