#include<iostream>
using namespace std;
void main() {
	int a, b, listn[100][100] = { 0 },n=1;
	int l = 0, r = 0;
	cin >> a >> b;
	while (1) {
		while (n < (a*b + 1)) {
			listn[l][r] = n;
			if ((r < (b - 1)) && (listn[l][r + 1] == 0)&&(listn[l-1][r]!=0)) {
				r++;
			}
			else if (l < (a - 1) && (listn[l + 1][r] == 0)) {
				l++;
			}
			else if ((r>0) && listn[l][r - 1] == 0) {
				r--;
			}
			else if ((l > 0) && listn[l - 1][r] == 0) {
				l--;
			}
			n++;
		}
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << listn[i][j] << "\t";
			}
			cout << endl;
		}
		cin >> a >> b;
		n = 1;
		l = 0;
		r = 0;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				listn[i][j] =0;
			}

		}
	}




}