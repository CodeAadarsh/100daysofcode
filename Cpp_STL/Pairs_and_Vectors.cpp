// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     pair<int,string> p;
//     p = make_pair(2, "ABC");
//     pair<int, string> p1 =p;
//     p1.first =3;
//     // cout<< p.first << " " << p.second <<endl;
//     pair<int, int> parr[3];
//     parr[0] ={1,2};
//     parr[1] ={5,6};
//     cout<<parr[0].first<<" "<<parr[0].second;
//     cout<<parr[1].first<<" "<<parr[1].second;
// }


#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    cout<<"size : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v(5);
    v.push_back(12);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        
        v.push_back(rand()/10000000);
    }
    printVector(v);
    cout<<"----------------"<<endl;
    cout<<sizeof(v)/sizeof(int);
    v.pop_back();
    v.pop_back();
    v.pop_back();
    printVector(v);
    vector<int> v2 =v;
    printVector(v2);
}