//Job sequencing 

#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

typedef struct job {
	int number, deadline, profit;
};

bool compare( job j1, job j2 ) {
	return j1.profit > j2.profit;
}

void jobSequencing( job j[], int n ) {
	sort(j, j+n, compare);
	
	int result[n+1] = {0};
	
	int k;
	for( int i=0; i<n; i++ ) {
		k = j[i].deadline;
		while( k > 0 && result[k] != 0  )
			k--;
		if( k > 0 )
			result[k] = j[i].number;
	}
	
	cout << "Scheduled jobs are: ";
	for( int i=1; i<n; i++ ) {
		if( result[i] != 0 )
			cout << "J" << result[i] << " ";
	}
}

int main() {
	int n;
	cout << "Enter the number of jobs: ";
	cin >> n;
	job j[MAX];
	cout << "Enter of deadline and profit of each job." << endl;
	for( int i=0; i<n; i++ ) {
		cout << "Job " << i+1 << " : ";
		cin >> j[i].deadline >> j[i].profit;
		j[i].number = i + 1;
	}
	
	jobSequencing(j, n);
}
