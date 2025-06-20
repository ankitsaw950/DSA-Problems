for (int i = 0; i < str.length(); i++)
        {
            if (str[0] != '1')
            {
                ch1 = str[0];
                flag = true;
                break;
            }
            ch1 = str[i + 1];
            break;
        }