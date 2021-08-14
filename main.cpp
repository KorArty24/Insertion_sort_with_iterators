#include <QCoreApplication>
#include <vector>
using namespace std;
void InsertionSort(vector<int> &v);
int main(int argc, char *argv[])

{
    //QCoreApplication a(argc, argv);
    vector<int> vec = {56,25,37,58,95,19,73,30};
    InsertionSort(vec);

    return 0;
}

void InsertionSort(vector<int> &v){
    vector<int>::iterator ptr=v.begin();
    advance(ptr,1);
    for (ptr;ptr<prev(v.end(),0);++ptr){
        vector<int>::iterator previous=prev(ptr,1);
        if(*previous>*ptr){
        while((*previous>*ptr)&&(ptr>v.begin())){
            int temp= *previous;
            v.erase(previous);
            v.insert(ptr,temp);
            ptr--;
            previous--;
            }
        }
    }
}

