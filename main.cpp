// Fig. 8.13: fig08_13.cpp
// Selection sort with pass-by-reference. This program puts values into an 
// array, sorts them into ascending order and prints the resulting array.
#include <iostream> 
#include <iomanip>
using namespace std;

template <class T>
void selectionSort(T array[],int size) //easeir for me to build in the swap function than it is to make a new funtion temple and so on.
{
     int smallest; // index of smallest element

   // loop over size - 1 elements
   for ( int j= 0; j< size - 1; ++j)
   {
      smallest = j; // first index of remaining array

      // loop to find index of smallest element
      for ( int index = j+ 1; index < size; ++index )
      swap( &array[ j ], &array[ smallest ] );
   } // end if
} // end function selectionSort
template <class T>
void swap ( t element1Ptr, T element2Ptr )
{
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end function swap
int main()
{
    int a[100],j,n; // 
    float f[100];
    cout<<"Enter The number of Element:\n";
    cin>>n;
    cout<<"\nEnter Elements:\n";
    for(j=0;j<n;j++)
    {

       cout<<"\nEnter:";
       cin>>f[j];
    }
  
    selectionSort(f,n);
    cout<<"\nAfter Sorting\n";
    for(j=0;j<n;j++)
    {
       cout<<f[j]<<"\t";
    }
    return 0;
}
/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/