 #include <stdio.h>

main()
{
	FILE *fp_org, *fp_copy;
	char c;
	fp_org = fopen("data.org","r");
	fp_copy= fopen("data.cpy","w");

	if (fp_org == NULL )
	{
			printf(" I can't find data.org file \n");
			exit();
	}
	if (fp_copy == NULL )
	{
			printf(" I can't open data.cpy file \n");
			exit();
	}
	while((c=getc(fp_org))!=EOF) {
		putc(c,fp_copy);
	}

	fclose(fp_org);
	fclose(fp_copy);
}
//º¹»çÇÏ´ÂÇÁ·Î±×·¥ 
======================================
 
 
 
 #include <stdio.h>

  int x = 1, y = 2;
//x,y´ÂÀü¿ªº¯¼ö 
   void demo(void);

   main()
  {
    printf("\nBefore calling demo(), x = %d and y = %d.", x, y);
    demo();
    printf("\nAfter calling demo(), x = %d and y = %d\n.", x, y);

    return 0;
  }
//Àü¿ªº¯¼ö°ª³ª¿Â´Ù 
  void demo(void)
  {
      /* Declare and initialize two local variables. */

      int x = 88, y = 99;
//Áö¿ªº¯¼ö·Î½á À§ÀÇÀü¿ªº¯¼ö¿ÍÀÌ¸§Àº°°Áö¸¸´Ù¸¥¹æÀÌ´Ù. int°¡¾ø¾îÁö¸é  Àü¿ªº¯¼öÀÌ´Ù ¿Ö³ÄÇÏ¸é int¶ó´Â¹æÀ»¸¸µé¾î¾ßµÇ´Âµ¥ÀÌ°ÍÀÌ¾øÀ¸¸éÀÌ¹Ì¸¸µç¹æ¿¡88°ú99¸¦Ã£¾Æ³Ö´Â°ÍÀÌ´Ù 
      /* Display their values. */

      printf("\nWithin demo(), x = %d and y = %d.", x, y);
  }
//Áö¿ªº¯¼ö°ªÀ¸·ÎÂïÈù´Ù 

Before calling demo(), x = 1 and y = 2.
Within demo(), x = 88 and y = 99.
After calling demo(), x = 1 and y = 2

//Ç¥ÁØÀÔÃâ·ÂÆÄÀÏ 
======================================

 #include <stdio.h>

 int var = 1;
//Àü¿ªº¯¼ö 
 int *ptr;
//Àü¿ªº¯¼ö,ÁÖ¼ÒÀúÀåÇÏ´Â¹æ 
 main()
 {
     ptr = &var;

     printf("\nDirect access, var = %d", var);//Á÷Á¢Á¢±Ù 
     printf("\nIndirect access, var = %d", *ptr);//°£Á¢Á¢±Ù  *À»´Ş¸é1ÀÌ³ª¿À°í¾øÀ¸¸éptr°¡³ª¿Â´Ù 

     printf("\n\nThe address of var = %d", &var);//d´ë½Åp·ÎÇÏ¸é32ºñÆ®Ç®ÁÖ¼Ò³ª¿À°íx·ÎÇÏ¸é16Áø¼ö·Î³ª¿Â´Ù 
     printf("\nThe address of var = %d\n", ptr);

     return 0;
 }

Direct access, var = 1
Indirect access, var = 1

The address of var = 433703
The address of var = 433703


========================================


 #include <stdio.h>

 int length, width;
 long area;
 
 struct coord{
     int x;
     int y;
 };
 
 struct rectangle{
     struct coord topleft;
     struct coord bottomrt;
 } mybox;
 
 main()
 {
     printf("\nEnter the top left x coordinate: ");
     scanf("%d", &mybox.topleft.x);//mybox¶ó´ÂÀúÅÃÀ»°¡¸étopleft¶ó´Â°Ç¹°ÀÌÀÖ´Âµ¥x¶ó´Â¹æ¿¡10Áø¼ö¸¦³Ö¾îÁà 

     printf("\nEnter the top left y coordinate: ");
     scanf("%d", &mybox.topleft.y);

     printf("\nEnter the bottom right x coordinate: ");
     scanf("%d", &mybox.bottomrt.x);

     printf("\nEnter the bottom right y coordinate: ");
     scanf("%d", &mybox.bottomrt.y);

     width = mybox.bottomrt.x - mybox.topleft.x;
     length = mybox.bottomrt.y - mybox.topleft.y;

     area = width * length;
     printf("\nThe area is %ld units.\n", area);

     return 0;
 }

