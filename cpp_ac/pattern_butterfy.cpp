#include <iostream>

using namespace std;

int main(){
    
    int n, m{1};
    cout << "Enter Number " << endl;
    cin >> n;
    for(int i=0; i < n - 1; i++){
        for(int j=0; j < i+1; j++){
            cout<<"*";
        }
        for(int j=0; j < 2*n-2*i-3;j++){
            cout<<" ";
        }
        for(int j=0; j < i+1;j++){
            cout<<"*";
        }

        cout << endl;
    }

    for(int i = 0; i < 2*n - 1; i++){
        cout<<"*";
    }
    cout << endl;
    
    for(int i=0; i < n - 1; i++){
        for(int j=0; j < n - 2 - i; j++){
            cout<<"*";
        }
        for(int j=0; j < 2*i+3;j++){
            cout<<" ";
        }
        for(int j=0; j < n - 2 -i;j++){
            cout<<"*";
        }

        cout << endl;
    }



    return 0;
}
