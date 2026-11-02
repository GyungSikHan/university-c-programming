
#include "MyHeader.h"

int add(int x, int y){
	int temp;
	temp = x + y;
	return temp;
}

int sub(int x, int y) {
	int temp;
	temp = x - y;
	return temp;
}

int mul(int x, int y) {
	int temp;
	temp = x * y;
	return temp;
}

double divide(int x, int y) {
    double temp;
	temp = (double)x / (double)y;
	return temp;
}

unsigned int powern(int x, int y) {
    unsigned int temp = 1;
	int i;
	
	for ( i = 1; i < y; i++ ) {
       temp *= x * x ; //temp = temp * (x*i)                  
    }

	return temp;
}

unsigned int facto(int x, int y) {

	unsigned int temp = (x - y);
	int i = 0;
	for (i = 1; i < (x - y); i++) {
		temp *= (x-y - i);// temp = temp * (x-y - i)
		
	}

	return temp;

}




