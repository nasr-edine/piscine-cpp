#include <iostream>
#include <iomanip>   
using namespace std;

class Contact 
{ 
    public: 
  
    int index; 
    string first_name; 
    string last_name; 
    string nickname; 
    string login; 
    string postal_address; 
    string email_address; 
    string birthday_date;
    string favorite_meal;
    string underwear_color;
    string darkest_secret;
    int number;

    // Member Functions() 
    void printname() 
    { 
       cout << "Geekname is: " << first_name; 
    } 
};