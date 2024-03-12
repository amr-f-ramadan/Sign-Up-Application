#include "sign_up_app.hpp"

int8_t SignUpApp::AddRecord(string user_name, uint16_t user_age)
{
    if (records_size < sizeof(users))
    {
        users[records_size] = User{records_size, user_name, user_age};
        records_size++;
        return 0;
    }
    else
    {
       return -1; 
    }
    
}
int8_t SignUpApp::FetchRecord(User &user ,uint16_t user_id)
{
    if (user_id < records_size)
    {
        user = users[user_id];
        return 0;
    }
    else
    {
       return -1; 
    }
    
}
SignUpApp::~SignUpApp()
{
}