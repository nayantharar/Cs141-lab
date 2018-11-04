//include library
#include<iostream>
using namespace std;

//write the main function
 int main()
     {
	 int i,*i1;
         char c,*c1;
         float f,*f1;
         double d,*d1;
         bool b,*b1;

	i=19; c='k';f=9.4545;d=9.45454545;b=1;
	i1=&i;
	c1=&c;
	f1=&f;
	d1=&d;
	b1=&b;
	
//Print out the sizes of each of variables and pointer variables.
    cout<<"size of int:"<<sizeof(i)<<" "<<"and its pointer is"<<sizeof(i1)<<endl;
    cout<<"size of char:"<<sizeof(c)<<" "<<"and its pointer is"<<sizeof(c1)<<endl;
    cout<<"size of bool:"<<sizeof(b)<<" "<<"and its pointer is"<<sizeof(b1)<<endl;
    cout<<"size of float:"<<sizeof(f)<<" "<<"and its pointer is"<<sizeof(f1)<<endl;
    cout<<"size of double:"<<sizeof(d)<<" "<<"and its pointer is"<<sizeof(d1)<<endl;
    return 0;
}







	
