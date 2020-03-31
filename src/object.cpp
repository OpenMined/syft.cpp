#include <cstdlib>
#include <string>
#include <list>
#include <iostream>

#include "object.h"

using namespace std;
 
AbstractObject* AbstractObject::describe(string description) {
    this -> description = description;
    return this;
}

string AbstractObject::show() const {
        if (this -> child){
            AbstractObject* child_ptr = this -> child;
            AbstractObject child = *child_ptr;
            string child_repr = child.show();

            return "Object > " + child_repr;
        } else {
            return "Object";
        }
}

std::ostream& operator<<(std::ostream &strm, const AbstractObject &object) {
    return strm << object.show();
}
