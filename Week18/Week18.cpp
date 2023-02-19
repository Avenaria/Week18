

#include <iostream>
using namespace std;
struct avtoM
{
	int longe; //длинна
	int clearance;
	int EngineCapacity; //обьем двигателя
	int enginePower; //мощность 
	int wheelDiameter;
	char colour[25];
	int transmissionType;

  
}*p;
 avtoM temp; 
void additAvto( avtoM *p) {

cout << "Введите данные по вашему автомобилю ";
cout << "long ";
cin >> p->longe;
cout << " clearance ";
cin >> p->clearance;
cout << " colour ";
cin >> p->colour;
cout << "EngineCapacity ";
cin >> p->EngineCapacity;
cout << "enginePower ";
cin >> p->enginePower;
cout << "transmissionType ";
cin >> p->transmissionType;
cout << " wheelDiameter";
cin >> p->wheelDiameter;

};

void  showAvto(avtoM* p) {
	cout << p->clearance << p->colour << p->EngineCapacity
		<< p->wheelDiameter << p->transmissionType
		<< p->longe << p->enginePower;

}

void searchAvto(avtoM* p) {
	cout << "Поиск поданным ";
	for (int i = 0; i < 7; i++) {
		cout << "long " << p[i].longe;
		cout << "clearance " << p[i].clearance;
		cout << " colour " << p[i].colour;
		cout << "EngineCapacity " << p[i].EngineCapacity;
		cout << "enginePower " << p[i].enginePower;
		cout << "transmissionType " << p[i].transmissionType;
		cout << " wheelDiameter" << p[i].wheelDiameter;
	}

};
int main()
{
	



   
}

