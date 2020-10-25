#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x;
	double y;
	double R;

	srand((unsigned) time(NULL));
	for (int i=0; i<10; i++)
	{
		cout<<"x=";
		cin>>x;
		cout<<"y=";
		cin>>y;
		cout <<"R=";
		cin >>R;
		if ((y<=sqrt(R*R-x*x)&&y>=x&&y>0&&x>0)||(y<=sqrt(R*R-x*x)&&y<=x&&y<0&&x<0))
			cout <<"yes"<<endl;
		else
			cout <<"no"<<endl;
	}
	cout <<endl<<fixed;
	for (int i=0; i<10; i++)
	{
		x = 2*R*rand()/RAND_MAX - R;
		y = 2*R*rand()/RAND_MAX - R;
		
		if ((y<=sqrt(R*R-x*x)&&y>=x&&y>0&&x>0)||(y<=sqrt(R*R-x*x)&&y<=x&&y<0&&x<0))
			cout << setw(8) << setprecision(4) << x << " " << setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else 
			cout << setw(8) << setprecision(4) << x << " " << setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	system("pause");
	return 0;
}