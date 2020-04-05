#include<cmath>
#include<iostream>

#define ll long long int
#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int matrix(){
    int n,k;
    cin>>n>>k;
    if(n==2 && k==2){
        cout<<"POSSIBLE"<<endl;
        cout<<"1 2\n2 1"<<endl;
    }else if(n==2 && k==3){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else if(n==2 && k==4){
        cout<<"POSSIBLE"<<endl;
        cout<<"2 1\n1 2"<<endl;
    }
    else if(n==3 && k==3){
        cout<<"POSSIBLE"<<endl;
        cout<<"1 2 3\n3 1 2\n2 3 1"<<endl;
    }
    else if(n==3 && k==4){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else if(n==3 && k==5){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else if(n==3 && k==6){
        cout<<"POSSIBLE"<<endl;
        cout<<"2 1 3\n3 2 1\n1 3 2"<<endl;
    }
    else if(n==3 && k==7){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else if(n==3 && k==8){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else if(n==3 && k==9) {
        cout << "POSSIBLE" << endl;
        cout << "3 2 1\n1 3 2\n2 1 3" << endl;
    }
    else if(n==4){
        if(k==5 || k==15 ){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
        cout<<"POSSIBLE"<<endl;
        if(k==4){
            cout<<"1 2 3 4\n"
                  "4 1 2 3\n3 4 1 2\n2 3 4 1"<<endl;
        }
        if(k==6){
            cout<<"1 2 3 4\n2 1 4 3\n3 4 2 1\n4 3 1 2 "<<endl;
        }
        if(k==7){
            cout<<"1 3 4 2\n2 1 3 4\n3 4 2 1\n4 2 1 3"<<endl;
        }
        if(k==8){
            cout<<"2 1 4 3\n4 2 3 1\n1 3 2 4\n3 4 1 2"<<endl;
        }
        if(k==9){
            cout<<"1 3 4 2 \n"
                  "4 1 2 3 \n"
                  "2 4 3 1 \n"
                  "3 2 1 4  "<<endl;
        }
        if(k==10){
            cout<<"2 4 3 1 \n"
                  "4 3 1 2 \n"
                  "3 1 2 4 \n"
                  "1 2 4 3 "<<endl;
        }
        if(k==11){
            cout<<"2 3 4 1 \n"
                  "4 2 1 3 \n"
                  "1 4 3 2 \n"
                  "3 1 2 4  "<<endl;
        }
        if(k==12){
            cout<<"3 1 2 4 \n"
                  "4 3 1 2 \n"
                  "2 4 3 1 \n"
                  "1 2 4 3  "<<endl;
        }
        if(k==13){
            cout<<"4 2 3 1 \n"
                  "3 4 1 2 \n"
                  "1 3 2 4 \n"
                  "2 1 4 3  "<<endl;
        }
        if(k==14){
            cout<<"4 2 3 1 \n"
                  "2 3 1 4 \n"
                  "3 1 4 2 \n"
                  "1 4 2 3  "<<endl;
        }
        if(k==16){
            cout<<"4 3 2 1 \n"
                  "1 4 3 2 \n"
                  "2 1 4 3 \n"
                  "3 2 1 4  "<<endl;
        }
    }
    else if(n==5){
        if(k==6 || k==24){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
        cout<<"POSSIBLE"<<endl;
        if(k==7){
            cout<<"2 5 3 4 1\n4 1 5 2 3\n5 2 1 3 4\n3 4 2 1 5\n1 3 4 5 2"<<endl;
        }
        if(k==23){
            cout<<"4 1 3 2 5\n2 5 1 4 3\n1 4 5 3 2\n3 2 4 5 1\n5 3 2 1 4"<<endl;
        }
        if(k==5){
            cout<<"1 2 3 4 5 \n"
                  "5 1 2 3 4 \n"
                  "4 5 1 2 3 \n"
                  "3 4 5 1 2 \n"
                  "2 3 4 5 1 "<<endl;
        }
        if(k==8){
            cout<<"1 2 4 3 5 \n"
                  "3 1 2 5 4 \n"
                  "5 3 1 4 2 \n"
                  "4 5 3 2 1 \n"
                  "2 4 5 1 3 "<<endl;
        }
        if(k==9){
            cout<<"1 2 3 4 5 \n"
                  "4 1 2 5 3 \n"
                  "5 4 1 3 2 \n"
                  "3 5 4 2 1 \n"
                  "2 3 5 1 4 "<<endl;
        }
        if(k==10){
            cout<<"2 1 3 4 5 \n"
                  "5 2 1 3 4 \n"
                  "4 5 2 1 3 \n"
                  "3 4 5 2 1 \n"
                  "1 3 4 5 2 "<<endl;
        }
        if(k==11){
            cout<<"1 3 2 5 4 \n"
                  "5 1 3 4 2 \n"
                  "4 5 1 2 3 \n"
                  "2 4 5 3 1 \n"
                  "3 2 4 1 5 "<<endl;
        }
        if(k==12){
            cout<<"1 4 2 5 3 \n"
                  "5 1 4 3 2 \n"
                  "3 5 1 2 4 \n"
                  "2 3 5 4 1 \n"
                  "4 2 3 1 5 "<<endl;
        }
        if(k==13){
            cout<<"2 3 1 4 5 \n"
                  "4 2 3 5 1 \n"
                  "5 4 2 1 3 \n"
                  "1 5 4 3 2 \n"
                  "3 1 5 2 4 "<<endl;
        }
        if(k==14){
            cout<<"2 3 1 5 4 \n"
                  "5 2 3 4 1 \n"
                  "4 5 2 1 3 \n"
                  "1 4 5 3 2 \n"
                  "3 1 4 2 5"<<endl;
        }
        if(k==15){
            cout<<"3 1 2 4 5 \n"
                  "5 3 1 2 4 \n"
                  "4 5 3 1 2 \n"
                  "2 4 5 3 1 \n"
                  "1 2 4 5 3 "<<endl;
        }
        if(k==16){
            cout<<"3 5 1 2 4 \n"
                  "2 3 5 4 1 \n"
                  "4 2 3 1 5 \n"
                  "1 4 2 5 3 \n"
                  "5 1 4 3 2 "<<endl;
        }
        if(k==17){
            cout<<"4 3 1 2 5 \n"
                  "2 4 3 5 1 \n"
                  "5 2 4 1 3 \n"
                  "1 5 2 3 4 \n"
                  "3 1 5 4 2 "<<endl;
        }
        if(k==18){
            cout<<"3 4 1 5 2 \n"
                  "5 3 4 2 1 \n"
                  "2 5 3 1 4 \n"
                  "1 2 5 4 3 \n"
                  "4 1 2 3 5 "<<endl;
        }
        if(k==19){
            cout<<"4 5 3 2 1 \n"
                  "2 4 5 1 3 \n"
                  "1 2 4 3 5 \n"
                  "3 1 2 5 4 \n"
                  "5 3 1 4 2 "<<endl;
        }
        if(k==20){
            cout<<"4 3 2 1 5 \n"
                  "5 4 3 2 1 \n"
                  "1 5 4 3 2 \n"
                  "2 1 5 4 3 \n"
                  "3 2 1 5 4 "<<endl;
        }
        if(k==21){
            cout<<"5 4 1 2 3 \n"
                  "2 5 4 3 1 \n"
                  "3 2 5 1 4 \n"
                  "1 3 2 4 5 \n"
                  "4 1 3 5 2 "<<endl;
        }
        if(k==22){
            cout<<"5 4 2 3 1 \n"
                  "3 5 4 1 2 \n"
                  "1 3 5 2 4 \n"
                  "2 1 3 4 5 \n"
                  "4 2 1 5 3 "<<endl;
        }
        if(k==25){
            cout<<"5 4 2 1 3 \n"
                  "3 5 4 2 1 \n"
                  "1 3 5 4 2 \n"
                  "2 1 3 5 4 \n"
                  "4 2 1 3 5 "<<endl;
        }
    }

}

int main()
{
    int t;
    cin>>t;
    int test=1;
    while(t--){
        cout<<"Case #"<<test<<": ";
        matrix();
        test++;
    }
    return 0;
}
