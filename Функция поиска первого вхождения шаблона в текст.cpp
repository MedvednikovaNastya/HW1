int strstr(const char *text, const char *pattern)
{
   int x = 0;
    bool a = false;
    if(*pattern)
        do {
            while(text[x] && text[x] != *pattern) ++x;
            if(text[x]) {
                int i = 1;
                a = true;
                while(a && pattern[i]) {
                    if(text[x + i] && text[x + i] == pattern[i])
                        ++i;
                    else
                        a = false;
                }
            }
        } while(!a && text[++x]);
    else
        a = true;
 
    return a ? x : -1;
}
