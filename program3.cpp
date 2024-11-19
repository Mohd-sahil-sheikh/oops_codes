#include<iostream>
using namespace std;
int main()
{
    int a,b,result;
    cout<<"enter two numbers";
    cin>>a>>b;
    char c;
    cout<<"enter the opertion which you want to choose(+,-,*,/)"<<endl;
    cin>>c;
    if (c=='+')
    {
        result=a+b;
        cout<<result;
    }
    else if (c=='-')
    {
        result=a-b;
        cout<<result;
    }
    else if (c=='*')
    {
        result=a*b;
        cout<<result;
    }
    else
    {
        result=a/b;
        cout<<result;
    }
    
    
    
    
return 0;
}