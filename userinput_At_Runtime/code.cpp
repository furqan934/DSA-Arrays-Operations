#include <iostream>
using namespace std;
int main()
{
    cout << "enter size of the array :";
    int size ;
    cin >> size;
    int arr[size];
    cout <<"enter elements of array :"<< endl;// i make this loop for userinput element of array.
    for (int i=0 ; i < size; i++ )
    {
        cout << "insert element  at index(" << i <<")  :";
        cin >> arr[i] ;
        
    }
    cout <<"inserted elements of array are:" << endl;
    for (int i=0 ; i < size; i++ )// i make this loop for printing element of the array.
    {

        cout << "element at index(" << i <<") is : " << arr[i] << endl;
    }



}