// Program treba pristupit elementima polja preko pointera.

#include <stdio.h>

int main()
{
   int data[5], i;
   printf("Unesi 5 elemenata: \n");

   for(i = 0; i < 5; ++i)
   {
       printf("\nUnesi %d element : ",i+1);
       scanf("%d", data + i);

   }

   printf("\nUneseni brojevi su: \n");
   for(i = 0; i < 5; ++i)
   {

       printf("\nElement %d = %d\n",i+1,*(data + i));

   }

   return 0;
}

