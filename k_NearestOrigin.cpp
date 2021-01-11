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
            return a.dist()<b.dist();
            //if distance of car a is less than distance of car b
            //this will return true
        

        }


};

int main(){
    
    //to push car object into queue 
    //queue must be of type car

    priority_queue<Car,vector<Car>,CarCompare> pq;
    
    
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
    
    
    


    while(!pq.empty()){

        Car p = pq.top();
        p.print();
        pq.pop();

    }
    cout<<endl;

    return 0;
}
