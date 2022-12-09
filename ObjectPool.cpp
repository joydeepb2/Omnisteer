#include "ObjectPool.hpp"

bool ObjectPool::addObject(Object& o, int i)
{
// cout << "Entered ObjectPool::addObject" << endl;
 pair<int,Object> p(i,o);
 pair<map<int, Object>::iterator, bool> res = oblst.insert(p);
 if (res.second)
 {
  cout << "Object has been inserted successfully" << endl;
  return true;
 }
 else
 {
  cout << "Object has not been inserted successfully" << endl;
  return false;
 }
}

bool ObjectPool::removeObject(int i)
{
 cout << "Entered ObjectPool::removeObject" << endl;
 map<int,Object>::iterator p = oblst.find(i);
 if (p != oblst.end()) // if the specific identifier has been found in the key list
 {
  oblst.erase(p);
  return true;
 }
 else // if the specific identifier has not been found in the key list
 {
  return false;
 }
  
}
 
Object& ObjectPool::getObject(int i)
{
 //cout << "Entered ObjectPool::getObject" << endl;
 map<int, Object>::const_iterator p = oblst.find(i);
 return (Object  &)((*p).second);
}

int ObjectPool::getLen()
{
// cout << "Entered ObjectPool::getLen" << endl;
 //return 2;
 return oblst.size();
}
