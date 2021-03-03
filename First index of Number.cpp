//to find the index at which number is present.
#include<iostream>
using namespace std;
int firstIndex(int input[], int size, int x) 
{
    if(size==0)
    {
        return -1; //no array, no number
    }
    else if(input[0]==x)
    {
        return 0; //base case
    }
    int ans = firstIndex(input+1,size-1,x); //recursive call
    if(ans== -1)
    {
        return -1; //as otherwise it will return -1+1=0
    }
    else
    {
        return ans+1; //as index will be ans+1
    }
}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;
}

