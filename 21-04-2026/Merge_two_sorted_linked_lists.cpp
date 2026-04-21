#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/

int gcd(int a, int b) {
    if(a % b == 0)
        return b;
    return gcd(b, a % b);    
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

#define ll long long
#define hea cout << "YES\n";
#define na cout << "NO\n";
#define nl cout << '\n';

class Node 
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

Node* takeInput(int n)
{
    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

Node* marge_list(Node* &l1, Node* &l2)
{
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;

    Node* listA = l1;
    Node* listB = l2;
    Node* tmp = new Node(-1);
    Node* listC = tmp;

    while(listA != NULL && listB != NULL)
    {
        if(listA->val < listB->val)
        {
            listC->next = listA;
            listA = listA->next;
        }
        else
        {
            listC->next = listB;
            listB = listB->next;
        }
        listC = listC->next;
    }

    while(listA != NULL)
    {
        listC->next = listA;
        listA = listA->next;
        listC = listC->next;
    }

    while(listB != NULL)
    {
        listC->next = listB;
        listB = listB->next;
        listC = listC->next;
    }

    return tmp->next;
}

Node* print_list(Node* &res)
{
    Node* tmp = res;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    nl;
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n;
        Node* headA = takeInput(n);

        cin >> m;
        Node* headB = takeInput(m);

        Node* res = marge_list(headA, headB);
        print_list(res);
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/

#define ll long long
#define hea cout << "YES\n";
#define na cout << "NO\n";
#define nl cout << '\n';

#include <list>
using namespace std;

list<int> mergeLists(list<int> a, list<int> b)
{
    list<int> result;

    auto i = a.begin();
    auto j = b.begin();

    while(i != a.end() && j != b.end())
    {
        if(*i < *j)
        {
            result.push_back(*i);
            i++;
        }
        else
        {
            result.push_back(*j);
            j++;
        }
    }

    while(i != a.end())
    {
        result.push_back(*i);
        i++;
    }

    while(j != b.end())
    {
        result.push_back(*j);
        j++;
    }

    return result;
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n ;
        list<int> l1, l2;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            l1.push_back(x);
        }
        cin >> m;
        for(int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            l2.push_back(x);
        }
        list<int> ans;
        ans = mergeLists(l1, l2);
        for(auto it = ans.begin(); it != ans.end(); it++)
        {
            cout << *it << " ";
        }
        nl;
    }

    return 0;
}
