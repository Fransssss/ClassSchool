//
// Created by XaveF on 5/3/2022.
//

#ifndef CLASSSCHOOL_SCHOOL_H
#define CLASSSCHOOL_SCHOOL_H

#include <iostream>

using std::string;

class School
{
private:
    string _name;
    double _rating;
public:
    void SetName(const string& name);
    void SetRating(const double& rating);
    void SetComment(const string& comment);
    string Print();
};


#endif //CLASSSCHOOL_SCHOOL_H
