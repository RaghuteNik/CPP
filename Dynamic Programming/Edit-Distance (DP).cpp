/*
Given two strings A and B, find the minimum number of steps required to convert A to B.
Dynamic Programming Solution

Input :
    A = "monkey"
    B = "moneyc"

Output :
    1
*/


#include <iostream>

using namespace std;

int min(int x, int y, int z){
    return min(min(x, y), z);
}
int editDist(string A, string B) {
    
    int m = A.length(), n = B.length();
    
    int dp[n+1][m+1];
    
    for(int i = 0; i <= n; i++){
        dp[i][0] = i;
    }
    
    for(int j = 0; j <= m; j++){
        dp[0][j] = j;
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m; j++){
            if(B[i-1] == A[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min(dp[i-1][j-1], dp[i][j-1], dp[i-1][j]);
            }
        }
    }

    return dp[n][m];
}


int main()
{
    string str1, str2;
    str1 = "monkey", str2 = "money";
    cout<<"Required steps "<<editDist(str1, str2);

    return 0;
}