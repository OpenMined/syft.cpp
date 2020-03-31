#ifndef OBJECT_POINTER_H
#define OBJECT_POINTER_H

#include <list>
#include <string>

using namespace std;
#include "object.h"

class ObjectPointer
{
 public:
  // public methods
  ObjectPointer(int id, string owner, string description);

  // static ObjectPointer* create_pointer(AbstractObject* obj,
  //                                      AbstractObject location,
  //                                      int id_at_location, bool register,
  //                                      int ptr_id, bool garbage_collect_data);
  string describe();
  int id;
  string owner;

  
 protected:
  // attributes
  // AbstractObject* location;
  string id_at_location;
  bool garbage_collect_data;
  string point_to_attr;
  list<string> tags;
  string description;
};

#endif