#include <stdio.h>

int main() {
  int a[5];
  int n;
  int j;
  int peloMenosUma=-1;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
  
  

  for (int i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
    for(j=0;j<5;j++){
        if(i%a[j]==0){ /*verifica se esta em sua vez*/
         printf("%d",j);
         peloMenosUma=1;
        }
    }
    if(peloMenosUma==-1){
            printf("-");
        }
    printf("\n");
    peloMenosUma=-1;
  }

  return 0;
}
