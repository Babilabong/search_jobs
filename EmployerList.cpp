//
// Created by אלמוג בבילה on 02/02/2024.
//

#include "EmployerList.h"

EmployerList::~EmployerList() {
    delete[] list;

}

void EmployerList::addEmployer(Employer &emp) {
    if(size == capacity){
        capacity += 2;
        Employer* newList = new Employer[capacity];
        for(int i=0;i<size;++i){
            newList[i] = list[i];
        }
        if(size!=0)
            delete[] list;
        list = newList;
    }
    list[size] = emp;
    size++;
}

void EmployerList::printEmpList() const {
    for(int i = 0; i<size; i++)
        list[i].printEmp();
}

int EmployerList::checkId(string id) const {
    for(int i = 0; i<size; ++i){
        if(list[i].getId()==id)
            return i;
    }
    return -1 ;
}

bool EmployerList::checkPassword(string password, int i) const {
    if(list[i].getPassword()==password)
        return true;
    return false;
}
