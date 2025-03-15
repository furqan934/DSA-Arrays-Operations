#include <iostream>
using namespace std;
void deletionAtStart(int arr[], int& size,int index)
{
   if (index >= size ||size == 0)
   {
    cout << "Array is empty!";
   }
   for (int i = index ; i < size - 1 ;  i ++)
   {
    arr[i] = arr[i + 1]; // shift element towords left.
   }
   size --;
}
void traversing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "element at position (" << i << ")are :" <<arr[i] <<endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int index = 2;
    cout << "orignal array is :" << endl;
    traversing(arr,size);
    deletionAtStart(arr,size,index);
    cout << "after  at middle array is  :" << endl;
    traversing(arr,size);
}
