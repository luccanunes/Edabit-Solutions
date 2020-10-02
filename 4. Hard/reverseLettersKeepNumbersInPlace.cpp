/*
    * Problem task : Create a function that reverses letters in a string but keeps digits in their current order.
    * Problem link: https://edabit.com/challenge/7MB4iAGx53BMgHAC6
*/

#include <bits/stdc++.h>

using namespace std;

string reverse(string str);

int main()
{
    // * Running some sample cases

    cout << reverse("ab89c") << endl; // "cb89a"

    cout << reverse("jkl5mn923o") << endl; // "onm5lk923j"

    cout << reverse("123a45") << endl; // "123a45"

    return 0;
}

string reverse(string str)
{
    int l = 0;
    int r = str.length() - 1;

    while (l <= r)
    {
        if (!isdigit(str[l]) && !isdigit(str[r]))
        {
            cout << "Both are letters" << endl;
            char temp = str[l];
            str[l] = str[r];
            str[r] = temp;
            l++;
            r--;
        }
        else if (!isdigit(str[l]))
        {
            cout << "Only left is a letter" << endl;
            r--;
        }
        else if (!isdigit(str[r]))
        {
            cout << "Only right is a letter" << endl;
            l++;
        }
        else
        {
            l++;
            r--;
        }
    }
    return str;
}