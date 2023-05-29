#include "counter.h"

Counter::Counter() { num = 1; };
Counter::Counter(int value) { num = value; };
int Counter::get_num() { return num; };
void Counter::set_num(int value) { num = value; };
void Counter::plus() { ++num; };
void Counter::minus() { --num; };