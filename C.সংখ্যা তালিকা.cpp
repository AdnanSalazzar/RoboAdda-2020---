#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int N , i , j  , max1 , max2 ;

    cin >> N ;

    int a[N];

    for(i = 0 ; i < N ; i++)
    {
        cin >> a[i];
    }

    sort(a , a+N);

    max1 = a[N-1] - a[1];
    max2 = a[N-2] - a[0];

    if(max1 < max2)
    {
        cout << max1<<endl;
    }
    else
        cout << max2 <<endl;

    return 0 ;
}
