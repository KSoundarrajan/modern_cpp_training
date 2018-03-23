#include "Counter.h"
#include <iostream>

using namespace std;

unsigned int Counter::m_counter;

Counter::Counter() {
	cout << m_counter++ <<endl;
}

Counter::~Counter() {
	--m_counter;
	cout << m_counter*m_counter<<endl;
}
