#include "Validator.hpp"

int main(int argc, char **argv)
{
  Validator* val = new Validator();

  // Setup exclusion for validator
  val->setup_exclusion();

  ObjectPool& op = val->getObjectPool();
  PolicyPool& pp = val->getPolicyPool();
  
  //Create objects and add to ObjectPool
  /* Create 1st set of objects and policy */
  Object* o1 = new Object();
  o1->setType(Object::IOT_min);
  op.addObject(*o1,0);

  // Create policies and add to PolicyPool
  Policy *p1 = new Policy();
  p1->setType(Policy::IMPLICIT);
  pp.addPolicy(*p1,0);
  

  /* Create 2nd set of objects and policy */
  Object* o2 = new Object();
  o2->setType(Object::MVC);
  op.addObject(*o2,1);

  // Create policies and add to PolicyPool
  Policy *p2 = new Policy();
  p2->setType(Policy::IMPLICIT);
  pp.addPolicy(*p2,1); 


  val->validate();
 
	return 0;
}
