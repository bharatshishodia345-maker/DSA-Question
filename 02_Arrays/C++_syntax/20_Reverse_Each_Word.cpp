#include <iostream>
using namespace std;


int get_lenght(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


void reverse_string(char name[], int s,int e){
   
    while(s<e){
        swap(name[s++],name[e--]);
        
    }
}


int check(char name[], int n){

    int i = 0;
    int s = 0;
    while(i<n){
        if(name[i] != ' '){
            i++;
        }
        else{
            int e = i-1;
            reverse_string( name, s,e);
            s = i+1;
            i++;

        }
    }
    reverse_string(name, s, n - 1);
}


int main()
{
    cout << "Enter Your Name: ";

    char name[20];

    cin.getline(name, 20);

    int n = get_lenght(name);

    check(name, n);

    cout << name << endl;

    return 0;
}