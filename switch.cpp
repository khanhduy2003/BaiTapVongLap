#include <iostream>

using namespace std;

int main()
{
	int thang;
	cout << "Nhap Thang can kiem tra :";
	cin >> thang;
	switch(thang){
		case 1:
			cout <<"Thang nay co 31 ngay va thuoc quy 1";
			break;
		case 3:
			cout <<"Thang nay co 31 ngay va thuoc quy 1";
			break;
		case 5:
			cout <<"Thang nay co 31 ngay va thuoc quy 2";
			break;
		case 7:
			cout <<"Thang nay co 31 ngay va thuoc quy 3";
			break;
		case 8:
			cout <<"Thang nay co 31 ngay va thuoc quy 3";
	    case 10:
	    	cout <<"Thang nay co 31 ngay va thuoc quy 4";
	    case 12:
	    	cout <<"Thang nay co 31 ngay va thuoc quy 4";
			break;
		case 4 :
			cout <<"thang nay co 30 ngay va thuoc quy 2";
			break;
	    case 6 :
	    	cout <<"Thang nay co 30 ngay va thuoc quy 2";
	    	break;
	    case 9 :
	    	cout <<"thang nay co 30 ngay va thuoc quy 3";
	    	break;
	    case 2 :
	    	 int nam;
	    	 cout << "nhap nam can kiem tra :" << endl;
	    	 cin >> nam;
	    	 if(nam%4==0 && nam%100!=0||nam%400=x=0)
	    	 {
	    	 	cout<<"thang nay co 29 ngay va thuoc quy 1";
			 }
			 else
			 {
			 	cout<<"thang nay co 28 ngay va thuoc quy 1";
			 }
		default:
			cout <<"Thang nay khong hop le!";
			break;
	}	
}
