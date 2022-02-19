#ifndef parking_h
#define parking_h
#include <iostream>
#include<string>
using namespace std;
class parking {
private:
	int capacidad, ocupadas;
public:
	parking();
	parking(int capacidad, int ocupadas);
	virtual ~parking();
	void setcapacidad(int capacidad);
	void setocupadas(int ocupadas);
	void solicitarentrada();
	void solictarsalida();
	void aumentarocupadas();
	void disminuirocupadas();
	int getcapacidad();
	int getocupadas();
};
#endif