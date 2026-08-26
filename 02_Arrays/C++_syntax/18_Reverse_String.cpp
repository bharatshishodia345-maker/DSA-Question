#include <iostream>
using namespace std;

void reverse_string(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
        
    }
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

    reverse_string(name,n);
    cout<<name<<endl;
    return 0;
}