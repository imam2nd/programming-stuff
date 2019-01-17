#include<bits/stdc++.h>
using namespace std;

int main()
{
    int totalSecond;
    cin >> totalSecond;

    int hour = totalSecond / 3600;
    int minute = (totalSecond % 3600) / 60;
    int second = totalSecond % 60;

    cout << hour << ":" << minute << ":" << second << endl;
    return 0;
}

