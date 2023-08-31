#include<stdio.h>
void merge(int a[],int l,int mid ,int u)
{
    int i=l;
    int j=mid+1;
    int k=0;
    int b[u+l-1];
    while(i<=mid && j<=u)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;

    }
    while(i<=mid)
    {
        b[k]=a[i];
        k++;
        i++;

    }
    while (j<=u)
    {
        b[k]=a[j];
        k++;
        j++;
    }
    for(int k=0;k<=u-l;k++)
    {
        a[l+k]=b[k];

    }
}
void mergesort(int a[],int l,int u)
{
    if(l<u)
    {
        int mid =(l+u)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,u);
        merge (a,l,mid,u);
    }
}
int main()
{
   int size;
   printf("enter the size of the array \n");
   scanf("%d",&size);
   int a[size];
   printf("enter the elements in the array\n");
   for(int i=0;i<size;i++)
   {
    scanf("%d",&a[i]);
   }
    int l=0;
    int u=size-1;
    mergesort(a,l,u);
    printf("sorted array\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

}