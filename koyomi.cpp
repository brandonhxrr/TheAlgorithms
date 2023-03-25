#include <iostream>

using namespace std;

int main() {
    
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
    
    int n, q;
    string colors;
    
    cin >> n; // long of the string colors 
    cin >> colors; // string that contains the colors
    cin >> q; // number of plans
    
    for(int i = 0; i < q ; i++ ) {
        
        int pieces; // maximun amount of pieces to repaint
        char color; // Koyomi's possible favorite color
        
        int l = 0, r = 0;
        
        int maxK = 0;
        
        cin >> pieces >> color;
        
        int aux = pieces;
        
        
        while ( l < n && r < n){
            r = l;
            while (r < n){
            
                if (colors[r] != color){
                    
                    if(aux == 0) break;
                    aux--;
                }
                r++;
            }
            maxK = max(r-l, maxK);
            aux = pieces;
            l++;
        }
        
        cout << maxK <<endl;
        
    }

    return 0;
}

