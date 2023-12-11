#ifndef REGISTER_H
#define REGISTER_H
#include<string>
using namespace std;

#include <User.h>


class Register : public User
{
    private:

    public:
        Register();
        ~Register();
        void register_new_user();

        void set_name();
        bool valid_name(string n);
        void name_format();

        void set_mob_num();
        bool valid_mob_num(string m);

        void set_id();
        bool unique_id(string i);

        void set_email();
        bool valid_email(string e);
        void email_format();
        bool unique_email(string e);

        void set_password();
        bool strong_password(string p);
        void password_tips();
        string cover_password();
        string encrypt(string p);


        void set_data();
        void display_data();


};

#endif // REGISTER_H
