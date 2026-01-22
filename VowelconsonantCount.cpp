#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class Count{
    public:
    int Vowelcount = 0;
    int Consonantcount = 0;
    void count_VC(string str){
        int len = str.length();
        for(int i=0;i<len;i++){
            char c = tolower(str[i]);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                Vowelcount++;
                
            }
            else if(isalpha(c)){
                Consonantcount++;
            }
        }
    }
};
int main(){
    string userstr;
    cout<<"Enter the string:";
    cin>>userstr;
    Count obj;
    obj.count_VC(userstr);
    cout<<"Vowels:"<<obj.Vowelcount<<endl;
    cout<<"Consonant:"<<obj.Consonantcount<<endl;
    return 0;
}
