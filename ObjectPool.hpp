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
//		enum obj_types1 {TYPE1, TYPE2};
		enum obj_types {MRC, MVC, CB_Prof, IOT_min};
		Object::obj_types getType();
		void setType(Object::obj_types);
};

class ObjectPool {
	private:
		std::map<int,Object>oblst;
	public:
		bool addObject(Object&, int);
		bool removeObject(int);
		Object& getObject(int);
		int getLen();

};
/*
#endif
*/

