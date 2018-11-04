//include the library
#include<iostream>
using namespace std;

//write the main function
int main()
{
	int a,b,*p;
	//intialise the pointer as null value 
	p=0;

        //declare values for a and b
        a=2;
	b=3;
	cout<<" printing intial values  "<<endl;
	cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;

	//pointer is pointed to a
	p=&a;
	//value then stored to b
	b=*p;
	//final values
	cout<<"\n printing final values  ";
	cout<<"\na = "<<a<<"  b = "<<b<<endl;
	return 0;
}
