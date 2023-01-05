
#include "defines.hpp"
#include "PolicyPool.hpp"
using namespace std;

#ifndef __PRIORITIZER
#define __PRIORITIZER

class Prioritizer
{
 private:
  priority_queue<Policy> ppq;
  // priority_queue<Object> opq;

 public:
  void prioritize(const PolicyPool& pp);
  void show_elements();
 
};
#endif


