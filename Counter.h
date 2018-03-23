#ifndef __COUNTER_H__
#define __COUNTER_H__

using namespace std;

class Counter {
public:
	Counter();
	~Counter();

private:
	static unsigned int m_counter;
};

#endif // !__COUNTER_H__
