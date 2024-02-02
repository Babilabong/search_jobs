//
// Created by אלמוג בבילה on 02/02/2024.
//

#include "Employer.h"

Employer::Employer(const Employer &other) {
    name = other.name;
    last_name = other.last_name;
    id = other.id;
    password = other.password;
    email = other.email;
}

void Employer::printEmp() {
    cout<<endl<<"name: "<< this->name <<endl;
    cout<<"last name: "<<this->last_name<<endl;
    cout<<"email: "<<this->email<<endl;

}
