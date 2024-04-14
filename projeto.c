#include <stdio.h>

int main(){

    printf("%d",calculo(2,2));
    return 0;
}

int calculo(int a, int b){
	a = a*a;
	b = b*3 - b/2;
 return a+b;
}
