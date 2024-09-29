#include <stdio.h>
int soma(int *a, int *b){
int res = *a + *b;
return res;
}
int subtrair(int *c, int *d){
int sub = *c - *d;
return sub;
}
int mult(int *e, int *f){
int multi = *e * *f;
return multi;
}
int divisao(int *g, int *j){
int dividir = *g / *j;
return dividir;
}
int main(){
int a;
int b;
scanf("%d %d", &a, &b);
int s = soma(&a, &b);
printf("%d\n", s);
int sub = subtrair(&a, &b);
printf("%d\n", sub);
int multi = mult(&a, &b);
printf("%d\n", multi);
if (b == 0){
    printf("Divisão por zero");
}
else {
int divide = divisao(&a, &b);
printf("%d\n", divide);
}
return 0;
}