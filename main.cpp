#include<iostream>
#include<string>
#include<stack>
#include<queue>

using namespace std;

int main(){
  stack<char> s;
	queue<char> q;
	string str;
	int i= 0;
	char c;
	cout << "Enter a word: "; 
	getline(cin, str);
	for (i=0; i<str.length(); i++){
		c = str[i];
		q.push(c);
		s.push(c);
	}
	while(!q.empty() && !s.empty()){
		if(q.front() != s.top()){
			cout << "This word is not a palindrome";
			break;
		}
		else if(q.front()= s.top()){
			i++;
			q.pop();
			s.pop();
			if(i= str.length()){
				cout << "This word is a palindrome";
				break;
			}
		}
	}
}
