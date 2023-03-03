#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int u=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='h'){
            int j=i+1;
            for(;j<s.size();j++){
                if(s[j]=='e'){
                    int k=j+1;
                    for(;k<s.size();k++){
                        if(s[k]=='l'){
                            int l=k+1;
                            for(;l<s.size();l++){
                                if(s[l]=='l'){
                                    int m=l+1;
                                    for(;m<s.size();m++){
                                        if(s[m]=='o'){
                                            u=1;
                                        }
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(u==1){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}
/*A. Chat room
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".*/