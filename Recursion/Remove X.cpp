#include <iostream>
using namespace std;
#include<cstring>
void removeX(char input[]) 
{
    int len=strlen(input);
    if(len==0)
    {
        return;
    }
    else
    {
        removeX(input+1);
        if(input[0]=='x')
        {
       
        for(int i=0;input[i]!='\0';i++)  // shift the array towards left by 1 space
            input[i]=input[i+1];
        }
    }
}
int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

