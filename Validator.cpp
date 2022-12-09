#include "Validator.hpp"

Validator::Validator()
{
 op = *(new ObjectPool());
 pp = *(new PolicyPool());
}

bool Validator::validate()
{
  list<Object::obj_types> lst;
  list<Object::obj_types>::const_iterator p;
  int i,j = 0;

  cout << "Entered Validator::validate" << endl;
  for (i = 0; i < op.getLen(); i++) // iterate over all the different objectives
  {
   if (pp.getPolicy(i).getType() == Policy::IMPLICIT) // Only Implicit policy anomalies are checked against objective types
   {
    for (j = 0; j < op.getLen(); j++)
    {
	if (i != j)
	{
          // Extract type of objective being considered
          lst = exclusion_list[op.getObject(i).getType()];
	  p = lst.begin();
	  while (p != lst.end())
	  {
	   if (*p == (int)op.getObject(j).getType()) { cout << "Existing - found anomaly" << endl; return false;}
	   p++;
	  }
	}
    }
   }
  }
  return true;
}

void Validator::setup_exclusion()
{
 static list<Object::obj_types> lst;
 lst.push_front(Object::MRC);
 lst.push_front(Object::MVC);
 lst.push_front(Object::CB_Prof);

 exclusion_list[Object::IOT_min] = lst;
}

ObjectPool& Validator::getObjectPool()
{
 return op;
}

PolicyPool& Validator::getPolicyPool()
{
 return pp;
}
