#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
 
    vector<string> grid(n);
    for(int i = 0; i < n; i++)
        cin >> grid[i];
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '-')
                cout << '-';
            else
                cout << ((i+j)%2==0 ? 'B' : 'W');
        }
        cout << "
";
    }
 
    return 0;
}