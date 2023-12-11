#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

void display_menu();
class User
{
protected:
    string name ,national_id , password , email, mobile_num;
    public:
        User();
        ~User();

};

#endif // USER_H
