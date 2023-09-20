#include<bits/stdc++.h>
using namespace std;

bool check(vector<char>& arr){
    if(arr[0]==arr[1] && arr[1]==arr[2]) return true;
    else if(arr[0]==arr[3] && arr[3]==arr[6]) return true;
    else if(arr[1]==arr[4] && arr[4]==arr[7]) return true;
    else if(arr[2]==arr[5] && arr[5]==arr[8]) return true;
    else if(arr[3]==arr[4] && arr[4]==arr[5]) return true;
    else if(arr[6]==arr[7] && arr[7]==arr[8]) return true;
    else if(arr[0]==arr[4] && arr[4]==arr[8]) return true;
    else if(arr[2]==arr[4] && arr[4]==arr[6]) return true;
    return false;
}

void print(vector<char> &arr){
    cout << endl;
    for(int i=0;i<arr.size();i++){
        if(i==3 || i==6){ 
            cout << endl;
            cout << "-|-|-";
            cout << endl;
        }
        cout << arr[i];
        if(i!=2 && i!=5 && i!=8){
            cout << "|";
        }
    }
    cout << endl;
    cout << endl;
}

int main(){
    
    int a,b;
    vector<char> arr = {'1','2','3','4','5','6','7','8','9'};
    print(arr);
    int cnt = 0;
    while(true){
        cout << "Enter the choice Player-1 (1-9) : ";
        cin >> a;
        cnt++;
        arr[a-1] = 'X';
        print(arr);
        if(check(arr)){
            cout << "Player-1 is winner! ";
            return 0;
        }
        if(cnt==9) break;
        cout << "Enter the choice Player-2 (1-9) : ";
        cin >> b;
        cnt++;
        arr[b-1] = 'O';
        print(arr);
        if(check(arr)){
            cout << "Player-2 is winner! ";
            return 0;
        }
    }
    cout << "Draw";
    return 0;
}