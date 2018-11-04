//include the libraries
#include<iostream>
using namespace std;

//main function
int main()
{
	int ar[10]={1,2,3,4,5,6,7,8,9,10};
//using loop to print array
	int *p;
	cout<<"Printing the array elements using normal index method"<<endl;
	for(int i=0;i<10;i++)

	cout<<" "<<ar[i];
        cout<<endl;
//using loop to print array
	cout<<" Printing array elements using pointer method"<<endl;
	p=ar;
	for(int i=0;i<10;i++)
	{	cout<<" "<<*p;
		p++;
		}cout<<"\n";
	return 0;
}	
