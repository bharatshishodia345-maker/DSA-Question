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

int remove(char name[],int n){
    for(int i = 0; i<n; i++){
        if(name[i] == 'a' && name[i+1] == 'b' && name[i+2]=='c'){
            name[i] = name[i+3];

        }
    }
    

}


int main()
{
    cout << "Enter Your Name: ";

    char name[20];

    cin.getline(name, 20);

    int n = get_lenght(name);

    remove(name, n);

    cout << name << endl;

    return 0;
}
   
