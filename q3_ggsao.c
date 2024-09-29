#include <stdio.h>
int produto(int *a, int *b, int *c){
int maiorp = *a * *b;
if(maiorp <= *a * *c){
return *a * *c;
}
else if(maiorp <= *c * *b){
return *c * *b;
}
else{
return maiorp;
}
}
int main(){
int a;
int b;
int c;
scanf("%d %d %d", &a, &b, &c);
int x = produto(&a, &b, &c);
printf("%d", x);
return 0;
}