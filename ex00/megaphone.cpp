#include <iostream>
using namespace std;

int main(int argc, char * argv[]) 
{
    std::locale loc;
    if(argc == 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
        for(int i=1; i<argc; ++i)
        {
            for (size_t j=0; j<strlen(argv[i]); ++j)
                cout << toupper(argv[i][j], loc);
        }
    cout << endl;
    return 0;
}