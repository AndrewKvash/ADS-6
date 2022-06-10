// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
private:
T x[50];
int f, l;
public:
TPQueue() {
f= 0;
l = 0;
}
void push(T value) {
int i = l++;
while ((x[i % size].prior < value.prior) && (--i >= f)) {
x[(i + 1) % size] = x[i % size];
}
x[(i + 1) % size] = value;
}
T pop() {
return x[(f++) % size];
}
};

struct SYM {
char ch;
int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
