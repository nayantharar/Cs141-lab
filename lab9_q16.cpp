//include library
#include <iostream>
using namespace std;

//write the main function
int main()
{
    char ar[20];char* p;
    cout<<"Input about 10 characters of string"<<endl;
    cin>>ar;
    p=&ar[0];

    //Loop to print values starting from the last term
    for(int i=9;i>=0;i--)
    {
    //Loop to print the values till the last term
    for(int j=i;j<10;j++)
        {
            cout<<*(p+j);
        }
        cout<<endl;//change the row
    }
    return 0;
}