Enter the top left x coordinate: 20

Enter the top left y coordinate: 100

Enter the bottom right x coordinate: 100

Enter the bottom right y coordinate: 20

The area is 6400 units.


==========================================


  #include <stdio.h>

  struct entry {
      char fname[20];
      char lname[20];
      char phone[10];
 };

 struct entry list[4];

 int i;

 main()
{
     for (i = 0; i < 4; i++)
     {
         printf("\nEnter first name: ");
         scanf("%s", list[i].fname);
         printf("Enter last name: ");
         scanf("%s", list[i].lname);
         printf("Enter phone in 123-4567 format: ");
         scanf("%s", list[i].phone);
     }

     printf("\n\n");

     for (i = 0; i < 4; i++)
     {
         printf("Name: %s %s", list[i].fname, list[i].lname);
         printf("\t\tPhone: %s\n", list[i].phone);
     }
     return 0;
 }
 
 =======================================
 
  #include <stdio.h>

 #define MAX 4

 struct part {
     int number;
     char name[10];
 } data[MAX] = {1, "Smith",
                2, "Jones",
                3, "Adams",
                4, "Wilson"
                };

 struct part *p_part;
 int count;

 main()
 {
     p_part = data;

     for (count = 0; count < MAX; count++)
     {
         printf("At address %d: %d %s\n", p_part, p_part->number,
                 p_part->name);
         p_part++;
     }
     return 0;
 }

At address 4338424: 1 Smith
At address 4338440: 2 Jones
At address 4338456: 3 Adams
At address 4338472: 4 Wilson

======================================


#include <conio.h>
#include <stdio.h>
#include <string.h>


#define MAXGAME             10

int main(void)
{
   char *p_game[MAXGAME];
   int i, sum_strlen;

   sum_strlen = 0;

   p_game[0] = "[0] Commandos";
   p_game[1] = "[1] StarCraft";
   p_game[2] = "[2] Alien Slayer";
   p_game[3] = "[3] Dooly";
   p_game[4] = "[4] Refrain Love";
   p_game[5] = "[5] Dune 2000";
   p_game[6] = "[6] Alien Encounter";
   p_game[7] = "[7] Worms 2";
   p_game[8] = "[8] Jazz JackRabbit 2";
   p_game[9] = "[9] Fifa 99";

   clrscr();

   /* í¬ì¸í„°ê°€ ê°€ë¦¬í‚¤ëŠ” ë¬¸ìì—´ ì¶œë ¥ */

   for ( i=0; i<MAXGAME; i++ )
        printf("%s\n", p_game[i]);

   /* í¬ì¸í„°ì˜ ê¸¸ì´ */

   printf("\ní¬ì¸í„° p_gameì˜ ê¸¸ì´ : %d ë°”ì´íŠ¸\n\n", sizeof(p_game));

   /* ì‹¤ì œ ì‚¬ìš©ëœ ë¬¸ìì—´ì˜ ê¸¸ì´ */

   for ( i=0; i<MAXGAME; i++ )
        sum_strlen += strlen(p_game[i]) + 1;

   printf("ì‹¤ì œ ì‚¬ìš©ëœ ë¬¸ìì—´ì˜ ê¸¸ì´ : %d ë°”ì´íŠ¸\n\n", sum_strlen);

   /* ì „ì²´ ë©”ëª¨ë¦¬ ì†Œëª¨ëŸ‰ ì¶œë ¥ */

   printf("ì „ì²´ ì‚¬ìš©ëœ ë©”ëª¨ë¦¬ì˜ ëŸ‰ : %d + %d = %d ë°”ì´íŠ¸",
        sizeof(p_game), sum_strlen, sizeof(p_game) + sum_strlen);
   getch();
}

========================================


#include <conio.h>
#include <stdio.h>
#include <string.h>

void main(void)
{
   char para[] = "BlueSky";
   char *ptr_para;
   int i;

   ptr_para = &para[0];

   //clrscr();

   for ( i=0; i<strlen(para); i++ )
        printf("*(ptr_para+%d) : %c\n", i, *(ptr_para+i));

   printf("\n");

   for ( i=0; i<strlen(ptr_para); i++ )
        printf("*ptr_para+%d : %c\n", i, *ptr_para+i);
}

