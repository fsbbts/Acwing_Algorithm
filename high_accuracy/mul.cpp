#include<iostream>
#include<vector>
using namespace std;

vector<int> mul(vector<int> &A, int b)
{
	vector<int> C;
	for(int i = 0, t = 0; i < A.size() || t; i++)
	{
		if(i < A.size()) t += A[i] * b;
		C.push_back(t % 10);
		t /= 10;
	}
 	
 	while(C.size() > 1 && C.back() == 0) C.pop_back();  
	return C;
}

int main()
{
	string a; cin >> a;
	int b; cin >> b;
	vector<int> A;
	for(int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
	
	vector<int> C;
	C = mul(A, b);
	for(int i = C.size() - 1; i >= 0; i--) cout << C[i];
	cout << endl; 	
	return 0;
} 
