#include <iostream>
using namespace std;

//use the function
int myStrLen(char* p)
    
{
    int count=0;
    for(int i=0;*(p+i)!='\0';i++)
    {
        *(p+i);
        count++;
    }
    return count;
    
}
int main()
{
    char ar[10];
    cout<<"Enter the string:"<<ar;
    cin.getline(ar,10);
    
    //getting a string line
    char* p=&ar[0];
    cout<<"Length of the string:"<<myStrLen(p);
    return 0;
}
