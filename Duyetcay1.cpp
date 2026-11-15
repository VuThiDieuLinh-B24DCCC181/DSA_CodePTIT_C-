#include <bits/stdc++.h>
using namespace std;

int search(int*M,int n, int x) {
    for(int i=0;i<n;i++) {
        if (M[i]== x) return i;
    }
}

void Duyet(int*M, int n , int*N) {
    int x = search(M,n,N[0]);

    if(x!=0) Duyet(M,x,N+1);
    if(x!= n-1) Duyet(M+x+1, n-x-1, N+x+1);
    
    cout << N[0] << " ";
}

int main() {
    int t; cin >> t;
    while (t--){
        int n; cin >> n; 

        int M[1000],N[1000];
        for(int i=0;i<n;i++) cin >> M[i];
        for(int i=0;i<n;i++) cin >> N[i];

        Duyet(M,n,N);
        cout << "\n";
    }
}