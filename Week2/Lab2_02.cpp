#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int k)
{
    int l = 0, r = n - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], j, f = 0, key;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n - 1; j++)
            {
                int sum = a[i] + a[j];
                // cout << sum << endl;

                key = binary_search(a, n, sum);
                if (key != -1)
                {
                    cout << i+1 << " " << j+1 << " " << key+1 << endl;
                    f = 1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if (f == 0)
        {
            cout << "No sequence found " << endl;
        }
    }
    return 0;
}

/*
1
10
24 28 48 71 86 89 92 120 168 201
*/