*(ptr_para+0) : B
*(ptr_para+1) : l
*(ptr_para+2) : u
*(ptr_para+3) : e
*(ptr_para+4) : S
*(ptr_para+5) : k
*(ptr_para+6) : y

*ptr_para+0 : B
*ptr_para+1 : C
*ptr_para+2 : D
*ptr_para+3 : E
*ptr_para+4 : F
*ptr_para+5 : G
*ptr_para+6 : H

=================================


#include <stdio.h>
  
  void static_test(int x)
  {     
     int local_var = 0;
     static int static_var = 0;
     
     local_var += x;
     static_var += x;
     
     printf(" (x, local_var, static_var) = (%d,%d,%d)\n", x, local_var, static_var);      
  }
  
  void main()
  {
     int i;
     
     for(i=3; i<=5; i++)
       static_test(i);
  }


 (x, local_var, static_var) = (3,3,3)
 (x, local_var, static_var) = (4,4,7)
 (x, local_var, static_var) = (5,5,12)
 
 ===========================================
 
  #include <stdio.h>
  
  int a, b;
  
  void function1(int x, int y)
  {     
     x +=3;
     y -=1;
     
     printf("function1ì˜ x,yê°’ = %d, %d\n", x,y);          
  }
  
  void function2()
  {
     int x=1;
     int y=1;
     
     a = x*2;
     b = y+2;
     
     printf("function2ì˜ x,yê°’ = %d, %d\n", x,y);          
  }
  
  void main()
  {
     int x=10;
     int y=10;
     
     a = 5;
     b = 6;
     
     printf("mainì˜ x,yê°’ = %d, %d\n", x,y);
     printf("mainì˜ a,bê°’ = %d, %d\n", a,b);
     function1(x,y);
     
     printf("mainì˜ x,yê°’ = %d, %d\n", x,y);
     printf("mainì˜ a,bê°’ = %d, %d\n", a,b);
     function2();
     
     printf("mainì˜ x,yê°’ = %d, %d\n", x,y);
     printf("mainì˜ a,bê°’ = %d, %d\n", a,b);     
  }
  
  
mainì˜ x,yê°’ = 10, 10
mainì˜ a,bê°’ = 5, 6
function1ì˜ x,yê°’ = 13, 9
mainì˜ x,yê°’ = 10, 10
mainì˜ a,bê°’ = 5, 6
function2ì˜ x,yê°’ = 1, 1
mainì˜ x,yê°’ = 10, 10
mainì˜ a,bê°’ = 2, 3

===========================================

#include<stdio.h>

main()
{  
	int i, j;
	char s[3][6] = { "dog", "cat", "tiger" };

	for(i=0; i<3; i++)
	{            
		printf("s[%d] : %s\n", i, s[i]);    
	}
	for(j=0; j<3; j++)
	{            
		printf("s[%d][0] : %c\n", j, s[j][0]);     
	}
}

s[0] : dog
s[1] : cat
s[2] : tiger
s[0][0] : d
s[1][0] : c
s[2][0] : t

=======================================

#include<stdio.h>

main(){     
	char s[] = "HELP ME";     
	int i=2;     

        /* ABCDEFGHIJKLMNOPQRSTUVWXYZ  */
        
	printf("%c\n", s[i++]);     
	printf("%c\n", s[i]--);     
	printf("%c\n\n", --s[i]);
}

========================================

#include <stdio.h>

struct comp {
	float real;
	float imag;
};

typedef struct comp complex;

main()
{
	complex p = {3.0, 4.0}, q = {5.0, -6.0}, r, *ptr;

	ptr = &r;
	ptr->real = p.real + q.real;
	ptr->imag = p.imag - q.imag;
	printf("%5.1f %5.1f\n", r.real, r.imag);
}

  8.0  10.0
  
=========================================

 
#include <stdio.h>

