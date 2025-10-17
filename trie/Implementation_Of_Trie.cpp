#include <iostream>
using namespace std;

struct Node
{
    Node *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
        return links[ch - 'a'] != NULL;
    }

    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }

    void setEnd()
    {
        flag = true;
    }

    bool isEnd()
    {
        return flag;
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

    void insert(string word)
    {
        Node *node = root;

        for (char ch : word)
        {
            if (!node->containsKey(ch))
            {
                node->put(ch, new Node());
            }

            node = node->get(ch);
        }

        node->setEnd();
    }

    bool Search(string word)
    {
        Node *node = root;

        for (char ch : word)
        {
            if (!node->containsKey(ch))
            {
                return false;
            }
            node = node->get(ch);
        }

        return node->isEnd();
    }

    bool startsWith(string prefix)
    {
        Node *node = root;

        for (char ch : prefix)
        {
            if (!node->containsKey(ch))
            {
                return false;
            }
            node = node->get(ch);
        }

        return true;
    }
};

int main()
{

     Trie trie;
    trie.insert("apple");
    trie.insert("app");

    cout << boolalpha; // print true/false instead of 1/0

    cout << "Search 'apple': " << trie.Search("apple") << endl;      // true
    cout << "Search 'app': " << trie.Search("app") << endl;          // true
    cout << "Search 'apples': " << trie.Search("apples") << endl;    // false
    cout << "Starts with 'app': " << trie.startsWith("app") << endl; // true
    cout << "Starts with 'bat': " << trie.startsWith("bat") << endl; // false



    return 0;
}