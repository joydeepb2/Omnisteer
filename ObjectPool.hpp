#include "defines.hpp"
using namespace std;

/*
#ifndef __OBJECT
#define __OBJECT
*/

class Object{
	private:
		int type;
	public:
		enum obj_types {TYPE1, TYPE2};
		int getType();
};

class ObjectPool {
	private:
		std::map<int,Object>oblst;
	public:
		bool addObject(Object, int);
		bool removeObject(int);
		Object& getObject(int);
		int getLen();

};
/*
#endif
*/

