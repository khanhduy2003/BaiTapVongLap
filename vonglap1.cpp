#include <iostream>

using namespace std;

main()
{
	int s=0;
	int t=0,n;
	cout << "Nhap so n de tinh ket qua :"<< endl;
	cin >> n;
	for(int a=1;a<=n;a++){
	t+=a;
	s+=t;
	}
	cout << "Ket qua cua S la :" << s << endl;
}
