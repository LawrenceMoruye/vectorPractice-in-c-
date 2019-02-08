#include <iostream>
#include <vector>
using namespace std;

void fillvector(vector<int>&);
void printvector(const vector<int>&);
void reversed(const vector<int>&);
void replace(vector<int>&);

int main()
{
	vector<int>myvector;
	fillvector(myvector);
	printvector(myvector);
	reversed(myvector);
	replace(myvector);
	return 0;
}
void fillvector(vector<int>& newmyvector)
{
	cout<<"type a list of vectors,enter -1 to stop";
	int input;
	cin>>input;
	while(input!=-1)
	{
		newmyvector.push_back(input);
		cin>>input;
		//cout<<newmyvector[i];
	}
	cout<<endl;

}

void printvector(const vector<int>& newmyvector)

{
	cout<<"vector"<<endl;
	for(unsigned int i=0;i<newmyvector.size();i++)
	{
		cout<<newmyvector[i]<<" ";
	}

}

void reversed(const vector  <int>& newmyvector)
{
	cout<<"vector in reversed orrder";
	for (unsigned int i = newmyvector.size(); i >0; i--)
	{
		cout<<newmyvector[i-1];
	}
	cout<<endl;
}

void replace(vector<int>& newmyvector)
{
	int old,replace;
	cout<<"enter a number to be replaced,then enter a number to replace it with";
	cin>>old>>replace;
	for ( unsigned int i = 0; i < newmyvector.size(); ++i)
	{
		if(newmyvector[i]==old)
		{
			newmyvector[i]=replace;
		}
	}
	printvector(newmyvector);
	cout<<endl;
}