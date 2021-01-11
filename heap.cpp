#include <iostream>
#include <vector>
using namespace std;

class Heap{

        vector<int> v;
        //configuration of a heap

        boolminHeap;

        bool compare(int a,int b){

            if(minHeap){
                return a<b;
            }
            else{
                return a>b;
            }

        }


    public:
        minHeap(bool type=true){

            minHeap = type;
            //blocking the 0th index in the vector of
            v.push_back(-1);

        }

        void push(int data){
            //insert at last
            v.push_back(data);
            //take the elemen to right position
            //restore head property
            int index = v.size()-1;
            int parent = index/2;

            while(index>1 && compare(v[index], v[parent])){

                swap(v[index],v[parent]);
                index = parent;
                parent = parent/2;

            }



        }

        bool  empty(){
            return v.size() == 1;
        }

        int top{
            return v[1];
        }


};



int main() {

    Heap h;
    int t;
    cin>>t;
    while(t--){

        int temp;
        cin>>temp;
        h.push(temp);
    }

    cout<<h.top()<<endl;

    return 0;
}