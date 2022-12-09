#include "defines.hpp"
#include "ObjectPool.hpp"
using namespace std;

//class Object;

Object::obj_types Object::getType()
{
// cout << "Entered  Object::getType" << endl;
return (Object::obj_types)type;
}

void Object::setType(Object::obj_types ot)
{
 type = ot;
}
