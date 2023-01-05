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
		int priority;
		string vplmn_id;
		string imsi;
		string rat;
		int value;
		string algorithm;
	public:
		enum policy_types{EXPLICIT, IMPLICIT};
		Policy::policy_types getType();
		void setType(Policy::policy_types pt);
		int getPriority() const;
		void setPriority(int);
		string getVplmn() const;
		void setVplmn(string vplmn_id);
		string getImsi() const;
		void setImsi(string imsi);
		string getRat() const;
		void setRat(string rat);
		int getValue() const;
		void setValue(int value);
		string getAlgorithm() const;
		void setAlgorithm(string algorithm);
		friend bool operator< (const Policy&, const Policy&);
};

class PolicyPool
{
	private:
		map<int, Policy>polst;
	public:
		bool addPolicy(Policy&, int);
		bool removePolicy(int);
		Policy& getPolicy(int);
		const map<int,Policy>& getPolicyPool() const;
};


#endif


