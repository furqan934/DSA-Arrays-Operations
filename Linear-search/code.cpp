#include <iostream>
using namespace std;
int linearSearching(int arr[], int& size,int target)
{
    for (int i = 0; i < size -1 ; i++)
    {
       if(arr[i] == target)   
       return i;
       break;
    }
       return -1;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = arr[size] / arr[0];
    int target = 3;
      // Performing Linear Search
      int result = linearSearching(arr, size, target);

    //   // Output the result
    //   if (result != -1)
          cout << "Element found at index: " << result << endl;
    //   else
    //       cout << "Element not found in the array!" << endl;
  
    //   return 0;
}
