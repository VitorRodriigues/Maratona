#include <bits/stdc++.h>

#define ft first
#define sd second
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define mkp make_pair
#define ini int i
#define inj int j
#define sz size
#define ll long long int
#define rep(i, a, n) for (i = a; i < n; i++)
#define tam(vet) sizeof(vet) / sizeof(vet[0])
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MAXN (int)1e6 + 5

using namespace std;

int main() {
   // freopen("input.txt", "r", stdin);
    unsigned int A, B;

    while(cin >> A >> B) {
        printf("%u\n", A^B);
    }
    
    return 0;
}