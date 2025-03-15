#include <iostream>
using namespace std;
void insertionAtStart(int arr[], int& size ,int capasity, int value)
{
   if (size >= capasity)
   {
    cout << "Array is full!";
   }
   for (int i = size ; i > 0 ;  i --)
   {
    arr[i] = arr[i - 1];
   }
   arr[0] = value;
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
    int arr[] = {1,2,3,4,5};
    int size = 4;
    int capasity = 10;
    insertionAtStart(arr,size,capasity,20);
    traversing(arr,size);

    
}
