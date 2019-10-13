#include <iostream>
#include <cstdlib>
#include <vector>

int main()
{
    const int MAX_SIZE = 715827882;
    int A = 0;
    int L = 0;
    int caseNum = 1;
    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\694_TheCollatzSequence\\input.txt", "r", stdin);

    while( scanf("%d %d", &A, &L) == 2 && A > 0 ){
        int terms = 1;
        int tempA = A;
        int tempL = L;
        while( A != 1 ){
            if( (A & 1) ){
                if( A >= MAX_SIZE )
                    break;
                A = ( 3 * A ) + 1;
            }
            else
                A /= 2;
            if( A > L )
                break;
            terms++;
        }
        std::cout << "Case " << caseNum++ << ": A = " << tempA << ", limit = " << tempL << ", number of terms = " << terms << std::endl;
    }
    return 0;
}

//Step 1: Choose an arbitrary positive integer A as the first item in the sequence.
//Step 2: If A = 1 then stop.
//Step 3: If A is even, then replace A by A/2 and go to step 2.
//Step 4: If A is odd, then replace A by 3 ∗ A + 1 and go to step 2