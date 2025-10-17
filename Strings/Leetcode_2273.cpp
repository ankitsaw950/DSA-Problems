// 2273. Find Resultant Array After Removing Anagrams

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<string> removeAnagrams(vector<string> &words)
{

    unordered_map<char, int> mp;

    int i = 0;

    while (i < words.size()-1)
    {

        //  put the value of the first word in the map

        mp.clear();

        cout<< "First word : "<< words[i] << endl;

        for (char ch : words[i])
        {

            mp[ch]++;
        }


        cout << "The map is : " << endl;
        for (auto it : mp)
        {
            cout << it.first << " -> " << it.second << endl;
        }



        cout << "Second word : " << words[i + 1] << endl;

        for (char ch : words[i + 1])
        {
            if (mp.find(ch) != mp.end())
            {
                mp[ch]--;
                if (mp[ch] == 0)
                {
                    mp.erase(ch);
                }
            }
            else
            {
                mp[ch]++;
                break;
            }
        }

        if (mp.size() == 0)
        {

            words.erase(words.begin() + i );
        }
        else
        {

            i++;
        }
    }

    return words;
}

int main()
{

    vector<string> words = {"abba","baba","bbaa","cd","cd"};

    vector<string> result = removeAnagrams(words);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}