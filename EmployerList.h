//
// Created by אלמוג בבילה on 02/02/2024.
//

#ifndef JOB_SEARCH_EMPLOYERLIST_H
#define JOB_SEARCH_EMPLOYERLIST_H
#include "Employer.h"

class EmployerList {
public:
    EmployerList():list(nullptr), size(0), capacity(0){}
    ~EmployerList();

    void addEmployer(Employer& emp);
    void printEmpList() const;
    int getSize() const{return size;}
    int checkId(string id)const;
    bool checkPassword(string password , int i)const;

private:
    Employer *list;
    int size;
    int capacity;
};


#endif //JOB_SEARCH_EMPLOYERLIST_H
