#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIN()
{
    string username, password, un, pw;

    cout << "Enter Username : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;

    ifstream read("data\\" + username + ".txt");

    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;

    cout << "1: Register\n2: login\nYour Choice: ";
    cin >> choice;
    if (choice == 1)
    {
        string username, password;

        cout << "select a username: ";
        cin >> username;
        cout << "select a password: ";
        cin >> password;

        ofstream file;
        file.open("data\\" + username + ".txt");
        file << username << endl
             << password;
        file.close();

        main();
    }
    else if (choice == 2)
    {
        bool status = IsLoggedIN();
        
        if (!status)
        {
            cout <<"False Login!" << endl;
            system ("PAUSE");
            return 0;
        }
        else
        {
            cout <<"Succesfully Loggin In!" << endl;
            system ("PAUSE");
            return 1;
        }
        
    }

    
    
}
