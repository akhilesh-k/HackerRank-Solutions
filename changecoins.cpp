#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	// Read input
    int N, M;
    cin>>N;
    cin>>M;
    int *coin = new int[M];
    long *change = new long[N+1];
    for(int i = 0; i < M; i++) {
    	cin>>coin[i];
    }
    for(int i = 0; i < M; i++) {
        for(int j = coin[i]; j <= N; j++) {
            change[j] += change[j-coin[i]];
        }
    }

    cout<<change[N];
    return 0;
}