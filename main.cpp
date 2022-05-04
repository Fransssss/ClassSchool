
#include <iostream>
#include "School.h"

using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::cin;

int main()
{
    // create object type School class
    School schoolOne;
    School schoolTwo;
    School schoolThree;

    // setName to each School object
    schoolOne.SetName("NorthEastern University Seattle");
    schoolTwo.SetName("Seattle University");
    schoolThree.SetName("Seattle Pacific University");

    // setRating for each School object
    schoolOne.SetRating(4.6);
    schoolTwo.SetRating(4.3);
    schoolThree.SetRating(4.3);

    // print data of each School object
    cout << endl;
    cout << " 1st School: " << schoolOne.Print() << endl;
    cout << " 2nd School: " << schoolTwo.Print() << endl;
    cout << " 3rd School: " << schoolThree.Print() << endl;

    // set and output comment
    char userOption;
    cout << endl << " Would you like to see comment for each school? Y/N: ";
    cin >> userOption;

    if(userOption == 'Y')
    {
        schoolOne.SetComment("...everything was unorganized...");
        schoolTwo.SetComment("This university is amazing...");
        schoolThree.SetComment("...absolutely loved it!..");

        cout << endl;
        cout << " 1st School: " << schoolOne.Print() << endl;
        cout << " 2nd School: " << schoolTwo.Print() << endl;
        cout << " 3rd School: " << schoolThree.Print() << endl;
        cout << endl << " Exit Program";
    } else if (userOption == 'N')
    {
        cout << endl << " Exit Program";
    } else
    {
        cerr << " Invalid Input" << endl;
    }
    cout << endl;
    return 0;
}
