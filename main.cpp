#include <iostream>
#include <string>
#include "Employer.h"
#include "EmployerList.h"
using namespace std;

int main() {
    string name,last_name,id,email,password;
    bool flag = true;
    int index = -1;
    char choice;
    Employer* emp;
    EmployerList empList;
    while(flag) {
        cout << "for Sign-up enter 1 and for Login 2 and 3 to Exit" << endl;
        cin >> choice;
        switch (choice) {
            case '1':
                cout << "please enter your name: " << endl;
                cin >> name;
                cout << "please enter your last name: " << endl;
                cin >> last_name;
                cout << "please enter your id: " << endl;
                cin >> id;
                cout << "please enter your email: " << endl;
                cin >> email;
                cout << "please enter your password: " << endl;
                cin >> password;
                emp = new Employer(name,last_name,id,password,email);
                empList.addEmployer(*emp);
                delete emp;



                break;

            case '2':
                cout << "please enter your id: " << endl;
                cin >> id;
                cout << "please enter your password: " << endl;
                cin >> password;
                index = empList.checkId(id);
                if (index>=0) {
                    if (empList.checkPassword(password , index))
                        cout << "welcome" << endl;
                    else
                        cout << "worng password" << endl;
                }
                else
                    cout<<"id didnt exist"<<endl;
                break;

            case '3':
                cout<<"bye bye"<<endl;
                flag = false;
                break;

            default:
                cout << "try again" << endl;
        }
    }



    return 0;
}
