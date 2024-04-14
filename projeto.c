#include <stdio.h>

int main(){
	int resultFOda = calculo(2,2);
    printf("o resultado foi %d",resultFOda);
    return 0;
}

int calculo(int a, int b){
	a = a*a;
 return a+b;
}
