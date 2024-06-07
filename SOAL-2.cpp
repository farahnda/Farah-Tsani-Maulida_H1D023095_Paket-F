#include<iostream>
using namespace std;

int main(){
    int input[] = {1000, 5000, 2000, 20000, 100000, 50000};
    int output[] = {100000, 50000, 20000, 5000, 2000, 1000};
    int i = 0;
    int j = 0;

    cout << "before: " << endl;
    for(i = 0; i < 6; i++){ 
        cout << input[i] << endl;
    }

    cout << "after: " << endl;
    for(j = 0; j < 6; j++){
        cout << output[j] << endl;
    }

return 0;

}

