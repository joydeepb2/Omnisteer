#include "defines.hpp"
#include "PolicyPool.hpp"
using namespace std;


Policy::policy_types Policy::getType()
{
// cout << "Entered  Policy::getType" << endl;
cout << "getType returns : " << (Policy::policy_types) type << endl;
return (Policy::policy_types) type;
}

void Policy::setType(Policy::policy_types pt)
{
 cout << "Policy::setType called with type : " << pt << endl;
 type = pt;
}
