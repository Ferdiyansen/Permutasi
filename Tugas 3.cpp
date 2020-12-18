#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<string.h>

void penukar(char *x, char *y)
{
    char temporary;
    temporary = *x;
    *x = *y;
    *y = temporary;
}
 
void permutasi(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          penukar((a+l), (a+i));
          permutasi(a, l+1, r);
          penukar((a+l), (a+i)); 
       }
   }
}

int main()
{
    char kata[5];
    system("cls");

	printf("Masukan Sebuah Kata [Maksimal 4 Huruf]:");scanf("%s",kata);

    int n = strlen(kata);

    if(kata[5]>4)
    {
    	printf("maaf kata yang anda masukan melebihi batas");getch();
    	return main();
	}
	printf("permutasi dari kata tersebut adalah\n");
    permutasi(kata, 0, n-1);
    getch();
    
}
