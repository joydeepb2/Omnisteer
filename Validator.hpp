#include "ObjectPool.hpp"
#include "PolicyPool.hpp"

class Validator{
	private:
		ObjectPool op;
		PolicyPool pp;
//		Prioritizer pr;
	public: 
		bool validate();
};
