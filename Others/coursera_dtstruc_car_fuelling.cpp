//Not Accepted
#include<bits/stdc++.h>
using namespace std;

int compute_min_refills(long long dist, int tank, vector<long long> & stops) {
    // write your code here
    int numR =0, crntR=0, lstR=0;
    int n= stops.size();
    if(stops[crntR]> tank){
        return -1;
    }
    if(dist < tank){
        return 0;
    }
    while(crntR <n)
    {
        lstR = crntR;
        while(crntR +1 <= n && stops[crntR+1]- stops[lstR] <= tank)
        {
            crntR = crntR + 1;
        }
        if(crntR == lstR){
                break;
        }
        if(crntR <= n){
            numR = numR + 1;
        }
    }
    if(stops[lstR]+tank >= dist){
                return numR;
            }
            else{
                return -1;
            }

}


int main() {
    long long d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<long long> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}

