#include "ObjectPool.hpp"

bool ObjectPool::addObject(Object, int)
{
 cout << "Entered ObjectPool::addObject" << endl;
}

bool ObjectPool::removeObject(int)
{
 cout << "Entered ObjectPool::removeObject" << endl;
}
 
Object& ObjectPool::getObject(int)
{
 cout << "Entered ObjectPool::getObject" << endl;
}

int ObjectPool::getLen()
{
 cout << "Entered ObjectPool::getLen" << endl;
 return 2;
}
