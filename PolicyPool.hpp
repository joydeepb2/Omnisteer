

#include "defines.hpp"
#include "SteeringEngineCreator.hpp"
#include "SteeringEngineExecution.hpp"
using namespace std;

#ifndef __POLICY
#define __POLICY

class SteeringEngineExecution;

class Policy{
	private:
		map<string,string>explicit_map;
//		SteeringEngineCreator sec;
//		SteeringEngineExecution see;
		int type;
	public:
		enum policy_types{EXPLICIT, IMPLICIT};
		Policy::policy_types getType();
		void setType(Policy::policy_types pt);
};

class PolicyPool
{
	private:
		map<int, Policy>polst;
	public:
		bool addPolicy(Policy&, int);
		bool removePolicy(int);
		Policy& getPolicy(int);
};


#endif


