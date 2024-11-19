#include<iostream>
using namespace std;
int main()
{
    int a,b,result;
    cout<<"enter two numbers";
    cin>>a>>b;
    char c;
    cout<<"enter the opertion which you want to choose "<<endl;
    cin>>c;
    int n;
    
    switch(c)
    {
    case '+':
    
        result=a+b;
        cout<<result;
        break;
    
    case '-':
    
        result=a-b;
        cout<<result;
    break;
    case  '*':
    
        result=a*b;
        cout<<result;
    break;
    
    case '/':
        result=a/b;
        cout<<result;
    break;
    default:
    cout<<"invalid option";
    return 0;
    }
}

