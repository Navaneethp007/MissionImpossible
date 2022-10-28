struct Node
{
    int cnt;
    char data;
    unordered_map<char, Node *> ms;
    bool ended;
    Node()
    {
        cnt = 0;
        ended = false;
        ms.clear();
        data = '\0';
    }
    Node(char c)
    {
        cnt = 1;
        ended = false;
        data = c;
        ms.clear();
    }
};
class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void insertTrie(string s)
    {
        int ns = s.size();
        Node *temp = root;
        for (int i = 0; i < ns; i++)
        {
            if (temp->ms[s[i]] == NULL)
            {
                temp->ms[s[i]] = new Node(s[i]);
            }
            else
            {
                temp->ms[s[i]]->cnt++;
            }
            temp = temp->ms[s[i]];
        }
        temp->ended = true;
    }
    int calculate(string s)
    {
        int ans = 0;
        int ns = s.size();
        Node *temp = root;
        for (int i = 0; i < ns; i++)
        {
            if (temp->ms[s[i]] == NULL)
            {
                return ans;
            }
            else
            {
                temp = temp->ms[s[i]];
                ans += temp->cnt;
            }
        }
        return ans;
    }
};
class Solution
{
public:
    vector<int> sumPrefixScores(vector<string> &words)
    {
        vector<int> ans;
        ans.clear();
        Trie t;
        for (auto x : words)
        {
            t.insertTrie(x);
        }
        for (auto x : words)
        {
            ans.push_back(t.calculate(x));
        }
        return ans;
    }
};