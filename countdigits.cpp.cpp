#include<iostream>
using namespace std;
int main()
{
    int i;
    int num;
    int count=0;
    int rem;
    cout<<"enter the number";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;

count++;
    }
    cout<<count;
    
    return 0;
}