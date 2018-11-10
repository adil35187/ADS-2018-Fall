#include <iostream>
#include <string>
using namespace std;

int a[100];
int t = 0;
int h = 0;


int front(){
    return a[h];
}

int size(){
    return t - h;
}

bool empty(){
    return t == 0;
}

void push(int x){
    a[t] = x;    
    t++;
}

int pop(){
    int res = a[t-1];
    t--;
    return res;
}

void clear(){
    t = 0;
}

void exit(){
    cout<<"bye"<<endl;
} 




int main(){

    string s="";
    while(cin>>s){
        switch(s){
            case ("push"):
                int a;
                cin>>a;
                push(a);
                cout<<"ok"<<endl;
                break;
            
            case ("pop"):
                cout<<pop();
                break;
            
            case ("front"):
                cout<<front();
                break;
            
            case ("size"):
                cout<<size();
                break;
            
            case ("clear"):
                clear();
                cout<<"ok"<<endl;
                break;
            
            case ("exit"):
                exit();
                return 0;
                break;
            

        }
    }
  
    return 0;
}