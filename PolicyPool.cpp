#include "PolicyPool.hpp"

bool PolicyPool::addPolicy(Policy& p, int i)
{
// cout << "Entered  PolicyPool::addPolicy with identifier : " << i << endl;
 
 pair<int,Policy> po(i,p);
 pair<map<int,Policy>::iterator, bool> res = polst.insert(po);
 if (res.second) // if the insertion succeeds 
 {
  cout << "Policy insertion succeeded" << endl;
  return true;
 }
 else // if the policy insertion didn't get through
 {
  cout << "Policy insertion didn't succeed" << endl;
  return false;
 }
}

bool  PolicyPool::removePolicy(int i)
{
 cout << "Entered  PolicyPool::removePolicy" << endl;
 map<int,Policy>::const_iterator p = polst.find(i);
 if (p != polst.end()) // the policy with the specific identifier has been found
 {
  cout << "Policy with the identifier has been found" << endl;
  polst.erase(p);
  return true;
 }
 else // policy with the specific identifier has not been found
 {
  cout << "Policy with the identifier has not been found" << endl;
  return false;
 }
}

Policy& PolicyPool::getPolicy(int i)
{
 //cout << "Entered  PolicyPool::getPolicy for identifier : " << i << endl;
 map<int,Policy>::const_iterator p = polst.find(i);
 if (p != polst.end()) return (Policy &)p->second;
 cout << "Could not find Policy" << endl;
// return (Policy &)polst[i];
}

const map<int,Policy>& PolicyPool::getPolicyPool() const
{
 return polst;
}
 
