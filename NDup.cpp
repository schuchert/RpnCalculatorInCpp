#include "NDup.h"
#include "RpnStack.h"
#include <vector>

NDup::NDup() {
}

NDup::~NDup() {
}

void NDup::invoke(RpnStack &values) {
	typedef std::vector<int> v_int;
	v_int valuesToCopy;

	int count = values.top();
	values.pop();

	while(count-- > 0) {
		valuesToCopy.push_back(values.top());
		values.pop();
	}

	for(int i = 0; i < 2; ++i)
		for(v_int::reverse_iterator iter = valuesToCopy.rbegin(); iter != valuesToCopy.rend(); ++iter)
			values.push(*iter);
}
