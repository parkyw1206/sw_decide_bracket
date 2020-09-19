#include <iostream>
#include <vector>

using namespace std;

bool checkValid(string str){
    vector<int> v;
    v.push_back(str[0]);
    for(int i = 1 ; i < str.size() ; i++){
        if(str[i] == v.back())
            v.pop_back();
        else
            v.push_back(str[i]);
    }
    if(v.size()==0)
        return false;
    else
        return true;
}
int main()
{
    cout<<"Hello World";
    string str = "(<{}>)";
    if(checkValid(str) == true)
        cout << "Correct!" << endl;
    else
        cout << "Wrong!"  << endl;
        
    str = "<<()>";
    if(checkValid(str) == false)
        cout << "Correct!" << endl;
    else
        cout << "Wrong!"  << endl;
    return 0;
}
