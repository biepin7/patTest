#include "iostream"
#include "string"
using namespace std;

int n;

string max_name,min_name;
string max_no,min_no;
int max_score=-1,min_score=101;

int main(){
    cin>>n;
    while (n--){
        string name,no;
        int score;
        cin>>name>>no>>score;
        if(score > max_score) {
            max_name = name;
            max_no = no;
            max_score=score;
        }
        if(score < min_score){
            min_name= name;
            min_no = no;
            min_score=score;
        }
    }
    cout<<max_name<<" "<<max_no<<endl<<min_name<<" "<<min_no<<endl;
    return 0;
}