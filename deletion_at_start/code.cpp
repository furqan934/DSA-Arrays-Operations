#include <iostream>
using namespace std;
void deletionAtStart(int arr[], int& size)
{
   if (size == 0)
   {
    cout << "Array is empty!";
   }
   for (int i = 0 ; i < size - 1 ;  i ++)
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
    int arr[4] = {1,2,3,4};
    int size = 4;
    cout << "orignal array is :" << endl;
    traversing(arr,size);
    deletionAtStart(arr,size);
    cout << "after insertion at middle array is  :" << endl;
    traversing(arr,size);
}
