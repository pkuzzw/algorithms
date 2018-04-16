#include<iostream>
#include<vector>
#include<string>
using namespace std;
/** Simple Insertion Sort**/
template <typename T>
void insertionSort(vector<T> &a){
    int j;
    for(int p=1; p < a.size(); p++)
    {
        T tmp=a[p];
        for(j=p; j>0 && tmp < a[j-1];j--)
            a[j]=a[j-1];
        a[j]=tmp;
    }
    //return 0;
}
/**Shell Sort**/
template <typename T>
void shellsort(vector<T> &a)
{
    for(int gap = a.size() / 2; gap > 0; gap /=2){
        for(int i=gap; i< a.size(); i++){
            T tmp=a[i];
            int j=i;
            for(;j>=gap && tmp <a[j-gap]; j-=gap)
                a[j]=a[j-gap];
            a[j]=tmp;           
        }
    }
}
int main(){
    vector<int> a={34,8,64,51,32,21};
    vector<int> b={34,8,64,51,32,21};
    vector<int>::iterator it;
    for(it=a.begin();it!=a.end();it++)
       cout<<*it<<"->";
    cout<<endl;
    insertionSort(a);
    for(it=a.begin();it!=a.end();it++)
       cout<<*it<<"->";
    cout<<endl;

    cout<<"-------------------"<<endl;
    for(it=b.begin();it!=b.end();it++)
       cout<<*it<<"->";
    cout<<endl;
    shellsort(b);
    for(it=b.begin();it!=b.end();it++)
       cout<<*it<<"->";
    cout<<endl;

    return 0;
}
