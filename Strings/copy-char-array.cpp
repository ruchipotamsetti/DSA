#include<bits/stdc++.h>
using namespace std;


// Function to copy one string to other
// assuming that other string has enough
// space.
/*
----ITERATIVE APPROACH----

void copyCharArray(char str1[], char str2[])
{
    int i = 0;
    for(i=0; str1[i] != '\0'; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
}
*/

// -----RECURSIVE APPROACH-----
void copyCharArray(char str1[], char str2[], int i)
{
    if(str1[i] == '\0'){
        return;
    }
    str2[i] = str1[i];
    copyCharArray(str1, str2, i+1);
}

int main()
{
    char str1[10] = "Geek";
    char str2[10] = "";
    copyCharArray(str1, str2, 0);
    cout<<str2;
    return 0;
}

