// test

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // code
};

int main()
{

    int maxChar;
    int i;
    char current = '\n';
    char previous;
    cout << "Max Char " << endl;
    scanf("%d", &maxChar);
    cout << "Flag : " << endl;
    getchar(); // or scanf("%c", &variable);
    // printf("%c %c", previous, current);

    for (i = 0; i < maxChar; i++)
    {
        previous = current;
        cout << "Enter char : " << endl;
        current = getchar();
        cout << current << endl;
        if ((current == '\n') && (previous == '\n'))
        {
            break;
        }
    }
    printf("%d", i);

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    return 0;
}