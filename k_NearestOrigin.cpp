//C++ using vector of pairs in stl



class Solution {
public:

    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) 
    {
        //declare a new vector v of pairs
        vector<pair<int,int>> v;
        
        //n is the size of the vector points that
        //have vectors of size 2 in it having x and y Cordinates
        int n=points.size();
        

        for(int i=0;i<n;i++)
        {
            //int dist is x^2 + y^2
            int dist = pow(abs(points[i][0]),2)+pow(abs(points[i][1]),2)

            //here i is stored to keep note of the index of the point in 
            //points vector so we can print it later on
            v.push_back({dist,i});
        }
        //sorting the pair vector 
        sort(v.begin().first,v.end().first);
        
        //declaring a new vector of vectors v1         
        vector<vector<int>> v1;

        for(int i=0;i<K;i++)
        {
          v1.push_back(points[v[i].second]);
        }
        return v1;
    }
};


#include<bits/stdc++.h>
using namespace std;

class Car{


    public:
        int x;
        int y;
        int id;
        //this acts as the pointer to current object 
        Car(int id,int x,int y){

            this->id = id;
            this->x = x;
            this->y = y;
            
        }

        int dist(){

            int distance = x*x + y*y;
            return distance;

        }

        void print(){
            cout<<"ID: "<<id<<" ";
            cout<<"Cordinates: "<<x<<", "<<y<<endl;

        }

};

//queue doest no know how to compare two cars
//functor . Functional Objects

class CarCompare{
    public:
        //method to overload () operator
        bool operator()(Car a, Car b){
            //code here
            return a.dist()>b.dist();
            //if distance of car a is less than distance of car b
            //this will return true
            //if you want to  make a min head just
            //change a.dist()<b.dist() to a.dist()<b.dist()
        

        }


};

int main(){
    
    //to push car object into queue 
    //queue must be of type car

    priority_queue<Car,vector<Car>,CarCompare> pq;
    int s;
    cout<<"Enter the value of k: ";
    cin>>s;
    cout<<endl;
    
    
    //If you select a block of code and use the 
    //key sequence Ctrl+K+C, 
    //you'll comment out the section of code.
    //Ctrl+K+U will uncomment the code.

    // int s; 
    // cin>>s;
    
    // //insert in x
    // while(s--){

    //     int temp;
    //     cin>>temp;
    //     x.push_back(temp);
        
    // } 

    // while(s--){

    //     int temp;
    //     cin>>temp;
    //     y.push_back(temp);
        
    // } 

    int x[10] = {5,6,17,18,9,11,0,3};
    int y[10] = {1,-2,8,9,10,91,1,2};

    for(int i=0; i<8; i++){

        Car c(i+1,x[i],y[i]);
        pq.push(c);
    }
    
    
    


    while(!pq.empty() && s--){

        Car p = pq.top();
        p.print();
        pq.pop();

    }
    cout<<endl;

    return 0;
}
