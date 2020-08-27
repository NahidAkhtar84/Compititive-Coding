//Hashing Data Structure

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> db;
    string str;
    while (n--)
    {
        cin >> str;
        if (db.count(str) == 0)
        {
            cout << "OK" << endl;
            db[str] = 1;
        }
        else
        {
            cout << str << db[str] << endl;
            db[str] += 1;
        }
    }
    return 0;
}
