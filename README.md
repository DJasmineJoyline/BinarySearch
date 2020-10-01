# BinarySearch
Implementation of Binary Search  Write a C program to implement Binary Search Algorithm.  Include a function  int BinarySearch (int, int, int *, int x) --- The 1st parameter is the lower limit of the list or array, the 2nd parameter is the upper limit of the list or array, the third parameter is a pointer to the array and the fourth parameter is the search element.  Please note that the index of the search element is returned by the function. If the search element is not present in the array, -1 is returned.  Assume that the maximum size of the array is 10 . Please note that if a is the array, then a[0] is in position 0, a[1] is in position 1 ...     Input and Output Format:  Refer sample input and output for formatting specifications.     Sample Input and Output 1:  [All text in bold corresponds to input and the rest corresponds to output.]     Enter the number of elements : 5 Enter the elements : 12 16 23 45 67 Enter the element to be searched : 23 The element 23 is in position 2    Sample Input and Output 2:  [All text in bold corresponds to input and the rest corresponds to output.]     Enter the number of elements : 5 Enter the elements : 12 16 23 45 67 Enter the element to be searched : 28 The element 28 is not present in the array

# Binary Search Code

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{   
 // Binary search need array to be Sorted.

	int n,x=-1,st=0,md,ed=19,A[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	cout<<"enter a number 1 to 20=";
	cin>>n;
	
	while(st<=ed)     //here used while loop
	{
		md=(st+ed)/2;
		
		if(A[md]==n)
		{
		    x=md;
		    break;
	    }
	    
	    else if(n>A[md])    // searching
		st=md+1;
	
		else
		ed=md-1;		
	}
	
	  // showing
	if(x==-1)
	cout<<"you enter wrong number.";
	
	else
	cout<<"given number at index="<<x;
	
getch();
}
