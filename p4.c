#include<stdio.h>

#include<conio.h>

int smallest(int arr[],int k,int n);

int selection_sort(int arr[],int n);

void main()

{

 int arr[10],i,n;

 clrscr();

 printf("\n enter the number of elements in the array:");

 scanf("%d",&n);

 printf("\n enter the elements of the array:");

 for(i=0;i<n;i++)

 {

 scanf("%d",&arr[i]);

 }

 printf("\nthe array before sorting:\n");

 for(i=0;i<n;i++)

 printf("%d \t",arr[i]);


  selection_sort(arr,n);


 printf("the sorted array is:");

 for(i=0;i<n;i++)

 printf("%d\t",arr[i]);

 }

 int smallest(int arr[],int k,int n)

 {

 int small,j,pos;

 for(j=k+1;j<n;j++)

 small=arr[k];

 pos=k;


 {

  if(arr[j]<small)

  {

   small=arr[j];

   pos=j;

   }

  }

  return pos;

  }

  int selection_sort(int arr[],int n)

  {

   int k,pos,temp;

   for(k=0;k<n;k++)

   {

    pos=smallest(arr,k,n);

    temp=arr[k];

    arr[k]=arr[pos];

    arr[pos]=temp;

   }

   getch();


}

