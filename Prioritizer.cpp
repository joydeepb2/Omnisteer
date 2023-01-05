#include "Prioritizer.hpp"
using namespace std;

void Prioritizer::prioritize(const PolicyPool& pp)
{
 map<int,Policy> polst = pp.getPolicyPool();
 for (map<int,Policy>::const_iterator p = polst.begin(); p != polst.end(); p++)
 {
  ppq.push(p->second);
 } 
}

void Prioritizer::show_elements()
{
  while(!ppq.empty()){
    Policy p = ppq.top();
    cout << "Policy type is : " << p.getType() << " Policy priority is : " << p.getPriority() << endl;
    ppq.pop();
  }
}
