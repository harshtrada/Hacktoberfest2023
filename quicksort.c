#include<stdio.h>
void QuSort(int arr[100],int start,int end){
   int i, j, p, swap;
 
   if(start<end){
      p=start;
      i=start;
      j=end;
 
      while(i<j){
         while(arr[i]<=arr[p]&&i<end)
            i++;
         while(arr[j]>arr[p])
            j--;
         if(i<j){
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;
         }
      }
 
      swap=arr[p];
      arr[p]=arr[j];
      arr[j]=swap;
      QuSort(arr,start,j-1);
      QuSort(arr,j+1,end);
 
   }
}
 
int main(){
   int i, n, arr[100];
 
   printf("Mention the number of elements in the array:\n");
   scanf("%d",&n);
   printf("Mention the %d elements:\n", n);
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   QuSort(arr,0,n-1);
 
   printf("Sorted Array :\n ");
   for(i=0;i<n;i++)
      printf(" \t %d",arr[i]);
 
   return 0;
}
