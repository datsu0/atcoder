#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <math.h>
using namespace std;


int main() {

    int H,N;
    cin >> H >> N;
    pair<int,int> A[N];
    for(int i=0;i<N;i++){
        cin >> A[i].first >> A[i].second;
    }
    
    vector<long long>ans(H+100,INFINITY);
    for(int HP=0;HP<H+100;HP++){
        for(int j=0;j<N;j++){
            ans[HP+A[j].first]=min(ans[HP+A[j].first],ans[HP]+A[j].second);
            cout << "HP = "<< HP <<" HP+A[j].first = " << HP+A[j].first <<  " ans[HP]+A[j].second = "<<ans[HP]+A[j].second<< endl; 
        }
    }
    cout << ans[H] << endl;
    return 0;
}