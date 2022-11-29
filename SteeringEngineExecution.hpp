#ifndef __STEERENGINEEXECUTION
#define __STEERENGINEEXECUTION

#include "defines.hpp"
#include "SteeringEngineType.hpp"
#include "PolicyPool.hpp"
using namespace std;

class Policy;
class Object;

class SteeringEngineExecution{
	private:
		SteeringEngineType set;
	public:
		void execute(SteeringEngineType set, Policy pol, Object& obj);
};
#endif
