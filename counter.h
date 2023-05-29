#pragma once

class Counter
{
private:
	int num;
public:
	Counter();
	Counter(int value);
	int get_num();
	void set_num(int value);
	void plus();
	void minus();
};

