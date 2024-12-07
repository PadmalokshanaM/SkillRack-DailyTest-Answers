#include<stdio.h>
#include<math.h>
int main(){
  int n;
  scanf("%d",&n);
  int limit = (1<<n);
  for(int i=0;i<limit;i++){
    for(int bit = n-1;bit>=0;bit--){
      printf("%d ",(i>>bit)&1);
    }
  printf("\n");
  }
return 0;
}
