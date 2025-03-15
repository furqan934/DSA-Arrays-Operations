#include <iostream>
using namespace std;
void insertionAtStart(int arr[], int& size ,int capasity, int value)
{
   if (size >= capasity)
   {
    cout << "Array is full!";
   }
// insert value at the end this is one step to insert the element no shifting is //required .
   arr[size] = value; 
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
    cout << "orignal array is :" << endl;
    traversing(arr,size);
    insertionAtStart(arr,size,capasity,20);
    cout << "After insertin in end new updating array is :" << endl;
    traversing(arr,size);
}
