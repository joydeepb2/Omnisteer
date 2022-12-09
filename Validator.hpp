#include "ObjectPool.hpp"
#include "PolicyPool.hpp"

class Validator{
	private:
		ObjectPool op;
		PolicyPool pp;
		map<Object::obj_types,list<Object::obj_types>> exclusion_list; // Exclusion list for implicit objectives
//		Prioritizer pr;
	public: 
		Validator();
		bool validate();
		void setup_exclusion(); // To set up exlusion list
		ObjectPool& getObjectPool();
		PolicyPool& getPolicyPool();
};
