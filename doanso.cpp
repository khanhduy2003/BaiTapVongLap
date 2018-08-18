#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int error=1,nguoinhap,may=rand()%100+1;	
    while(1)
    {
    	cout << "Nhap so ma ban doan :" << endl;
        cin >> nguoinhap;
        if(may>nguoinhap)
        {
        	cout << "Ban nhap so nho hon so do " << endl;
        	error++;
		}
		else if(may==nguoinhap)
		{
			cout << "Ban doan dung roi,so do la :" << may << endl;
			break;
		}
		else
		{
			cout <<"Ban nhap so lon hon so do" << endl;
			error++;
		}
		if(error>5)
		{
			cout << "Ban thua roi , so do la :" << may << endl;
			break;
		}
	}
return 0;
}

