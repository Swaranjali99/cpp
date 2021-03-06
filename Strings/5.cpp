// Save Iron Man

#include<bits/stdc++.h>
using namespace std;

bool isAlphaNumeric(char c){
    if((c >='a' && c<='z') ||
    (c >='A' && c<='Z')||
    (c >='0' && c<='9')){
        return true;
    }
    return false;
}
int main() {
	int t;
	cin>>t;
	string ch;
	getline(cin,ch);
	while(t--){
	    string s;
	    getline(cin,s);
	    int i= 0;
	    int j = s.size()-1;
	    int flag = 1;
	    while(i<j){
	        s[i] = tolower(s[i]);
	        s[j] = tolower(s[j]);
	        if(!isAlphaNumeric(s[i])){
	            i++;
	            continue;
	        }
	        if(!isAlphaNumeric(s[j])){
	            j--;
	            continue;
	        }
	        flag = (tolower(s[i++]) == tolower(s[j--]));
	        if(!flag) break;
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}