/*
#include <stdio.h>
int recursiveBinarySearch(int arrayay[], int start_index, int end_index, int element){
   if (end_index >= start_index){
      int middle = start_index + (end_index - start_index )/2;
      if (arrayay[middle] == element){
        return middle;
      }
      if (arrayay[middle] > element){
        return recursiveBinarySearch(arrayay, start_index, middle-1, element);
      }
      else{
        return recursiveBinarySearch(arrayay, middle+1, end_index, element);
      }
   }
   return -1;
}
int main(void){
   int arrayay[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 9;
   int found_index = recursiveBinarySearch(arrayay, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the arrayay ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
*/
#include<iostream>
using namespace std;
//using Recursion method
int RecursionBinarySearch(int array[],int num,int start_index,int end_index){
    if (start_index<=end_index)
    {
        int mid = (start_index + end_index)/2;
        if(array[mid]==num){
            return array[mid];
        }   
        else if(array[mid]>num){
            return RecursionBinarySearch(array,start_index,mid-1,num);
        }
        else{
            return RecursionBinarySearch(array,mid+1,end_index,num); 
        }
        return -1;
    }
}
// Using Iteration method
int IterativeBinarySearch(int arr[],int start_index,int end_index,int num)
{
    while(start_index <= end_index) {
    int mid = ( start_index + end_index )/2;
        if(num == arr[mid]) {
            return mid;
        } else if(arr[mid]>num) {
            end_index = mid - 1;
        } else {
            start_index = mid + 1;
        }
    }
    return -1;
}

int main()
{
    cout<<"Enter Elements = "<<endl;
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin>>arr[i];
    }
    cout<<"\nArray Elements are = ";
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    int num;
    cout<<"\nEnter element to search = ";
    cin>>num;
    int result = IterativeBinarySearch(arr,0,5-1,num);
    if(result == -1) {
        cout<<"Element not found"<<endl;
    } else {
        cout<<"Elemet found at index "<<result;
    }
    return 0;
}