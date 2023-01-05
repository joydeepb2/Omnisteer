#include "defines.hpp"
#include "PolicyPool.hpp"
using namespace std;


Policy::policy_types Policy::getType()
{
// cout << "Entered  Policy::getType" << endl;
//cout << "getType returns : " << (Policy::policy_types) type << endl;
return (Policy::policy_types) type;
}

void Policy::setType(Policy::policy_types pt)
{
 cout << "Policy::setType called with type : " << pt << endl;
 type = pt;
}

int Policy::getPriority() const
{
 return priority;
}

void Policy::setPriority(int i)
{
  priority = i;
}

string Policy::getVplmn() const
{
 return vplmn_id;
}

void Policy::setVplmn(string vplmn_id)
{
 this->vplmn_id = vplmn_id;
}

string Policy::getImsi() const
{
 return imsi;
}

void Policy::setImsi(string imsi)
{
 this->imsi = imsi;
}

string Policy::getRat() const
{
 return rat;
}

void Policy::setRat(string rat)
{
 this->rat = rat;
}

int Policy::getValue() const
{
 return value;
}

void Policy::setValue(int value)
{
 this->value = value;
}

string Policy::getAlgorithm() const
{
 return algorithm;
}

void Policy::setAlgorithm(string algorithm)
{
 this->algorithm = algorithm;
}

bool operator<(const Policy& x, const Policy& y){return x.priority < y.priority;}
