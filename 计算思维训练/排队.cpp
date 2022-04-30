#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
int main()
{
    int g, k = 1;
    while (cin >> g, g != 0)
    {
        const int N = 10010, M = 1000010; 
        int cnt = 0, flag = 0;
        string cmd;
        unordered_map<string, int> belong;
        queue<string> person[N]; 
        for (int i = 1; i <= g; i++)
        {
            int n;
            cin >> n;
            while (n--)
            {
                string x;
                cin >> x;
                belong[x] = i; // i为组
            }
        }
        cout << "Case #" << k << ":" << endl;
        k++;
        while (cin >> cmd, cmd != "stop")
        {
            if (cmd == "enqueue")
            {
                int i;
                string x;
                cin >> x;
                if(belong[x]==0)
                {
                    person[cnt].push(x);
                    cnt++;
                }
                else
                {
                    for (i = 0; i < cnt; i++)
                    {
                        if (belong[x] == belong[person[i].front()] && !person[i].empty())
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 1)
                        person[i].push(x);
                    else
                    {
                        person[i].push(x);
                        cnt++;
                    }
                    flag = 0;
                }
            }
            else if (cmd == "deqteam")
            {
                string x;
                cin >> x;
                int i;
                if (belong[x] == 0)
                {
                    cout << x << endl;
                    for (int i = cnt - 1; i >= 0; i--)
                    {
                        if (person[i].front() == x)
                        {
                            person[i].pop();
                            break;
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < cnt; i++)
                    {
                        int num = 0, sig = 0;
                        while (belong[x] == belong[person[i].front()] && !person[i].empty())
                        {
                            if (num == 0)
                            {
                                cout << person[i].front();
                                num++;
                            }
                            else
                            {
                                cout << " " << person[i].front();
                                num++;
                            }
                            person[i].pop();
                            sig = 1;
                        }
                        if(sig==1)
                            break;
                    }
                    cout << endl;
                }
            }
            else
            {
                for (int i = 0; i < cnt; i++)
                {
                    if (!person[i].empty())
                    {
                        cout << person[i].front() << endl;
                        person[i].pop();
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
