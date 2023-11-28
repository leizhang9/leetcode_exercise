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
#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int length, radius;
	char comma;
	int x[10], y[10], q[10];
//	cin>>length>>comma>>radius;
//	for (int i=0;i<length;i++) {
//		cin>>x[i]>>comma>>y[i]>>q[i];
//	}
	length = 3;
	radius = 2;
	x[0] = 1;
	y[0] = 2;
	q[0] = 5;
	x[1] = 2;
	y[1] = 1;
	q[1] = 7;
	x[2] = 3;
	y[2] = 1;
	q[2] = 9;
	
	int d = 0;
	int k = 0;
	int signal[10201];
	int signal_max = 0;
	int x_max, y_max;
	for (int i=0;i<=101;i++) {
		for (int j=0;j<=101;j++) {
			signal[k] = 0;
			for (int l=0;l<length;l++) {
				if ( ( (i-x[l])^2 + (j-y[l])^2 ) <= (radius^2) ) { //in the radius
					d = sqrt((i-x[l])^2 + (j-y[l])^2 );
					signal[k] = signal[k] + q[l]/(1+d);
				}
			}
		if (signal[k] > signal_max) {
			signal_max = signal[k];
			x_max = i;
			y_max = j;
		}
		k++;	
		}
	}
	cout<<x_max<<","<<y_max;

//	int nums[3] = {2,4,3};
//	cout<<(nums[0]<<nums[1]<<nums[2]);//256 
	
	return 0;
}

