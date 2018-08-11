#include <iostream>

using namespace std;

main()
{
	int n;
	float s=0,t=0;
	cout << "Nhap so n de tinh ket qua :"<< endl;
	cin >> n;
	for(float a=1;a<=n;a++){
	t+=1/a;
	s+=t;
	}
	cout << "Ket qua cua S la :" << s << endl;
}
