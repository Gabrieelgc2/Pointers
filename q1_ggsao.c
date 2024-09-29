#include <stdio.h>
int soma(int *a, int *b){
int soma1 = *a + *b;
return soma1;
}
int subtrair(int *c, int *d){
int subtrair1 = *c - *d;
return subtrair1;
}

int main(){
int N;
scanf("%d", &N);
int numeros1[N];
int numeros2[N];
for(int i = 0; i<N; i++){
scanf("%d %d", &numeros1[i], &numeros2[i]);
}
for(int j = 0; j<N; j++){
printf("%d\n", soma(&numeros1[j], &numeros2[j]));
printf("%d\n", subtrair(&numeros1[j], &numeros2[j]));
}
return 0;
}