#include<iostream>
#include<vector>
using namespace std;

vector<int> add(vector<int> &A, vector<int> &B)
{
	vector<int> C;
	if(A.size() < B.size())  return add(B, A);
	for(int i = 0, t = 0; i < A.size() || t; i++)
	{
		if(i < A.size()) t += A[i];
		if(i < B.size()) t += B[i];
		C.push_back(t % 10);
		t /= 10;
	}
	return C;
}
int main()
{
	string a, b;
	cin >> a >> b;
	vector<int> A, B;
	for(int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
	for(int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
	
	vector<int> C;
	C = add(A, B);
	for(int i = C.size() - 1; i >= 0; i--) cout << C[i];
	cout << endl;
	return 0;
 } 
