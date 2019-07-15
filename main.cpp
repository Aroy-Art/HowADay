#include <iostream>
using namespace std;


int main()
{
    // level [0] = Energy [1] = Working Environment [2] = Learned [3] = Help
    int level[]={00,00,00,00,00};
    int sum=0;
    int exit=0;

    cout<<"Energy level\nWrite a number between 1 and 10\n\n";
    cin>>level[0];
    cout<<"\nEnergy level = "<<level[0]<<endl<<endl;


    cout<<"Working Environment level\nWrite a number between 1 and 10\n\n";
    cin>>level[1];
    cout<<"\nWorking Environment level = "<<level[1]<<endl<<endl;


    cout<<"Learned level\nWrite a number between 1 and 10\n\n";
    cin>>level[2];
    cout<<"\nLearned level = "<<level[0]<<endl<<endl;


    cout<<"Help level\nWrite a number between 1 and 10\n\n";
    cin>>level[3];
    cout<<"\nHelp level = "<<level[0]<<endl<<endl;


    cout<<"Accomplishment level\nWrite a number between 1 and 10\n\n";
    cin>>level[4];
    cout<<"\nAccomplishment level = "<<level[4]<<endl<<endl;


    for(int x = 0; x < 5; x++){
        sum += level[x];
        //cout<<sum<<endl;
    }
    cout<<"Result"<<sum<<endl;

    cout<<"Exit(y)";
    cin>>exit;
    //cout << "Hello world!" << endl;

    return 0;
}
//2002248112 2002248109
