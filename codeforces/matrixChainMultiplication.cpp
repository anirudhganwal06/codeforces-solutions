//Matrix-chain multiplication

#include<iostream>
#define MAX 100
using namespace std;

void print_paren( int s[][MAX], int i, int j )
{
	if( i == j )
		cout << "A" << i;
	else
	{
		cout << "(";
		print_paren(s, i, s[i][j] );
		print_paren(s, s[i][j]+1, j);
		cout << ")";
	}
}

void matrix_chain_order( int p[], int n )
{
	int m[MAX][MAX], s[MAX][MAX];
	
	for( int i=1; i<=n; i++ )
		m[i][i] = 0;

	for( int l=2; l<=n; l++ )
	{
		for( int i=1; i<=n-l+1; i++ )
		{
			int j = i+l-1;
			m[i][j] = INT_MAX;
			for( int k=i; k<j; k++ )
			{
				int q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
				if( q < m[i][j] )
				{
					m[i][j] = q;
					s[i][j] = k;
				}
			}
		}
	}

	cout << "The most efficient cost is : " << m[1][n] << endl;
	print_paren(s, 1, n);
}

int main()
{
	int p[MAX], n;
	
	cout << "Enter the number of arrays: ";
	cin >> n;
	
	cout << "Enter the values of order array: ";
	for( int i=0; i<=n; i++ )
		cin >> p[i];
	
	matrix_chain_order( p, n );
	
	return 0;
}
