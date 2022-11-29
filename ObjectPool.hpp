#include "defines.hpp"
using namespace std;

class Object{};

class ObjectPool {
	private:
		std::map<int,Object>oblst;
	public:
		bool addObject(Object, int);
		bool removeObject(int);
		Object getObject(int);
};

