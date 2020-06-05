int strstr(const char *text, const char *pattern)
{
   int cnt = 0;
    bool a = false;
    if(*pattern)
        do {
            while(text[cnt] && text[cnt] != *pattern) ++cnt;
            if(text[cnt]) {
                int i = 1;
                a = true;
                while(a && pattern[i]) {
                    if(text[cnt + i] && text[cnt + i] == pattern[i])
                        ++i;
                    else
                        a = false;
                }
            }
        } while(!a && text[++cnt]);
    else
        a = true;
 
    return a ? cnt : -1;
}