main()
{
    int a[2], *p;

    a[0] = 10;
    a[1] = 20;

    p = &a[0];

    printf("\n p => %p", p );
    printf("\n p + 1 => %u", p + 1);
    printf("\n &a[0] => %u", &a[0]);
    printf("\n &a[1] => %u", &a[1]);
        
    printf("\n *p++ => %d", *p++);
    printf("\n *p => %d", *p);
    
    printf("\n (*p)++ => %d", (*p)++);
    printf("\n *p => %d", *p);
    
    printf("\n (*p) + 1 => %d", (*p) + 1);
    
    printf("\n *(p++) => %d", *(p++));
	printf("\n\n");
}

 p => 0012FF78
 p + 1 => 1245052
 &a[0] => 1245048
 &a[1] => 1245052
 *p++ => 10
 *p => 20
 (*p)++ => 20
 *p => 21
 (*p) + 1 => 22
 *(p++) => 21

 =================================

#include <stdio.h>

void f1(int fa[5]);
void f2(int fa[]);
void f3(int *p);

main()
{ 
	int a[5] = { 10, 20, 30, 40, 50 };
	f1(a); 
	f2(a); 
	f3(a);
	printf("\n\n");
}

void f1(int fa[5])
{ 
	int i; 
	for(i=0;i<5;i++) 
	{   
		printf("\n f1(int fa[5])  %d => %d", i, fa[i]);
	}
}

void f2(int fa[])
{
	int i; 
	for(i=0;i<5;i++) 
	{   
		printf("\n f1(int fa[])  %d => %d", i, fa[i]);
	}
}

void f3(int *p)
{ 
	int i; 
	for(i=0;i<5;i++) 
	{  
		printf("\n f1(int *p)  %d => %d", i, *(p+i)); 
	}
}


 f1(int fa[5])  0 => 10
 f1(int fa[5])  1 => 20
 f1(int fa[5])  2 => 30
 f1(int fa[5])  3 => 40
 f1(int fa[5])  4 => 50
 f1(int fa[])  0 => 10
 f1(int fa[])  1 => 20
 f1(int fa[])  2 => 30
 f1(int fa[])  3 => 40
 f1(int fa[])  4 => 50
 f1(int *p)  0 => 10
 f1(int *p)  1 => 20
 f1(int *p)  2 => 30
 f1(int *p)  3 => 40
 f1(int *p)  4 => 50

###############################################################################

#include <stdio.h>

main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int *p;
	int i;
	
	p = a;
	
	printf("a[5] ì˜ ì‹œì‘ ì£¼ì†ŒëŠ” --> %u \n", a);
        printf("í¬ì¸í„° p ì˜ ì‹œì‘ ì£¼ì†ŒëŠ” --> %u \n", p);
	printf("ë³€ìˆ˜ì˜ i ì˜ ì£¼ì†ŒëŠ” --> %u \n", &i);

	for(i=0; i<5; i++)
	{
		printf("\n a[%d]ê°’ => %d ", i,  a[i]);
		printf("\t a[%d]ì£¼ì†Œ => %u ", i, &a[i]);
		printf("\t *(p+%d)ê°’ => %d", i, *(p + i));
		printf("\t p+%dì£¼ì†Œ => %u ", i, p+i);
	}
	printf("\n\n");
}

a[5] ì˜ ì‹œì‘ ì£¼ì†ŒëŠ” --> 1245036
í¬ì¸í„° p ì˜ ì‹œì‘ ì£¼ì†ŒëŠ” --> 1245036
ë³€ìˆ˜ì˜ i ì˜ ì£¼ì†ŒëŠ” --> 1245028

 a[0]ê°’ => 10    a[0]ì£¼ì†Œ => 1245036     *(p+0)ê°’ => 10  p+0ì£¼ì†Œ => 1245036
 a[1]ê°’ => 20    a[1]ì£¼ì†Œ => 1245040     *(p+1)ê°’ => 20  p+1ì£¼ì†Œ => 1245040
 a[2]ê°’ => 30    a[2]ì£¼ì†Œ => 1245044     *(p+2)ê°’ => 30  p+2ì£¼ì†Œ => 1245044
 a[3]ê°’ => 40    a[3]ì£¼ì†Œ => 1245048     *(p+3)ê°’ => 40  p+3ì£¼ì†Œ => 1245048
 a[4]ê°’ => 50    a[4]ì£¼ì†Œ => 1245052     *(p+4)ê°’ => 50  p+4ì£¼ì†Œ => 1245052
 
###############################################################################

#include <stdio.h>

void lineplot(void);

