#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <math.h>
typedef long long ll;
const ll INF = 1e18; 
using namespace std;


int main() {

    int N,Y;
    cin >> N >> Y;
    int x=0;
    int y=0;
    int z=0;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            if(N-i-j>=0){
                if(10000*i+5000*j+1000*(N-i-j)==Y){
                cout << i << " " << j << " " << (N-i-j) << endl; 
                return 0;
                }
            }
        }
    }
    cout << -1 << " "<<-1<<" "<<-1<<endl;
    

    return 0;
}