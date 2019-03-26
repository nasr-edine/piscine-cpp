#include "phonebook.hpp"

int main() 
{   
    Contact contact[8];
    string input;
    int index = 0;
    do
    {
        cout << "prompt: ";
        cin >> input;
        if((input.compare("ADD")) == 0) 
        {
            if(index == 8) 
            {
                cout << "8 contacts max" << endl;
                continue;
            }

            contact[index].index = index;
            cout << "Enter first_name: ";
            cin >> contact[index].first_name;
            cout << "Enter last_name: ";
            cin >> contact[index].last_name;
            cout << "Enter nickname: ";
            cin >> contact[index].nickname;
            cout << "Enter login: ";
            cin >> contact[index].login;
            cout << "Enter postal_address: ";
            cin >> contact[index].postal_address;
            cout << "Enter email_address: ";
            cin >> contact[index].email_address;
            cout << "Enter birthday_date: ";
            cin >> contact[index].birthday_date;
            cout << "Enter favorite_meal: ";
            cin >> contact[index].favorite_meal;
            cout << "Enter underwear_color: ";
            cin >> contact[index].underwear_color;
            cout << "Enter darkest_secret: ";
            cin >> contact[index].darkest_secret;
            index++;
        }
        else if((input.compare("SEARCH")) == 0) 
        {
            cout << "|"; std::cout.width(10); std::cout << std::right << "index";
            cout << "|"; std::cout.width(10); std::cout << std::right << "first name";
            cout << "|"; std::cout.width(10); std::cout << std::right << "last name";
            cout << "|"; std::cout.width(10); std::cout << std::right << "nickname" << "|" << endl;

            for(int i = 0; i < index; i++)
            {
                if(contact[i].first_name.length() > 10)
                {
                    contact[i].first_name[9] = '.';
                    contact[i].first_name = contact[i].first_name.substr (0,10);
                }
                if(contact[i].last_name.length() > 10)
                {
                    contact[i].last_name[9] = '.';
                    contact[i].last_name = contact[i].last_name.substr (0,10);
                }
                if(contact[i].nickname.length() > 10)
                {
                    contact[i].nickname[9] = '.';
                    contact[i].nickname = contact[i].nickname.substr (0,10);
                }
                cout << "|"; std::cout.width(10); std::cout << std::right << i;
                cout << "|"; std::cout.width(10); std::cout << std::right << contact[i].first_name;
                cout << "|"; std::cout.width(10); std::cout << std::right << contact[i].last_name;
                cout << "|"; std::cout.width(10); std::cout << std::right << contact[i].nickname << "|" << endl;

            } 
        }
    } while(input.compare("EXIT") != 0);     
    return 0;
}

