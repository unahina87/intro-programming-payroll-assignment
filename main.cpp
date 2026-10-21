#include <iostream>

using namespace std;

string name;
void UserInput()
{
    cout<<"enter your name"<<endl;
    cin>>name;
}
void greetuser()
{
    cout<<"hello  "<<name<<endl;
}
int main()
{
    UserInput();
    greetuser();
    return 0;
}
