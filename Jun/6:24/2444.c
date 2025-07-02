#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for (int i=1;i<=2*n-1;i++){
    if(i<=n){
      for(int s=0;s<n-i;s++)printf(" ");
      for(int m=0;m<2*i-1;m++)printf("*");
      printf("\n");
    }else{
      for(int s=0;s<i-n;s++)printf(" ");
      for(int m=0;m<(2*n-i)*2-1;m++)printf("*");
      printf("\n");
    }
  }
  return 0;
}
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *