
#include "MyHeader.h"       
#include <conio.h>

void main() {

int result_add, result_sub, result_mul;
double result_div;
unsigned int result_power;
unsigned int result_facto;
int a=0, b=0;

printf("============================\n");
printf("a °ªÀ» ÀÔ·ÂÇØÁÖ¼¼¿ä. \t");
scanf("%d", &a);      
printf("============================\n");
printf("b °ªÀ» ÀÔ·ÂÇØÁÖ¼¼¿ä. \t");
scanf("%d", &b);      
printf("============================\n\n");

result_add = add(a, b);
result_sub = sub(a, b);
result_mul = mul(a, b);
result_div = divide(a, b);
result_power = powern(a, b);
result_facto = facto(a, b);
printf("µ¡»ù °á°ú : %d \n",  result_add);
printf("»¬»ù °á°ú : %d \n",  result_sub);
printf("°ö»ù °á°ú : %d \n",  result_mul);
printf("³ª´°»ù °á°ú : %f \n",  result_div);
printf("¸è½ÂÀÇ °á°ú : %d \n", result_power);
printf("x-yÀÇÆÑÅä¸®¾ó :%d\n", result_facto)
getch();
}






