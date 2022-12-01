#include "Validator.hpp"

bool Validator::validate()
{
  cout << "Entered Validator::validate" << endl;
  for (int i = 0; i < op.getLen(); i++)
  {
    for (int j = 0; j < op.getLen(); j++)
    {
	if (i != j)
	{
	 if (op.getObject(i).getType() == Object::TYPE1)
	 {
	  if (op.getObject(j).getType() == Object::TYPE2) return false;
	 }
	}
    }
  }
  return true;
}
