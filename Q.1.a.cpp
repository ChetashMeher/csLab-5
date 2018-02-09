# csLab-5#include<iostream>
using namespace std;
// creating class bubbleSort to do the necessary sorting
class bubbleSort
{            
	public:
	
		
	int* sort(int a[],int n) //function to perform bubblesort that takes an array as input along with the size of the array.
	{
	int temp;
	for(int i=0; i<(n-1); i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	return a;// returns the sorted array.
	}
	
};

int main()
{
            bubbleSort b;//creating an object class bubblesort.
	int n, i, arr[50],*p;
	cout<<"Enter total number of elements.";
	cin>>n;
	cout<<"\nEnter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{           // To enter the array elements
		cin>>arr[i];
	}
	cout<<"\nThe array is:"; // Displaying the array.
	{
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}	
	}
	cout<<"\nSorting array using bubble sort technique...\n";
	
	// Calling the sorting function using object of the class.
	p=b.sort(arr,n); 
		cout<<"Elements sorted successfully..!!\n";
	cout<<"Sorted list in ascending order :\n";
	for(i=0; i<n; i++)
	{           // Displaying the sorted array.
		cout<<*(p+i)<<" ";
	}
return 0;
}
