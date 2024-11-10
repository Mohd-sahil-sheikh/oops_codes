#include<iostream>
using namespace std;
 int main()
{
    
int num;
int rem;
int count=0;int i;
int a[67];
cout<<"enter the number"<<endl;
cin>>num;




while (num!=0)

{

rem=num%10;
a[count]=rem;
num=num/10;
count++;



}

int b[count];
for ( i = 0; i <count; i++)
{
b[i]=a[count-i-1];

}


int flag=0;
for ( i = 0; i < count; i++)
{
    if (a[i]==b[i])
    {
        flag=1;

    }
    else
    {
        flag=0;
    }
    
}
if (flag==1)
{
    cout<<"the number is palindrome";
}else
{
    cout<<"not palindrome";
}

    return 0;
}
