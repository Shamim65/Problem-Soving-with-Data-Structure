#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N ;
    cin >> N ;
    int mid = N / 2 ;
    
    for(int i = 0 ; i < N ; i++){
        char start = '\\', end = '/' ;
        char mid_s = ' ', space = ' ';
        int start_pos = 0, end_pos = N - 1;
        
        if(i == mid)
        {
            mid_s = 'X' ;
            start = end = ' ';
        }
        else if(i < mid)
        {
            start_pos = i;
            end_pos = N - i - 1;
        }
        else
        {
            start_pos = N - i - 1;
            end_pos = i ;
            swap(start, end) ;
        }

        for(int j = 0 ; j < N; j ++)
        {
            if (j == mid)
            {
                cout << mid_s;
            }
            else if(j == start_pos)
            {
                cout << start;
            }
            else if(j == end_pos)
            {
                cout << end;
            }
            else
            {
                cout << space;
            }
        }
        
        cout << endl;
    }

    return 0;
}