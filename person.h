#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include <QString>
using namespace std;


class person
{
    private:
        QString name;
    public:
        virtual void print_name(){}
        void set_name(QString name)
        {
            this->name = name;
        }

        QString get_name()
        {
            return name;
        }
};

#endif // PERSON_H
