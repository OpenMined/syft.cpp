#include <list>
#include <string>

using namespace std;
#include "objectPointer.h"

ObjectPointer::ObjectPointer(int id, string owner, string description) {
    this->id = id;
    this->owner = owner;
    this->description = description;
}

string ObjectPointer::describe() {
    return this->description;
}