#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter the age" << endl;
    cin >> age;
    if (age < 12)
    {
        cout << "the person is child";
    }
    else{
        if (age<=18)
        {
            cout<<"the eperson is teenager";
        }
        else
        {
            if(age<60)
            cout<<"the eperson is adult";
            else
            {
                cout<<"thr person is senior";
            }
            
        }
        
        
    }
    
        

    return 0;
}