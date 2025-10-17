// 211. Design Add and Search Words Data Structure 

// https://leetcode.com/problems/design-add-and-search-words-data-structure/description/


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

class WordDictionary
{
    Node *root;

public:
    WordDictionary()
    {
        root = new Node();
    }

    void addWord(string word)
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

    bool search(string word)
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

    
};