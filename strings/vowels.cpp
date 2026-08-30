#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Mohit kumar anand";
    int n = s.length();
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        char ch = s[i];

        if(ch == 'a')
            count++;
        else if(ch == 'e')
            count++;
        else if(ch == 'i')
            count++;
        else if(ch == 'o')
            count++;
        else if(ch == 'u')
            count++;
        else if(ch == 'A')        // sir logic 
            count++;
        else if(ch == 'E')
            count++;
        else if(ch == 'I')
            count++;
        else if(ch == 'O')
            count++;
        else if(ch == 'U')
            count++;
    }

    cout << count << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string v = "Mohit kumar anand";
    string s;
    int count = 0;

    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(v.find(s[i]) != string::npos)     // my own logic
        {
            count++;
        }
    }

    cout << "Count = " << count;

    return 0;
}