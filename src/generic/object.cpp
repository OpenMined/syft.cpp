#include <cstdlib>
#include <string>
#include <list>
#include <iostream>

#include "object.h"

using namespace std;
 
Object* Object::describe(string description) {
    this -> description = description;
    return this;
}

std::ostream& operator<<(std::ostream &strm, const Object &object) {
        if (object.child){
            return strm << "Object >" << object.child << ")";
        } else {
            return strm << "Object";
        }
}
