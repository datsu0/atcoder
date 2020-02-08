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

    int N;
    cin >> N;
    int t[N],x[N],y[N];
    for(int i=0;i<N;i++){
        cin >> t[i] >> x[i] >> y[i];
    }
    if(t[0]>=abs(x[0])+abs(y[0])&&(t[0]-(abs(x[0])+abs(y[0])))%2==1){
            cout << "No" << endl;
            return 0;
    }else if(t[0]<abs(x[0])+abs(y[0])){
        cout << "No" << endl;
            return 0;
    }

    for(int i=0;i<N-1;i++){
        int dist=abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
        int processTime=t[i+1]-t[i];

        if((processTime-dist)%2==1&&processTime>dist){
            cout << "No" << endl;
            return 0;    
        }else if(processTime<dist){
            cout << "No" << endl;
            return 0;   
        }
    }
    cout << "Yes"<<endl;
    
    
    return 0;
}