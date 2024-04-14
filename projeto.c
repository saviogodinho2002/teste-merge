#include <stdio.h>

int main(){
	int result = calculo(2,2);
    printf("%d",result);
    return 0;
}

int calculo(int a, int b){
	a = a*a;
 return a+b;
}
