Ví d? # 1: Ki?m tra Armstrong S? ba ch? s?

#include

int main()

{

   int number, originalNumber, remainder, result = 0;

   printf("Nhap mot so nguyen gom ba chu so: ");

   scanf("%d", &number);

   originalNumber = number;

   while (originalNumber != 0)

   {

       remainder = originalNumber%10;

       result += remainder*remainder*remainder;

       originalNumber /= 10;

   }

   if(result == number)

       printf("%d la mot so Armstrong.",number);

   else

       printf("%d khong la mot so Armstrong.",number);

 

   return 0;

}

Ð?u ra

Nhap mot so nguyen gom ba chu so: 371

371 la mot so Armstrong.

Ví d? # 2: Ki?m tra s? ch? s? Armstrong n ch? s?

#include

#include

int main()

{

   int number, originalNumber, remainder, result = 0, n = 0 ;

   printf("Nhap so nguyen: ");

   scanf("%d", &number);

    originalNumber = number;

   while (originalNumber != 0)

   {

       originalNumber /= 10;

       ++n;

   }

   originalNumber = number;

   while (originalNumber != 0)

   {

       remainder = originalNumber%10;

       result += pow(remainder, n);

       originalNumber /= 10;

   }

   if(result == number)

       printf("%d la mot so Armstrong.", number);

   else

       printf("%d khong la mot so Armstrong.", number);

   return 0;

}
