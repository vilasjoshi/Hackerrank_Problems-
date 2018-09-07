*
A left rotation operation on an array shifts each of the array's elements 1 unit to the left. For example, if left 2 rotations are performed on array[1,2,3,4,5] , then the array would become [3,4,5,1,2]
Given an array a of n  integers and a number, d, perform d left rotations on the array. Return the updated array to be printed as a single line of space-separated integers.
*/


#include<iostream>
using namespace std;
int main ()
{
  
    int n, d,k=0,temp;
    cin>>n>>d;
    
    int arr[n];
    
    // store numbers in arr[]
    
    for(int i=0;i<n;i++)
    cin>>arr[i];

    long arr2[n];int i, j;
   
	 //stroring the elements after d from array1 into array2

    for( i=0,j=d; i<j, j<n;i++,j++)
  	arr2[i]=arr[j];

	//now here we are first d element from array1 into array2 in remaining spaces 
    for(j=0;i<n,j<d;i++,j++)
       arr2[i]=arr[j];
    
    for(int i=0;i<n;i++)
    cout<<arr2[i]<<" ";
}
