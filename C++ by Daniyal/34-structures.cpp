// Structures, Unions & Enums in C++

#include <iostream>
using namespace std;

typedef struct players{
    int num;
    char favChar;
    float score;
} pl;

int main(){
    
    // struct players daniyal; 
    pl daniyal;  //typedef lga k player ki jgha sirf ep b likh skty hain
    daniyal.num=20;
    daniyal.favChar='a';
    daniyal.score=169;

    cout<<"Fav Number of daniyal is "<<daniyal.num<<endl;
    cout<<"FavChar of daniyal is "<<daniyal.favChar<<endl;
    cout<<"Score of daniyal is "<<daniyal.score<<endl;

    return 0;
}