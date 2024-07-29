#include<iostream>
using namespace std;
int main()
{
    int password;

    cout<<"enter the pass:";
    cin>>password;
    
    while(password<999999)
    {
        cout<<"the pass does not meet the required condition, please enter the pass again"
        cin>>password;
    }
    cout<<"the user has enter correct password"<<endl;
    return 0;
}