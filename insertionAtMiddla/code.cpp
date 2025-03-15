#include <iostream>
using namespace std;
void insertionAtStart(int arr[], int& size ,int index,int capasity, int value)
{
   if (size >= capasity || index > size)
   {
    cout << "Array is full!";
   }
   for (int i = size ; i > index ;  i --)
   {
    arr[i] = arr[i - 1];// shoft element to the right 
   }
   arr[index] = value;
   size ++;
}
void traversing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "element at position (" << i << ")are :" <<arr[i] <<endl;
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int size = 4;
    int index = 2;
    int capasity = 10;
    cout << "orignal array is :" << endl;
    traversing(arr,size);
    insertionAtStart(arr,size,2,capasity,20);
    cout << "after insertion at middle array is  :" << endl;
    traversing(arr,size);
}