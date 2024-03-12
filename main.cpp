#include <iostream>
#include "sign_up_app.hpp"

using namespace std;
int main (void)
{
    SignUpApp app;
    cout<<"User Sign-Up Application"<<endl;
    uint16_t choice, id, age;
    string name;
    User user{};
    while (true)
    {
        cout<<"Please select an option:"<<endl;
        cout<<"1: Add Record"<<endl;
        cout<<"2: Fetch Record"<<endl;
        cout<<"3: Quit"<<endl<<endl;
        cout<<"Enter option: ";
        cin>>choice;
        cout<<endl;
        switch (choice)
        {
        case 1:
            cout<<"Add user. Please enter user name and age:"<<endl;
            cout<<"Name: ";
            cin>>name;
            cout<<"Age: ";
            cin>>age;
            cout<<endl;
            if (app.AddRecord(name, age) == 0)
            {
                cout<<"User record added successfully."<<endl;
            }
            else
            {
                cout<<"User list is full. Could not add user."<<endl;
            }
            cout<<endl;
            break;
        case 2:
            cout<<"Please enter user id:"<<endl;
            cout<<"User ID: ";
            cin>>id;
            if (app.FetchRecord(user, id) == 0)
            {
                cout<<"User Name: "<< user.name<<endl;
                cout<<"User Age: "<< user.age<<endl;
            }
            else
            {
                cout<<"User not found."<<endl;
            }
            cout<<endl;
            break;
        case 3:
            cout<<"Quitting..."<<endl;
            return -1;
        default:
            cout<<"Invalid option..."<<endl;
            cout<<endl;
            break;
        }
    }
    
    return -1;
}
