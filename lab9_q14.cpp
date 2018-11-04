
//include library
#include <iostream>
using namespace std;

//write the main function
int main()
{
    char str[10];
    cout<<"Enter your name:";
    cin>>str;

    //using the normal index method
    cout<<"using normal index method"<<endl;
    int i;
    for( i=0; i<10; i++) 
    { 
        cout<<str[i]; 
    } 
    
    cout<<endl;
    
    char *p;
    p = str; /* for string, only this declaration will store its base address */
    //using the pointer method
    cout<<" using pointer method"<<endl;
     while( *p != '\0')
    {
        cout<<*p; 
        p++; 
    }
    
  return 0;
}

    © 2018 GitHub, Inc.
    Terms
    Privacy
    Security
    Status
    Help


