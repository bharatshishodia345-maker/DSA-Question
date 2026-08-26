#include <iostream>
using namespace std;

char lower_case(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A'+'a';
        return temp;
    }
}

bool check_palindrom(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(lower_case(name[s])!=lower_case(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


int get_lenght(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    cout <<"Enter Your Name";
    char name[20];
    cin >> name;

    int n = get_lenght(name);

    cout<<name<<endl;
    cout<<check_palindrom(name,n)<<endl;
    return 0;
}