main()
{
	int a = 100;
	int *p1 ;
	int **p2 ;
	int ***p3 ;

	printf("%s \t ë³€ìˆ˜ë³„ ë©”ëª¨ë¦¬ ì£¼ì†Œ\n");
    lineplot();

	printf("a ì£¼ì†Œ => %u", &a);
	printf("  p1 ì£¼ì†Œ => %u", &p1);
    printf("  p2 ì£¼ì†Œ => %u", &p2);
    printf("  p3 ì£¼ì†Œ => %u \n", &p3);
	
	lineplot();
	printf("\n");
 
	printf("%s \t *p1 ë¶„ì„ìë£Œ [ p1 = &a ] \n");
	lineplot();
	p1 = &a;
	
	printf("p1ì£¼ì†Œ => %u \t", &p1);
	printf("p1ê°’ => %d \t", p1);
	printf("*p1ê°’ => %d \n", *p1);
	
	lineplot();
	printf("\n");

    printf("%s \t **p2 ë¶„ì„ìë£Œ [ p2 = &p1 ] \n");
	lineplot();
    p2 = &p1;

    printf("p2ì£¼ì†Œ => %u", &p2);
	printf("   p2ê°’ => %d", p2);
	printf("   *p2ê°’ => %d", *p2);
	printf("   **p2ê°’ => %d \n", **p2);

	lineplot();
	printf("\n");

    printf("%s \t ***p3 ë¶„ì„ìë£Œ [ p3 = &p2 ] \n");
	lineplot();
    p3 = &p2;

    printf("p3ì£¼ì†Œ=> %u", &p3);
	printf(" p3ê°’=> %d", p3);
	printf(" *p3ê°’=> %d", *p3);
	printf(" **p3ê°’=> %d", **p3);
    printf(" ***p3ê°’=> %d \n", ***p3);

	lineplot();
	printf("\n");
}

void lineplot(void)
{
	int k;
	for(k = 0; k < 78; k++){
		putchar('=');
		continue;
	}
    printf("\n");
}
===============================


#include <stdio.h>

void main()
{
	int a[3][2] = { {1, 2}, {3, 4}, {5, 6} };

	int i, j;

	for(i=0; i < 3; i++) {
		printf("\n *(a + %d) : %u \t", i, *(a+i));
		for(j=0; j < 2; j++)
            printf("\n *(*(a + %d) + %d) : %u \t", i, *(*(a+i)+j));
			printf("\n");
	}
	printf("\n\n");
}

 *(a + 0) : 1245032
 *(*(a + 0) + 1) : 1254768
 *(*(a + 0) + 2) : 1254768

 *(a + 1) : 1245040
 *(*(a + 1) + 3) : 1254768
 *(*(a + 1) + 4) : 1254768

 *(a + 2) : 1245048
 *(*(a + 2) + 5) : 1254768
 *(*(a + 2) + 6) : 1254768
 
 
 ============================
 
 
#include <stdio.h>

void plus(int, int);
void minus(int, int);
void multiply(int, int);

void main(void)
{
  int a=10, b=5, i;

  void (*result[ ])(int, int) = {plus, minus, multiply};
  //í•¨ìˆ˜ í¬ì¸í„° ë°°ì—´ ì„ ì–¸ 

  for (i=0; i<3; i++)
    result[i](a, b); 
}


void plus(int a, int b)
  {
    printf("%d + %d = %d\n", a, b, a+b);
  }

void minus(int a, int b)
  {
    printf("%d - %d = %d\n", a, b, a-b);
  }

void multiply(int a, int b)
  {
    printf("%d * %d = %d\n", a, b, a*b);
  }

10 + 5 = 15
10 - 5 = 5
10 * 5 = 50

###############################################################################

#include <stdio.h>

void plus(int, int);
void minus(int, int);
void multiply(int, int);

void result(void (*calculate)(int, int), int, int);

int main(void)
{
  int a=10, b=5;

  result(plus, a, b);
  result(minus, a, b);
  result(multiply, a, b);

  return 0;
}

void result(void (*calculate)(int a, int b), int x, int y)
{    /* calculateë¡œ ì „ë‹¬ëœ í•¨ìˆ˜ ì‹¤í–‰ */
    calculate(x, y);
}

void plus(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a+b);
}

void minus(int a, int b)
{
    printf("%d - %d = %d\n", a, b, a-b);
}

void multiply(int a, int b)
{
    printf("%d * %d = %d\n", a, b, a*b);
}


10 + 5 = 15
10 - 5 = 5
10 * 5 = 50
