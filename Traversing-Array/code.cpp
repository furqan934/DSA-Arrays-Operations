#include <iostream>
using namespace std;
void traversing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "element at position (" << i << ")are :" <<arr[i] <<endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = arr[size]/arr[0];
    traversing(arr,5);
}
