#ifndef SignUpApp_HPP
#define SignUpApp_HPP

#include <string>
#include <vector>

using namespace std;
struct User
{
    uint16_t id;
    uint16_t age;
    std::string name;
    User(){}
    User(uint16_t user_id, string user_name, uint16_t user_age): id(user_id), age(user_age), name(user_name){}
};

class SignUpApp
{
private:
    User users[100];
    uint16_t records_size{0};
public:
    SignUpApp() = default;
    int8_t AddRecord(string user_name, uint16_t user_age);
    int8_t FetchRecord(User &user ,uint16_t user_id);
    ~SignUpApp();
};

#endif