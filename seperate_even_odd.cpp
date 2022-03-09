// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    Node *divide(int t, Node *head)
    {
        vector<int> e;
        vector<int> o;

        Node *cur = head;
        while (cur)
        {
            if ((cur->data) % 2 == 0)
            {
                e.push_back(cur->data);
            }
            else
            {
                o.push_back(cur->data);
            }
            cur = cur->next;
        }

        int n = e.size();
        int m = o.size();

        int i = 0, j = 0;
        cur = head;
        while (cur)
        {
            if (cur and i < n - 1)
            {
                cur->data = e[i];
                i++;
            }
            else if (cur and j < m - 1)
            {
                cur->data = o[j];
                j++;
            }

            cur = cur->next;
        }

        return head;
    }
};