#ifndef coche_h
#define coche_h
#include <iostream>
#include<string>
using namespace std;
class coche {
private:
	string matricula;
public:
	coche();
	coche(string matricula);
	virtual ~coche();
};
#endif
