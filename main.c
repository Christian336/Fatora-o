
#include<stdio.h>

int main(){

int x;
int i;

printf("Insira um número para ser fatorado:\n");

scanf("%d" , &x);



  printf("Fatoração de %d = " , x);
  
for(i = 2; x != 1; i++){

while(x % i == 0){

x = x/i;

printf(" %d" , i);

if(x != 1)
printf(" x");

else
printf(";");
}

}

return 0;
}
