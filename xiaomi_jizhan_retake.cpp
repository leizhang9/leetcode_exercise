//if the ith base station can reach (x,y), then the signal strength is [q(i)/(1+d)] take integer downside.  d is distance
//return coordinate point  if same, return dictonary sequence smaller one.
//1<=towers.length<=50
//towers[i].length == 3
//0<=x(i), y(i), q(i) <=100
//1<=radius<=100
//dictionary sequence: x1<x2 cor x1<=x2, and y1<y2
//example
//input:
//	3,2
//	1,2,5
//	2,1,7
//	3,1,9
//output:
//	2,1
//example2:
//input:
//	3,2
//	1,2,13
//	2,1,7
//	0,1,9
//output:
//	1,2
//#include<iostream>
//#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int length, radius;
	char comma;
	int x[10], y[10], q[10];
	cin>>length>>comma>>radius;
	for (int i=0;i<length;i++) {
		cin>>x[i]>>comma>>y[i]>>comma>>q[i];
	}
//	cout<<x[0]<<y[0]<<q[0]<<endl;
//	cout<<x[1]<<y[1]<<q[1]<<endl;
//	cout<<x[2]<<y[2]<<q[2]<<endl; // tested, ok
	
	double d = 0.0;
	int k = 0;
	int signal[11*11]; //it's ok
	int signal_max = 0;
	int x_max, y_max;
	for (int i=0;i<=3;i++) {
		for (int j=0;j<=3;j++) {
			signal[k] = 0;
			for (int l=0;l<length;l++) {
				if ( ( pow((i-x[l]),2) + pow((j-y[l]),2) ) <= (radius*radius) ) { //in the radius
					d = sqrt( pow((i-x[l]),2) + pow((j-y[l]),2) );
//					cout<<"d="<<d<<endl;
					signal[k] = signal[k] + floor( q[l]/(1+d) );
				}
			}
			//test
//			cout<<i<<","<<j<<","<<signal[k]<<endl;
		if (signal[k] > signal_max) {
			signal_max = signal[k];
			x_max = i;
			y_max = j;
		}
		k++;	
		}
	}
	cout<<x_max<<","<<y_max<<endl;

//	int nums[3] = {2,4,3};
//	cout<<(nums[0]<<nums[1]<<nums[2]);//256 
	
	return 0;
}

