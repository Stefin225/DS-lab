#include<stdio.h>

#include<conio.h>

void main()

{

   int a[15],i,j=1,n,val,pos=-1;

   clrscr();

   printf("enter the size of an array:");

   scanf("%d",&n);

   printf("enter the elements:\n");

   for(i=1;i<=n;i++)

   {

      scanf("%d",&a[i]);

   }

   printf("ARRAY\n");

   for(i=1;i<=n;i++)

   {

     printf("%d\t",a[i]);

   }

   printf("\n enter the elements to be search:");

   scanf("%d",&val);

   while(j<=n)

   {

    if(a[j]==val)

    {

      pos=j;

      printf("%d found at location %d",val,pos);

    }

    j=j+1;

   }

   if(pos==-1)

   printf("value is not present in the array");

   getch();

}

