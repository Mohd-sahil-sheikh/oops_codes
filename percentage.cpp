
#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[5];
    cout<<"enter the martks in 5 subjects "<<endl;
for ( i = 0; i <5; i++)
{
    cin>>a[i];


}
float percentage;
int total=0;
for ( i = 0; i < 5; i++)
{
total =(total+a[i]);


}

cout<<"average marks is below"<<endl;
percentage =total/5;
cout<<"percentage is"   <<percentage<<endl;
return 0;
}