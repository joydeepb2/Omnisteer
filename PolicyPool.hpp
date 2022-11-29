#ifndef __POLICY
#define __POLICY


#include "defines.hpp"
#include "SteeringEngineCreator.hpp"
#include "SteeringEngineExecution.hpp"
using namespace std;

class SteeringEngineExecution;

class Policy{
	private:
		map<string,string>explicit_map;
		SteeringEngineCreator sec;
		SteeringEngineExecution& see;
	public:
		enum policy_type{EXPLICIT, IMPLICIT};
};

class PolicyPool
{
	private:
		map<int, Policy>polst;
	public:
		bool addPolicy(Policy, int);
		bool removePolicy(int);
		Policy getPolicy(int);
};


#endif


