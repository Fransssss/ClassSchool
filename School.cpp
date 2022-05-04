//
// Created by XaveF on 5/3/2022.
//

#include "School.h"
#include <sstream>

using std::stringstream;

// set data member _name with name
void School::SetName(const string &name)
{
    _name = name;
}

// set data member _rating with rating
void School::SetRating(const double &rating)
{
    _rating = rating;
}

// set Comment for each school
void School::SetComment(const string &comment)
{
    _name += "\" - Comment: \"" + comment ;
}

string School::Print()
{
    stringstream ss;
    ss << "\"Name: \"" << _name << "\", Rating: " << _rating;
    return ss.str();
}