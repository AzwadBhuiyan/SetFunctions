#include <iostream>
#include <string>
using namespace std;

    string s1;
    string s2;
    string op;
    string differenceSet(string s1, string s2)
    {
        //
        string ans = "";
        string emptyset = "empty";
        for(int i = 0;i<s1.size();i++){
            if(s2.find(s1[i])==string::npos)
            ans+=s1[i];
            else
             continue;
        }
        if(ans=="")
        return emptyset;
        else
        return ans;
    }
    string unionSet(string s1, string s2)
    {
        string ans = "";
        string emptyset = "empty";
        for(int i = 0;i<s1.size();i++){
            if(s2.find(s1[i])==string::npos)
            ans+=s1[i];
            else
             continue;
        }
            ans+=s2;

        if(ans=="")
        return emptyset;
        else
        return ans;
    }

        string intersectionSet(string s1, string s2)
    {
        string ans = "";
        string emptyset = "empty";
        for(int i = 0;i<s1.size();i++){
            if(s2.find(s1[i])==string::npos)
            continue;
            else

        ans+=s1[i];
        }

        if(ans=="")
        return emptyset;
        else
        return ans;
    }


int main()
{
    string input;
    while (input!="X"){
    cout<<"enter first string: ";
    cin>>s1;

    cout<<endl<<"enter second string: ";
    cin>>s2;

    cout<<endl<<"enter any of the operations from U, I and D:  ";
    cin>>op;

    if (op=="D")
    cout<<endl<<"Difference: "<<differenceSet(s1,s2)<<endl;

    else if (op=="U")
    cout<<endl<<"intersection: "<<unionSet(s1,s2)<<endl;

    else if (op=="I")
    cout<<endl<<"intersection: "<<intersectionSet(s1,s2)<<endl;

    else
        cout<<"Wrong input"<<endl;

    cout<<endl<<endl<<"Type X to end the program"<<endl<<"Or"<<endl<<"Type anything other than X to give new inputs"<<endl;
    cin>>input;
    cout<<endl<<endl;
        }

    return 0;
}
