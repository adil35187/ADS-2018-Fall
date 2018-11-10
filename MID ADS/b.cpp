#include <bits/stdc++.h>
using namespace std;

int q,num;
string action;
bool check=true;
deque <int> dq;

int main()
{
	cin>>q;
	for(int i=0; i<q; i++)
	{
		cin>>action;
		if (action=="push_back")
		{
			cin>>num;
			if (check==true)
				dq.push_back(num);
			else 
				dq.push_front(num);
		}
		else if (action=="push_front")
		{
			cin>>num;
			if (check==true)
				dq.push_front(num);
			else 
				dq.push_back(num);
		}
		else if (action=="back")
		{
			if (dq.empty())
				cout<<";("<<endl;
			else
			{
				if (check==true)
				{
					cout<<dq.back()<<endl;
					dq.pop_back();
				}
				else{
					cout<<dq.front()<<endl;
					dq.pop_front();
				}
			}
		}
		else if (action=="front")
		{
			if (dq.empty())
				cout<<";("<<endl;
			else
			{
				if (check==true)
				{
					cout<<dq.front()<<endl;
					dq.pop_front();
				}
				else{
					cout<<dq.back()<<endl;
					dq.pop_back();
				}
			}
		}
		else if (action=="reverse")
		{
			if (check==true)
				check=false;
			else
				check=true;
		}
	}
	return 0;
}