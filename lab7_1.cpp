#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string t;
    cout << "Input text: ";
	cin >>t;
	string T = func2(t);
    cout << "Reversed text: "<<func1(t)<<"\n";
    cout << "Palindrome: ";
		if(T==func1(T)){
			cout<<"Yes";
		}else{
			cout<<"No";
		}
    return 0;
}
