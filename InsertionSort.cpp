#include<iostream>
#include<vector>
using namespace std;
// space complexity O(1)
// time complexity O(n^2) = n ( n-1) / 2 

void swap(int &a, int &b)
{ 
     int t;
     t = a; 
     a = b;
     b = t;
}

void InsertionSort(vector<int> &v)
{
    int c;
    int size = v.size();
    if(size<1)
    return;

    for(int i = 1; i < size; i++)
    {
        for(int j = i; j>0; j--)
        {
            c++;
            if(v[j] < v[j-1])
            {
                swap(v[j],v[j-1]);
            }
            else
                break;
        }

    }
    cout << " O(n) = " << c << endl;
}

int main()
{
    vector<int> v = {10,9,8,7,6,5,4,3,2,1};
    InsertionSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}