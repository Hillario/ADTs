#include <iostream>
#include <math.h>
#include <vector>
#include <Operators.h>
#include <MyInput.h>

using namespace std;   //make std names available without std:: prefix

int square(int x){
return x*x;
}

void edsac(){
int i=0;
while(i<100){
cout<<i<<"\t"<<square(i)<<"\n";
++i;
}
}

void vector_map(){
   vector<int> myvectors(6);
     myvectors[0]=5;
     myvectors[1]=5;
     myvectors[2]=2;
     myvectors[3]=7;
     myvectors[4]=0;
     myvectors[5]=8;

       cout<<myvectors[0]<<"..."<<myvectors[5];

}

double sphere_volume(double r){

const double pi=3.141592653589793;
   double volume=(4.0*pi*r*r*r)/3.0;
     return volume;
}

void s_volumes(){
    vector<double> myvolumes;
        myvolumes.push_back(sphere_volume(3.0));
        myvolumes.push_back(sphere_volume(6.0));
        myvolumes.push_back(sphere_volume(7000.0));
        myvolumes.push_back(sphere_volume(21.0));

            for(double i=0;i<myvolumes.size();++i){
                cout<<"Sphere "<<i<<": "<<myvolumes[i]<<"\n";
            }
}

void vector_operations(){
    vector<double> temps;
    double temp;


    while(cin>>temp){
        temps.push_back(temp);
        double sum=0;
        for(double i=0;i<temps.size();++i){
            sum+=temps[i];
        }
        cout<<"Average Temperature: "<<sum/temps.size();
        //sort(temps.begin(),temps.end());//from the standard library
        cout<<"\nMedian Temperature: "<<temps[(temps.size())/2];
    }

}

void pointer_Array()
{
    char v[7]={'H','I','L','L','A','R','Y'};
    char* p=&v[3]; //pointer to p is the address of v[3]
    cout<<"The pointer p is: "<<*p;
}

/**C++ also offers a simpler for -statement,
*called a range- for -statement,
*for loops that traverse a sequence in the simplest way:
*/

void RangeForStatement()
{
    int v[10]={0,1,2,3,4,5,6,7,8,9};
    for(auto x:v)  //for each x in v
    {
        cout<<x<<'\n';
    }
    for(auto x:{10,20,30,40,50,60,70,80,90})
    {
        cout<<x<<'\n';
    }
}

int main()
{
    /*string first_name;
    double age;
    cout<<"Please enter your first name:\n";
    cin>>first_name;
    cout<<"Please enter your age:\n";
    cin>>age;
    double final_age=age*12;
    cout<<"Hello, "<<first_name<<" Age("<<final_age<<")\n";*/
    //edsac();
    //vector_map();
    //s_volumes();
    //vector_operations();
    /*Operators myoperator;
    cout<<"Volume of Earth: "<<myoperator.VolumeOfEarth();*/
    //pointer_Array();
    RangeForStatement();
}




