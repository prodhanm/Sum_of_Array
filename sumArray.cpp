#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size) {
  int total = 0;
  for (int i = 0; i < size; i++) {
      total += arr[i];
  }
  return total;
}

int main()
{
   int total;
   int size;
   cout << "Enter the size of the array: ";
   cin >> size;

   int* arr = new int[size];
   cout << "Enter the elements of the array: ";
   for (int i = 0; i < size; i++) {
       cin >> arr[i];
   }

   total = sumOfArray(arr, size);
   printf("The sum of the array is: %d", total);
   return 0;
}
