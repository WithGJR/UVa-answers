#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int N, Q;
    int current_case=0;
    
    while(scanf("%d%d", &N, &Q) == 2 && N != 0 && Q != 0) {
        int marbles[N];
        for (int i=0; i<N; i++) {
            scanf("%d", &marbles[i]);
        }
        sort(marbles, marbles+N);
        
        printf("CASE# %d:\n", ++current_case);
        for (int i=0; i<Q; i++) {
            int target_number;
            scanf("%d", &target_number);
            
            int index = lower_bound(marbles, marbles+N, target_number) - marbles;
            if (marbles[index] == target_number) {
               printf("%d found at %d\n", target_number, index+1);      
            } else {
               printf("%d not found\n", target_number);
            }
        }
    }
    return 0;    
}
