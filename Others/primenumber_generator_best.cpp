#include<iostream>
#include<conio.h>

int digit(int arr[],int number){
    if(number < 0){
        number = -1 * number;
    }
    for(int i = 9; number > 0; i--){
        arr[i] = number % 10;
        number = number / 10;
    }
}

using namespace std;
int main()
{
    int n, r, t;

    int arr[10] = {0};

    bool flag = true;

    cin >> n;

    for(int i = 2; i <= n; i++){
            flag = true;
            t = 1;
        for(int j = 2; j <= i - 1; j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag == true){
            digit(arr,i);
            for(int p = 0; p <= 9; p++){
                if(9 == arr[p]){
                    flag = false;
                    t = 0;
                }
                else {
                    t = 1;
                }
            }
            if(t == 1){
                cout << i << endl;
            }
        }
    }

}

